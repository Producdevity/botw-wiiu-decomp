import io
import json
import tempfile
import unittest
from contextlib import redirect_stdout
from pathlib import Path
from unittest.mock import patch

from botw_decomp.contracts import (
    ClangParser,
    audit_contracts,
    compare_contracts,
    locate_libclang,
    main,
)

HERE = Path(__file__).parent
FUNCTION = "fn_00000001"


class ParsedContracts:
    @classmethod
    def setUpClass(cls):
        try:
            cls.clang = ClangParser()
        except ValueError as error:
            if "was not found" in str(error):
                raise unittest.SkipTest(str(error))
            raise
        cls.addClassCleanup(cls.clang.close)

    def parse(self, source, directory, name):
        path = Path(directory) / name
        path.write_text(source)
        return self.clang.parse(path, directory)

    def compare_sources(self, declaration, definition):
        with tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary:
            a = self.parse(declaration, temporary, "caller.cpp")
            b = self.parse(definition, temporary, "callee.cpp")
            self.assertEqual(a["errors"], [])
            self.assertEqual(b["errors"], [])
            ac = next(
                d["contract"] for d in a["declarations"] if d["symbol"] == FUNCTION
            )
            bc = next(
                d["contract"]
                for d in b["declarations"]
                if d["symbol"] == FUNCTION and d["definition"]
            )
            return compare_contracts(ac, bc)


class Contracts(ParsedContracts, unittest.TestCase):
    def test_actual_pointer_declaration_bool_definition_shape(self):
        findings = self.compare_sources(
            'extern "C" void* fn_00000001(void*);',
            'extern "C" bool fn_00000001(void*) { return false; }',
        )
        self.assertEqual(
            [(f["position"], f["severity"]) for f in findings], [("return", "conflict")]
        )

    def test_actual_void_one_argument_int_no_argument_shape(self):
        findings = self.compare_sources(
            'extern "C" void fn_00000001(unsigned*);',
            'extern "C" int fn_00000001() { return 1; }',
        )
        self.assertEqual(
            [f["kind"] for f in findings],
            ["type_contract_conflict", "parameter_count_conflict"],
        )

    def test_byte_and_bool_do_not_match_unsigned(self):
        for typ in ("unsigned char", "bool"):
            with self.subTest(type=typ):
                findings = self.compare_sources(
                    'extern "C" unsigned fn_00000001(unsigned);',
                    f'extern "C" {typ} fn_00000001({typ} value) {{ return value; }}',
                )
                self.assertEqual(
                    [(f["position"], f["severity"]) for f in findings],
                    [("return", "conflict"), ("parameter 1", "conflict")],
                )

    def test_pointer_vs_same_width_unsigned_is_a_conflict(self):
        findings = self.compare_sources(
            'extern "C" char* fn_00000001();',
            'extern "C" unsigned fn_00000001() { return 0; }',
        )
        self.assertEqual(findings[0]["severity"], "conflict")
        self.assertEqual(findings[0]["position"], "return")

    def test_equivalent_typedef_and_top_level_parameter_const(self):
        findings = self.compare_sources(
            'typedef unsigned Word; extern "C" int fn_00000001(const Word);',
            'extern "C" int fn_00000001(unsigned value) { return value != 0; }',
        )
        self.assertEqual(findings, [])

    def test_opaque_object_pointer_difference_requires_review(self):
        findings = self.compare_sources(
            'extern "C" bool fn_00000001(void*);',
            'struct Handle { void* owner; int index; }; extern "C" bool fn_00000001(const Handle*) { return false; }',
        )
        self.assertEqual(
            [(f["severity"], f["kind"]) for f in findings],
            [("review", "object_pointer_contract_difference")],
        )

    def test_function_pointer_signature_is_parsed(self):
        findings = self.compare_sources(
            'extern "C" void fn_00000001(void (*)(unsigned));',
            'extern "C" void fn_00000001(void (*)(bool)) {}',
        )
        self.assertEqual(
            [(f["position"], f["severity"]) for f in findings],
            [("parameter 1", "conflict")],
        )

    def test_variadicness_is_checked(self):
        findings = self.compare_sources(
            'extern "C" void fn_00000001(unsigned, ...);',
            'extern "C" void fn_00000001(unsigned) {}',
        )
        self.assertEqual([f["kind"] for f in findings], ["variadic_conflict"])

    def test_native_vector_initialization_parses_under_explicit_shim(self):
        with tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary:
            result = self.parse(
                'extern "C" void fn_00000001(__vec2x32float__* output, float x, float y) { const __vec2x32float__ pair={x,y}; output[0]=pair; }',
                temporary,
                "vector.cpp",
            )
            self.assertEqual(result["errors"], [])
            self.assertEqual(result["analysis_shims_present"], ["__vec2x32float__"])
            pointer = result["declarations"][0]["contract"]["parameters"][0]
            self.assertEqual(pointer["pointee"]["kind"], "Vector")
            self.assertEqual(pointer["pointee"]["count"], 2)

    def test_parse_error_discards_even_preceding_valid_declaration(self):
        with tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary:
            result = self.parse(
                'extern "C" bool fn_00000001();\nextern "C" int broken( {',
                temporary,
                "broken.cpp",
            )
            self.assertTrue(result["errors"])
            self.assertEqual(result["declarations"], [])

    def test_cpp_linkage_is_not_silently_treated_as_extern_c(self):
        with tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary:
            result = self.parse("int fn_00000001() { return 0; }", temporary, "cpp.cpp")
            self.assertTrue(result["errors"])
            self.assertEqual(result["declarations"], [])

    def test_unsupported_calling_convention_attribute_is_not_ignored(self):
        with tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary:
            result = self.parse(
                'extern "C" __attribute__((stdcall)) int fn_00000001();',
                temporary,
                "attribute.cpp",
            )
            self.assertTrue(result["errors"])
            self.assertEqual(result["declarations"], [])

    def test_unsupported_canonical_type_discards_partial_contracts(self):
        with tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary:
            result = self.parse(
                'extern "C" void fn_00000001(int (*values)[3]);', temporary, "array.cpp"
            )
            self.assertTrue(
                any("unsupported canonical type" in error for error in result["errors"])
            )
            self.assertEqual(result["declarations"], [])

    def test_noexcept_difference_is_a_contract_conflict(self):
        findings = self.compare_sources(
            'extern "C" void fn_00000001() noexcept;',
            'extern "C" void fn_00000001() {}',
        )
        self.assertEqual(
            [finding["kind"] for finding in findings],
            ["exception_specification_conflict"],
        )

    def test_equivalent_exception_specifications_normalize(self):
        for first, second in [
            ("noexcept", "noexcept(true)"),
            ("throw()", "noexcept"),
            ("noexcept(false)", ""),
        ]:
            with self.subTest(first=first, second=second):
                self.assertEqual(
                    self.compare_sources(
                        f'extern "C" void fn_00000001() {first};',
                        f'extern "C" void fn_00000001() {second} {{}}',
                    ),
                    [],
                )

    def test_pointer_address_space_difference_is_not_consistent(self):
        findings = self.compare_sources(
            'extern "C" void fn_00000001(__attribute__((address_space(1))) int*);',
            'extern "C" void fn_00000001(int*) {}',
        )
        self.assertTrue(findings)
        self.assertEqual(findings[0]["position"], "parameter 1")
        self.assertIn("address_space(1)", findings[0]["declaration_type"])

    def test_hidden_size_parameter_attributes_fail_closed(self):
        for attribute in ("pass_object_size", "pass_dynamic_object_size"):
            with (
                self.subTest(attribute=attribute),
                tempfile.TemporaryDirectory(prefix="botw-contract-test-") as temporary,
            ):
                result = self.parse(
                    f'extern "C" unsigned fn_00000001(const char* p __attribute__(({attribute}(0))));',
                    temporary,
                    "hidden-size.cpp",
                )
                self.assertTrue(result["errors"])
                self.assertEqual(result["declarations"], [])


class BindingScope(ParsedContracts, unittest.TestCase):
    def fixture(
        self,
        first,
        second,
        shared=False,
        missing=False,
        repeat=False,
        manifest_race=False,
        source_symlink=False,
    ):
        with tempfile.TemporaryDirectory(prefix="botw-binding-test-") as temporary:
            root = Path(temporary)
            (root / "config").mkdir()
            (root / "reconstructions").mkdir()
            (root / "include/botw").mkdir(parents=True)
            functions = []
            if shared:
                (root / "include/botw/api.h").write_text(first)
            for caller, decl in [("fn_00000010", first), ("fn_00000020", second)]:
                prefix = '#include "botw/api.h"\n' if shared else decl
                source = prefix + f'\nextern "C" void {caller}() {{}}\n'
                (root / "reconstructions" / f"{caller}.cpp").write_text(source)
                functions.append(
                    {
                        "id": caller,
                        "address": hex(int(caller[3:], 16)),
                        "size": 4,
                        "sha256": "0" * 64,
                        "status": "unmatched",
                        "symbol": caller,
                        "source": f"reconstructions/{caller}.cpp",
                        "bindings": {"fn_00000004": "0x00000004"},
                    }
                )
            if missing:
                (root / "reconstructions/fn_00000020.cpp").write_text(
                    'extern "C" void fn_00000020() {}'
                )
            (root / "config/functions.json").write_text(
                json.dumps({"schema_version": 1, "functions": functions})
            )
            if source_symlink:
                path = root / "reconstructions/fn_00000020.cpp"
                path.unlink()
                path.symlink_to(root / "reconstructions/fn_00000010.cpp")
            if manifest_race:
                from botw_decomp.project import functions

                def mutate(snapshot_root):
                    rows = functions(snapshot_root)
                    path = root / "config/functions.json"
                    changed = json.loads(path.read_text())
                    changed["functions"][0]["bindings"] = {"fn_00000008": "0x00000008"}
                    path.write_text(json.dumps(changed))
                    return rows

                with patch("botw_decomp.contracts.functions", mutate):
                    return audit_contracts(root, libclang=self.clang.library_path)
            result = audit_contracts(root, libclang=self.clang.library_path)
            return (
                (result, audit_contracts(root, libclang=self.clang.library_path))
                if repeat
                else result
            )

    def test_unknown_pointer_return_declarations_need_contract_review(self):
        result = self.fixture(
            'extern "C" char* fn_00000004();', 'extern "C" void* fn_00000004();'
        )
        self.assertEqual(result["coverage"]["selected_translation_units"], 2)
        self.assertEqual(
            result["coverage"]["binding_edges_with_published_definitions"], 0
        )
        group = result["repeated_unknown_declarations"][0]
        self.assertFalse(group["definition_available"])
        self.assertEqual(group["status"], "review")
        finding = group["comparisons"][0]["findings"][0]
        self.assertEqual(finding["first_declaration_type"], "char *")
        self.assertEqual(finding["second_declaration_type"], "void *")
        self.assertNotIn("definition_type", finding)
        self.assertEqual(result["status"], "findings")

    def test_unknown_pointer_parameter_declarations_need_contract_review(self):
        result = self.fixture(
            'extern "C" void fn_00000004(unsigned*);',
            'extern "C" void fn_00000004(void*);',
        )
        group = result["repeated_unknown_declarations"][0]
        self.assertEqual(group["status"], "review")
        self.assertEqual(
            group["comparisons"][0]["findings"][0]["position"], "parameter 1"
        )

    def test_unknown_unsigned_byte_declarations_are_concrete_conflicts(self):
        result = self.fixture(
            'extern "C" unsigned fn_00000004();',
            'extern "C" unsigned char fn_00000004();',
        )
        self.assertEqual(
            result["repeated_unknown_declarations"][0]["status"], "conflict"
        )

    def test_same_shared_header_declaration_is_deduplicated(self):
        result = self.fixture(
            'extern "C" unsigned fn_00000004(unsigned);', "unused", shared=True
        )
        group = result["repeated_unknown_declarations"][0]
        self.assertEqual(
            group["status"], "declarations_consistent_under_analysis_model"
        )
        self.assertEqual(len(group["declarations"]), 1)
        self.assertEqual(len(group["translation_units"]), 2)
        self.assertEqual(result["status"], "no_cross_tu_conflicts_in_checked_scope")

    def test_missing_bound_declaration_is_not_silently_skipped(self):
        result = self.fixture(
            'extern "C" unsigned fn_00000004();', "unused", missing=True
        )
        self.assertEqual(result["status"], "incomplete")
        self.assertTrue(
            any(edge["status"] == "unsupported" for edge in result["edges"])
        )

    def test_anonymous_namespace_header_types_are_not_identical_across_units(self):
        result = self.fixture(
            'namespace { struct Local { unsigned value; }; } extern "C" unsigned fn_00000004(Local*);',
            "unused",
            shared=True,
        )
        self.assertFalse(result["unsupported_files"])
        group = result["repeated_unknown_declarations"][0]
        self.assertEqual(group["status"], "review")
        declarations = group["declarations"]
        scopes = {
            d["contract"]["parameters"][0]["pointee"]["identity_scope"]
            for d in declarations
        }
        self.assertEqual(len(scopes), 2)

    def test_header_snapshot_change_makes_the_report_incomplete(self):
        original = ClangParser.parse

        def mutate(parser, path, include):
            header = Path(include) / "botw/api.h"
            header.write_text(header.read_text() + "\n// Changed during analysis.\n")
            return original(parser, path, include)

        with patch.object(ClangParser, "parse", mutate):
            result = self.fixture(
                'extern "C" unsigned fn_00000004();', "unused", shared=True
            )
        self.assertEqual(result["status"], "incomplete")
        self.assertIn("include/botw/api.h", result["source_drift"])

    def test_unchanged_inputs_produce_identical_reports(self):
        first, second = self.fixture(
            'extern "C" unsigned fn_00000004(__vec2x32float__*);',
            "unused",
            shared=True,
            repeat=True,
        )
        self.assertEqual(first, second)

    def test_manifest_edit_after_validation_does_not_get_a_new_clean_snapshot(self):
        result = self.fixture(
            'extern "C" unsigned fn_00000004();',
            'extern "C" unsigned fn_00000004();',
            manifest_race=True,
        )
        self.assertEqual(result["status"], "incomplete")
        self.assertIn("config/functions.json", result["source_drift"])

    def test_source_include_restrictions_are_kept(self):
        with self.assertRaisesRegex(
            ValueError, "includes must be literal project headers"
        ):
            self.fixture("#include <outside.h>", 'extern "C" unsigned fn_00000004();')

    def test_source_symlinks_are_rejected_before_parsing(self):
        with self.assertRaisesRegex(ValueError, "source/header must be a regular file"):
            self.fixture(
                'extern "C" unsigned fn_00000004();', "unused", source_symlink=True
            )


class OpaqueRecords(ParsedContracts, unittest.TestCase):
    def test_forward_declaration_matches_completed_record_pointer(self):
        findings = self.compare_sources(
            'struct Handle; extern "C" bool fn_00000001(const Handle*);',
            'struct Handle { unsigned value; }; extern "C" bool fn_00000001(const Handle*) { return false; }',
        )
        self.assertEqual(findings, [])


class LibraryDiscovery(unittest.TestCase):
    def test_discovers_versioned_library_beside_configured_compiler(self):
        with tempfile.TemporaryDirectory(prefix="botw-library-test-") as temporary:
            root = Path(temporary)
            binary = root / "llvm/bin/clang++"
            binary.parent.mkdir(parents=True)
            binary.touch()
            library = root / "llvm/lib/libclang.so.123"
            library.parent.mkdir()
            library.touch()
            (root / ".local").mkdir()
            (root / ".local/config.json").write_text(
                json.dumps({"compiler": str(binary)})
            )
            with (
                patch(
                    "botw_decomp.contracts.locate_compiler", return_value=str(binary)
                ) as locate,
                patch("ctypes.util.find_library", return_value=None),
            ):
                self.assertEqual(locate_libclang(root=root), str(library.resolve()))
                locate.assert_called_once_with(str(binary))

    def test_explicit_library_overrides_discovery(self):
        with patch(
            "botw_decomp.contracts.locate_compiler",
            side_effect=AssertionError("must not discover"),
        ):
            self.assertEqual(
                locate_libclang("chosen-libclang.so"), "chosen-libclang.so"
            )

    def test_platform_lookup_fallback(self):
        with (
            tempfile.TemporaryDirectory(prefix="botw-library-test-") as temporary,
            patch(
                "botw_decomp.contracts.locate_compiler",
                side_effect=ValueError("not installed"),
            ),
            patch("ctypes.util.find_library", return_value="platform-libclang.so"),
        ):
            self.assertEqual(locate_libclang(root=temporary), "platform-libclang.so")

    def test_missing_library_has_an_actionable_error(self):
        with (
            tempfile.TemporaryDirectory(prefix="botw-library-test-") as temporary,
            patch(
                "botw_decomp.contracts.locate_compiler",
                side_effect=ValueError("not installed"),
            ),
            patch("ctypes.util.find_library", return_value=None),
            self.assertRaisesRegex(ValueError, "pass --libclang"),
        ):
            locate_libclang(root=temporary)


class CommandLine(unittest.TestCase):
    def test_report_only_and_strict_finding_exit_codes(self):
        with (
            patch(
                "botw_decomp.contracts.audit_contracts",
                return_value={"status": "findings"},
            ),
            redirect_stdout(io.StringIO()),
        ):
            self.assertEqual(main([]), 0)
            self.assertEqual(main(["--strict"]), 1)

    def test_parse_or_library_failure_is_nonzero_without_strict(self):
        with tempfile.TemporaryDirectory(prefix="botw-cli-test-") as temporary:
            output = Path(temporary) / "report.json"
            output.write_text('{"status":"old"}')
            with (
                patch(
                    "botw_decomp.contracts.audit_contracts",
                    side_effect=ValueError("libclang is unavailable"),
                ),
                redirect_stdout(io.StringIO()),
            ):
                self.assertEqual(main(["--output", str(output)]), 2)
            self.assertEqual(json.loads(output.read_text())["status"], "incomplete")


if __name__ == "__main__":
    unittest.main()
