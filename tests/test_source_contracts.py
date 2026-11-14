"""Trusted chosen source interfaces supplement exact PowerPC byte matching."""

import hashlib
import io
import json
from contextlib import redirect_stdout
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp.compiler import compile_source, locate
from botw_decomp.contracts import ClangParser, audit_contracts, compact_report, main
from botw_decomp.elf import parse_object
from botw_decomp.matching import compare_function_hash
from botw_decomp.project import functions, validate_source_contract


SYMBOL = "fn_00000010"
EXPECTED = {"return_type": "int", "parameter_types": [], "variadic": False}


class ContractSchema(unittest.TestCase):
    def test_legacy_and_valid_contract_rows_load(self):
        for value in (None, EXPECTED):
            with self.subTest(value=value), tempfile.TemporaryDirectory() as directory:
                root = Path(directory)
                row = write_manifest(root, value)
                self.assertEqual(functions(root)[SYMBOL], row)

    def test_malformed_and_unsupported_contracts_are_rejected(self):
        bad = [None, [], {}, dict(EXPECTED, variadic=0), dict(EXPECTED, extra=True),
               dict(EXPECTED, parameter_types="int"), dict(EXPECTED, return_type=1),
               dict(EXPECTED, return_type="int; void injected()"),
               dict(EXPECTED, parameter_types=["void"]),
               dict(EXPECTED, parameter_types=["int (*)(int)"]),
               dict(EXPECTED, parameter_types=["struct Thing"]),
               dict(EXPECTED, parameter_types=["int **"]),
               dict(EXPECTED, parameter_types=["int"] * 33)]
        for value in bad:
            with self.subTest(value=value), tempfile.TemporaryDirectory() as directory:
                root = Path(directory)
                write_manifest(root, value, include_contract=True)
                with self.assertRaisesRegex(ValueError, "source_contract"):
                    functions(root)

    def test_primitive_and_opaque_pointer_vocabulary(self):
        validate_source_contract({"return_type": "void *", "parameter_types": [
            "const struct Handle *", "volatile unsigned int *", "float", "bool"],
            "variadic": False})

    def test_workflow_explicitly_uses_trusted_metadata(self):
        workflow = (Path(__file__).resolve().parents[1] / ".github/workflows/checks.yml").read_text()
        lines = workflow.splitlines()
        index = next(i for i, line in enumerate(lines) if "tools/contract_audit.py" in line)
        command = lines[index]
        self.assertEqual(lines[index - 1].strip(), "working-directory: trusted")
        self.assertIn('--root "$GITHUB_WORKSPACE/candidate"', command)
        self.assertIn('--reference-root "$GITHUB_WORKSPACE/trusted"', command)
        self.assertIn("--strict", command)


def write_manifest(root, expected=None, include_contract=False):
    row = {"id": SYMBOL, "address": "0x00000010", "size": 8,
           "sha256": "0" * 64, "symbol": SYMBOL,
           "source": "reconstructions/" + SYMBOL + ".cpp", "status": "unmatched"}
    if expected is not None or include_contract:
        row["source_contract"] = expected
    (root / "config").mkdir(parents=True, exist_ok=True)
    (root / "config/functions.json").write_text(json.dumps({"schema_version": 1, "functions": [row]}))
    return row


class TrustedSourceContracts(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        try:
            cls.clang = ClangParser()
        except ValueError as error:
            if "was not found" in str(error):
                raise unittest.SkipTest(str(error))
            raise
        cls.addClassCleanup(cls.clang.close)

    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix="botw-pinned-test-")
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name) / "candidate"
        self.trusted = Path(self.temporary.name) / "trusted"
        self.path = self.root / "reconstructions" / (SYMBOL + ".cpp")
        self.path.parent.mkdir(parents=True)
        (self.root / "include/botw").mkdir(parents=True)
        self.path.write_text('extern "C" int ' + SYMBOL + '() { return 7; }')
        write_manifest(self.root)
        write_manifest(self.trusted, EXPECTED)

    def audit(self):
        return audit_contracts(self.root, libclang=self.clang.library_path, reference_root=self.trusted)

    def strict(self):
        with redirect_stdout(io.StringIO()):
            return main(["--root", str(self.root), "--reference-root", str(self.trusted),
                         "--libclang", self.clang.library_path, "--strict", "--summary"])

    def test_matching_standalone_definition_and_legacy_scope(self):
        report = self.audit()
        self.assertEqual(report["coverage"]["binding_edges"], 0)
        self.assertEqual(report["coverage"]["selected_translation_units"], 1)
        self.assertEqual(report["source_contracts"][0]["status"], "matches_source_contract")
        self.assertEqual(self.strict(), 0)
        write_manifest(self.trusted)
        legacy = self.audit()
        self.assertEqual(legacy["coverage"]["selected_translation_units"], 0)
        self.assertEqual(legacy["source_contracts"], [])
        self.assertEqual(self.strict(), 0)

    def test_distinct_pinned_contracts_remain_associated_with_each_symbol(self):
        other = "fn_00000020"
        manifest = self.trusted / "config/functions.json"
        value = json.loads(manifest.read_text())
        value["functions"].append({
            "id": other, "address": "0x00000020", "size": 8,
            "sha256": "0" * 64, "symbol": other,
            "source": "reconstructions/" + other + ".cpp", "status": "unmatched",
            "source_contract": {"return_type": "float",
                                "parameter_types": ["const float *"], "variadic": False},
        })
        manifest.write_text(json.dumps(value))
        other_path = self.root / "reconstructions" / (other + ".cpp")
        other_path.write_text('extern "C" float ' + other + '(const float *value) { return *value; }')
        matching = {item["symbol"]: item for item in self.audit()["source_contracts"]}
        self.assertEqual(set(matching), {SYMBOL, other})
        self.assertEqual({key: item["status"] for key, item in matching.items()},
                         {SYMBOL: "matches_source_contract", other: "matches_source_contract"})
        self.assertEqual(self.strict(), 0)

        other_path.write_text('extern "C" float ' + other + '(float value) { return value; }')
        changed = {item["symbol"]: item for item in self.audit()["source_contracts"]}
        self.assertEqual({key: item["status"] for key, item in changed.items()},
                         {SYMBOL: "matches_source_contract", other: "conflict"})
        self.assertEqual(changed[SYMBOL]["comparisons"][0]["findings"], [])
        findings = changed[other]["comparisons"][0]["findings"]
        self.assertEqual([(item["kind"], item["position"]) for item in findings],
                         [("type_contract_conflict", "parameter 1")])
        self.assertEqual(self.strict(), 1)

    def test_same_powerpc_bytes_do_not_accept_added_unused_pointer(self):
        try:
            compiler = locate()
        except ValueError:
            self.skipTest("Clang not installed")
        original = compile_source(compiler, self.path, self.root / "include")
        obj = parse_object(original)
        symbol = next(symbol for symbol in obj.symbols if symbol.name == SYMBOL)
        code = obj.sections[symbol.section_index].data[symbol.value:symbol.value + symbol.size]
        self.assertEqual(code.hex(), "386000074e800020")  # li r3, 7; blr
        self.path.write_text('extern "C" int ' + SYMBOL + '(void *) { return 7; }')
        changed = compile_source(compiler, self.path, self.root / "include")
        changed_obj = parse_object(changed)
        changed_symbol = next(s for s in changed_obj.symbols if s.name == SYMBOL)
        changed_code = changed_obj.sections[changed_symbol.section_index].data[
            changed_symbol.value:changed_symbol.value + changed_symbol.size]
        self.assertEqual(code, changed_code)
        for object_bytes in (original, changed):
            self.assertTrue(compare_function_hash(object_bytes, SYMBOL,
                hashlib.sha256(code).hexdigest(), len(code), 0x10, {})["matched"])
        self.assertEqual(self.audit()["source_contracts"][0]["comparisons"][0]["findings"][0]["kind"],
                         "parameter_count_conflict")
        self.assertEqual(self.strict(), 1)

        self.path.write_text('extern "C" long ' + SYMBOL + '() { return 7; }')
        long_return = compile_source(compiler, self.path, self.root / "include")
        long_return_obj = parse_object(long_return)
        long_return_symbol = next(s for s in long_return_obj.symbols if s.name == SYMBOL)
        long_return_code = long_return_obj.sections[long_return_symbol.section_index].data[
            long_return_symbol.value:long_return_symbol.value + long_return_symbol.size]
        self.assertEqual(code, long_return_code)
        self.assertTrue(compare_function_hash(long_return, SYMBOL,
            hashlib.sha256(code).hexdigest(), len(code), 0x10, {})["matched"])
        comparison = self.audit()["source_contracts"][0]["comparisons"][0]
        self.assertEqual(comparison["expected"]["result"]["size"], 4)
        self.assertEqual(comparison["definition"]["contract"]["result"]["size"], 4)
        self.assertEqual([(f["kind"], f["position"]) for f in comparison["findings"]],
                         [("type_contract_conflict", "return")])
        self.assertEqual(self.strict(), 1)

    def test_dropped_parameter_wrong_return_and_variadicness_fail_strictly(self):
        variants = [
            (EXPECTED, 'extern "C" unsigned int ' + SYMBOL + '() { return 7; }', "type_contract_conflict"),
            (dict(EXPECTED, parameter_types=["void *"]),
             'extern "C" int ' + SYMBOL + '() { return 7; }', "parameter_count_conflict"),
            (EXPECTED, 'extern "C" int ' + SYMBOL + '(...) { return 7; }', "variadic_conflict"),
            (dict(EXPECTED, variadic=True),
             'extern "C" int ' + SYMBOL + '() { return 7; }', "variadic_conflict"),
        ]
        for expected, source, kind in variants:
            with self.subTest(kind=kind):
                write_manifest(self.trusted, expected)
                self.path.write_text(source)
                findings = self.audit()["source_contracts"][0]["comparisons"][0]["findings"]
                self.assertEqual([f["kind"] for f in findings], [kind])
                self.assertEqual(self.strict(), 1)

    def test_candidate_manifest_and_coherent_header_cannot_rewrite_trusted_contract(self):
        changed = dict(EXPECTED, parameter_types=["void *"])
        write_manifest(self.root, changed)
        (self.root / "include/botw/api.h").write_text('extern "C" int ' + SYMBOL + '(void *);')
        self.path.write_text('#include "botw/api.h"\nextern "C" int ' + SYMBOL + '(void *) { return 7; }')
        self.assertEqual(self.strict(), 1)
        write_manifest(self.root)
        self.assertEqual(self.strict(), 1)
        (self.root / "config/functions.json").unlink()
        self.assertEqual(self.strict(), 1)

    def test_typedef_and_parameter_top_level_qualifiers_normalize(self):
        write_manifest(self.trusted, dict(EXPECTED, parameter_types=["unsigned int"]))
        self.path.write_text('typedef unsigned int Word; extern "C" int ' + SYMBOL + '(const Word value) { return value; }')
        self.assertEqual(self.strict(), 0)

    def test_matching_variadic_and_pointer_return_contracts(self):
        write_manifest(self.trusted, {"return_type": "void *", "parameter_types": ["int"], "variadic": True})
        self.path.write_text('extern "C" void *' + SYMBOL + '(int, ...) { return 0; }')
        self.assertEqual(self.strict(), 0)

    def test_opaque_record_forward_and_complete_pointer_agree(self):
        write_manifest(self.trusted, dict(EXPECTED, parameter_types=["const struct Handle *"]))
        self.path.write_text('struct Handle { int value; }; extern "C" int ' + SYMBOL + '(const Handle *value) { return value->value; }')
        self.assertEqual(self.strict(), 0)

    def test_pointer_type_difference_is_a_conflict_not_only_review(self):
        write_manifest(self.trusted, dict(EXPECTED, parameter_types=["const void *"]))
        self.path.write_text('extern "C" int ' + SYMBOL + '(void *) { return 7; }')
        finding = self.audit()["source_contracts"][0]["comparisons"][0]["findings"][0]
        self.assertEqual(finding["severity"], "conflict")
        self.assertEqual(self.strict(), 1)

    def test_summary_retains_pinned_mismatch(self):
        self.path.write_text('extern "C" int ' + SYMBOL + '(void *) { return 7; }')
        summary = compact_report(self.audit())
        self.assertEqual(summary["findings"][0]["symbol"], SYMBOL)
        self.assertEqual(summary["findings"][0]["status"], "conflict")
        self.assertEqual(summary["findings"][0]["details"][0]["kind"], "parameter_count_conflict")

    def test_missing_definition_parse_error_and_unsupported_ast_fail_closed(self):
        for source in ['extern "C" int ' + SYMBOL + '();',
                       'extern "C" int ' + SYMBOL + '( {',
                       'extern "C" int ' + SYMBOL + '(int (*values)[3]) { return 7; }']:
            with self.subTest(source=source):
                self.path.write_text(source)
                self.assertEqual(self.audit()["status"], "incomplete")
                self.assertEqual(self.strict(), 2)

    def test_malformed_and_unanalyzable_expected_metadata_fail_closed(self):
        for expected in [dict(EXPECTED, variadic="false"),
                         dict(EXPECTED, parameter_types=["struct int *"])]:
            with self.subTest(expected=expected):
                write_manifest(self.trusted, expected)
                self.assertEqual(self.strict(), 2)

    def test_unimplemented_unmatched_contract_does_not_require_source(self):
        self.path.unlink()
        self.assertEqual(self.audit()["coverage"]["selected_translation_units"], 0)
        self.assertEqual(self.strict(), 0)

    def test_trusted_manifest_snapshot_drift_is_incomplete(self):
        original = ClangParser.parse

        def mutate(parser, path, include):
            write_manifest(self.trusted)
            return original(parser, path, include)

        with patch.object(ClangParser, "parse", mutate):
            report = self.audit()
        self.assertEqual(report["status"], "incomplete")
        self.assertIn("<reference>/config/functions.json", report["source_drift"])


if __name__ == "__main__":
    unittest.main()
