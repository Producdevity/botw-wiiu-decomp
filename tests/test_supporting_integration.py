import hashlib
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import cli, project


def fn(address):
    key = f"fn_{address:08x}"
    return {"id": key, "address": f"0x{address:08x}", "size": 8,
            "sha256": hashlib.sha256(key.encode()).hexdigest(), "symbol": key,
            "source": f"reconstructions/{key}.cpp", "status": "unmatched"}


def manifest(*rows):
    return {"schema_version": 1, "functions": list(rows)}


class SupportingCompilationProjectTests(unittest.TestCase):
    def setUp(self):
        self.rows = {row["id"]: row for row in (fn(0x1000), fn(0x2000), fn(0x3000), fn(0x4000))}

    def test_closure_is_transitive_cyclic_deduplicated_and_canonical(self):
        a, b, c = (self.rows[f"fn_{address:08x}"] for address in (0x1000, 0x2000, 0x3000))
        a["compile_with"] = [c["id"], b["id"]]
        b["compile_with"] = [a["id"], c["id"]]
        c["compile_with"] = [a["id"]]
        self.assertEqual([row["id"] for row in project.compilation_members(a, self.rows)],
                         [a["id"], b["id"], c["id"]])

    def test_closure_rejects_self_duplicate_missing_and_non_list_dependencies(self):
        a, b = self.rows["fn_00001000"], self.rows["fn_00002000"]
        for value in ([a["id"]], [b["id"], b["id"]], ["fn_00009999"], b["id"]):
            with self.subTest(value=value):
                a["compile_with"] = value
                with self.assertRaises(ValueError):
                    project.compilation_members(a, self.rows)

    def test_closure_rejects_transitive_set_above_eight(self):
        rows = {fn(address)["id"]: fn(address) for address in range(0x1000, 0x1000 + 9 * 0x1000, 0x1000)}
        ordered = list(rows.values())
        for left, right in zip(ordered, ordered[1:]):
            left["compile_with"] = [right["id"]]
        with self.assertRaisesRegex(ValueError, "eight"):
            project.compilation_members(ordered[0], rows)

    def test_manifest_validation_rejects_unknown_compile_with_id(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "config").mkdir()
            row = fn(0x1000)
            row["compile_with"] = ["fn_00009999"]
            (root / "config/functions.json").write_text(json.dumps(manifest(row)))
            with self.assertRaisesRegex(ValueError, "supporting compilation"):
                project.functions(root)


class SupportingCompilationVerifyTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        (self.root / "include").mkdir()
        self.target = fn(0x1000)
        self.helper = fn(0x2000)
        self.target["compile_with"] = [self.helper["id"]]
        self.trusted = {row["id"]: row for row in (self.target, self.helper)}
        self.target_path = self.root / self.target["source"]
        self.helper_path = self.root / self.helper["source"]
        self.target_path.parent.mkdir(parents=True)
        self.target_path.write_text("int target;\n")
        self.helper_path.write_text("int helper;\n")

    def test_compound_verification_uses_canonical_candidate_paths_and_records_hashes(self):
        override = self.root / "override.cpp"
        override.write_text("int edited_target;\n")
        calls = {}

        def compile_group(cxx, paths, include, profile):
            calls.update(paths=paths, include=include, profile=profile)
            return b"object"

        def compare(obj, members, originals):
            calls.update(members=members, originals=originals)
            return {"matched": True, "status": "match", "reason": "all members matched",
                    "results": [{"symbol": self.target["symbol"], "matched": True},
                                {"symbol": self.helper["symbol"], "matched": True}]}

        with (patch.object(cli.compiler, "compile_sources", side_effect=compile_group) as compile_mock,
              patch.object(cli.compiler, "identity", return_value="toolchain"),
              patch.object(cli, "compare_function_set", side_effect=compare)):
            result = cli.verify(self.target, "cxx", root=self.root, source=override, references=self.trusted)

        self.assertTrue(result["matched"])
        self.assertEqual(calls["paths"], [override, self.helper_path])
        self.assertEqual(calls["include"], self.root / "include")
        self.assertEqual(calls["members"], [self.target, self.helper])
        self.assertEqual(result["source_sha256"], hashlib.sha256(override.read_bytes()).hexdigest())
        self.assertEqual(result["supporting_source_sha256"], {
            self.target["id"]: hashlib.sha256(override.read_bytes()).hexdigest(),
            self.helper["id"]: hashlib.sha256(self.helper_path.read_bytes()).hexdigest()})
        compile_mock.assert_called_once()

    def test_compound_target_is_rejected_when_helper_fails(self):
        group = {"matched": False, "status": "mismatch", "reason": "helper mismatch",
                 "results": [{"symbol": self.target["symbol"], "matched": False,
                              "status": "rejected", "reason": "another member failed"},
                             {"symbol": self.helper["symbol"], "matched": False,
                              "status": "mismatch", "reason": "helper bytes differ"}]}
        with (patch.object(cli.compiler, "compile_sources", return_value=b"object"),
              patch.object(cli.compiler, "identity", return_value="toolchain"),
              patch.object(cli, "compare_function_set", return_value=group)):
            result = cli.verify(self.target, "cxx", root=self.root, references=self.trusted)
        self.assertFalse(result["matched"])
        self.assertEqual(result["status"], "rejected")
        self.assertIn({"symbol": self.helper["symbol"], "matched": False,
                       "status": "mismatch", "reason": "helper bytes differ"}, result["supporting_checks"])

    def test_trusted_references_control_members_while_sources_come_from_candidate(self):
        candidate_helper = dict(self.helper, address="0x00003000",
                                sha256=hashlib.sha256(b"candidate helper bytes").hexdigest())
        candidate_helper_path = self.root / candidate_helper["source"]
        candidate_helper_path.parent.mkdir(parents=True, exist_ok=True)
        candidate_helper_path.write_text("int untrusted_candidate_helper;\n")
        candidate_rows = {self.target["id"]: self.target, self.helper["id"]: candidate_helper}
        captured = {}

        def compare(obj, members, originals):
            captured["members"] = members
            return {"matched": True, "status": "match", "results": [
                {"symbol": row["symbol"], "matched": True} for row in members], "reason": "all match"}

        with (patch.object(cli, "functions", return_value=candidate_rows),
              patch.object(cli.compiler, "compile_sources", side_effect=lambda c, paths, i, p: captured.update(paths=paths) or b"o"),
              patch.object(cli.compiler, "identity", return_value="toolchain"),
              patch.object(cli, "compare_function_set", side_effect=compare)):
            result = cli.verify(self.target, "cxx", root=self.root, references=self.trusted)
        self.assertTrue(result["matched"])
        self.assertEqual(captured["members"], [self.target, self.helper])
        self.assertEqual(captured["paths"], [self.target_path, candidate_helper_path])

    def test_missing_support_source_is_a_rejection(self):
        self.helper_path.unlink()
        with patch.object(cli.compiler, "identity", return_value="toolchain"):
            result = cli.verify(self.target, "cxx", root=self.root, references=self.trusted)
        self.assertFalse(result["matched"])
        self.assertEqual(result["status"], "rejected")
        self.assertIn("regular file", result["reason"])

    def test_supporting_source_policy_error_is_a_rejection(self):
        self.helper_path.write_text('void helper() { asm("blr"); }\n')
        with patch.object(cli.compiler, "identity", return_value="toolchain"):
            result = cli.verify(self.target, "cxx", root=self.root, references=self.trusted)
        self.assertFalse(result["matched"])
        self.assertIn("assembly", result["reason"])

    def test_ordinary_function_still_uses_single_source_compiler(self):
        row = dict(self.target)
        row.pop("compile_with")
        with (patch.object(cli.compiler, "compile_source", return_value=b"object") as single,
              patch.object(cli.compiler, "compile_sources") as grouped,
              patch.object(cli.compiler, "identity", return_value="toolchain"),
              patch.object(cli, "compare_function_hash", return_value={"matched": True, "status": "match"})):
            result = cli.verify(row, "cxx", root=self.root)
        self.assertTrue(result["matched"])
        single.assert_called_once_with("cxx", self.target_path, self.root / "include", "clang-ppc")
        grouped.assert_not_called()

    def test_local_originals_include_every_group_member_in_trusted_order(self):
        reference_calls = []
        original_bytes = {0x1000: b"target!!", 0x2000: b"helper!!"}

        def read_reference(image, row):
            reference_calls.append(row["id"])
            return original_bytes[int(row["address"], 16)]

        def compare(obj, members, originals):
            self.assertEqual(set(originals), {self.target["symbol"], self.helper["symbol"]})
            self.assertEqual(originals[self.target["symbol"]], original_bytes[0x1000])
            self.assertEqual(originals[self.helper["symbol"]], original_bytes[0x2000])
            return {"matched": True, "status": "match", "reason": "all match", "results": [
                {"symbol": row["symbol"], "matched": True} for row in members]}

        with (patch.object(cli.compiler, "compile_sources", return_value=b"object"),
              patch.object(cli.compiler, "identity", return_value="toolchain"),
              patch.object(cli, "reference_bytes", side_effect=read_reference),
              patch.object(cli, "compare_function_set", side_effect=compare)):
            result = cli.verify(self.target, "cxx", root=self.root, image=object(), references=self.trusted)
        self.assertTrue(result["matched"])
        self.assertEqual(reference_calls, [self.target["id"], self.helper["id"]])


if __name__ == "__main__":
    unittest.main()
