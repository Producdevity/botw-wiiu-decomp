import copy
import importlib.util
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
from unittest.mock import patch


spec = importlib.util.spec_from_file_location("trusted_ci", Path(__file__).resolve().parents[1] / "tools/ci.py")
ci = importlib.util.module_from_spec(spec)
spec.loader.exec_module(ci)


def row(address):
    key = f"fn_{address:08x}"
    return {"id": key, "address": f"0x{address:08x}", "size": 4, "sha256": "a" * 64,
            "source": f"reconstructions/{key}.cpp", "symbol": key, "status": "unmatched"}


class CiTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.base = Path(self.temporary.name) / "base"
        self.head = Path(self.temporary.name) / "head"
        self.rows = {r["id"]: r for r in [row(0x03000000), row(0x03000004)]}
        self.base.mkdir()
        self.write(self.base, "config/functions.json", json.dumps({"schema_version": 1, "functions": list(self.rows.values())}))
        self.write(self.base, "reconstructions/fn_03000000.cpp", 'extern "C" void fn_03000000() {}\n')
        self.write(self.base, "tools/ci.py", "trusted checker\n")
        self.write(self.base, ".github/workflows/checks.yml", "trusted workflow\n")
        self.write(self.base, "README.md", "Original docs\n")
        self.git(self.base, "init", "-q")
        self.stage(self.base)
        shutil.copytree(self.base, self.head)

    def git(self, root, *arguments):
        return subprocess.run(["git", "-C", str(root), *arguments], check=True, capture_output=True)

    def stage(self, root):
        self.git(root, "add", "--all")

    def write(self, root, name, value):
        path = root / name
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(value)
        return path

    def inspect(self):
        self.stage(self.head)
        return ci.inspect_candidate(self.base, self.head, self.rows)

    def test_unchanged_seed_is_checked(self):
        self.assertEqual([r["id"] for r in self.inspect()], ["fn_03000000"])

    def test_new_reconstruction_requires_existing_trusted_reference(self):
        self.write(self.head, "reconstructions/fn_03000004.cpp", "void candidate() {}\n")
        self.assertEqual(len(self.inspect()), 2)

    def test_unknown_reconstruction_is_rejected(self):
        self.write(self.head, "reconstructions/fn_03000008.cpp", "void unknown() {}\n")
        with self.assertRaisesRegex(ci.VerificationError, "no trusted reference"):
            self.inspect()

    def test_existing_reconstruction_cannot_be_deleted(self):
        (self.head / "reconstructions/fn_03000000.cpp").unlink()
        with self.assertRaisesRegex(ci.VerificationError, "cannot be deleted"):
            self.inspect()

    def test_manifest_hash_tampering_is_rejected_before_compilation(self):
        changed = copy.deepcopy(self.rows)
        changed["fn_03000000"]["sha256"] = "b" * 64
        self.write(self.head, "config/functions.json", json.dumps({"schema_version": 1, "functions": list(changed.values())}))
        self.stage(self.head)
        with patch.object(ci.cli, "verify") as verify:
            with self.assertRaisesRegex(ci.VerificationError, "Maintainer-only"):
                ci.verify_candidate(self.base, self.head, "clang")
            verify.assert_not_called()

    def test_checker_and_workflow_tampering_are_rejected(self):
        for name in ("tools/ci.py", ".github/workflows/checks.yml"):
            with self.subTest(name=name):
                original = (self.head / name).read_text()
                self.write(self.head, name, "print('passed')\n")
                with self.assertRaisesRegex(ci.VerificationError, "Maintainer-only"):
                    self.inspect()
                self.write(self.head, name, original)

    def test_docs_and_shared_headers_are_allowed(self):
        self.write(self.head, "docs/types.md", "A documented layout.\n")
        self.write(self.head, "include/botw/actor.h", "struct Actor {};\n")
        self.assertEqual(len(self.inspect()), 1)

    def test_symlink_header_is_rejected(self):
        directory = self.head / "include/botw"
        directory.mkdir(parents=True)
        (directory / "escape.h").symlink_to(self.base / "README.md")
        with self.assertRaisesRegex(ci.VerificationError, "regular|Symlinks"):
            self.inspect()

    def test_symlink_source_directory_is_rejected(self):
        shutil.rmtree(self.head / "reconstructions")
        (self.head / "reconstructions").symlink_to(self.base / "reconstructions", target_is_directory=True)
        with self.assertRaisesRegex(ci.VerificationError, "regular|Symlinks"):
            self.inspect()

    def test_untracked_compiler_input_is_rejected(self):
        self.write(self.head, "include/botw/hidden.h", "void hidden();\n")
        with self.assertRaisesRegex(ci.VerificationError, "Untracked compiler input"):
            ci.inspect_candidate(self.base, self.head, self.rows)

    def test_public_verification_uses_trusted_rows_for_every_source(self):
        self.write(self.head, "reconstructions/fn_03000004.cpp", "void candidate() {}\n")
        self.stage(self.head)
        with patch.object(ci.cli, "verify", return_value={"matched": True}) as verify:
            results = ci.verify_candidate(self.base, self.head, "clang")
        self.assertEqual(len(results), 2)
        for call in verify.call_args_list:
            trusted = self.rows[call.args[0]["id"]]
            self.assertEqual(call.args, (trusted, "clang"))
            self.assertEqual(call.kwargs, {"root": self.head, "image": None})

    def test_matched_manifest_entry_cannot_be_missing(self):
        self.rows["fn_03000004"]["status"] = "matched"
        with self.assertRaisesRegex(ci.VerificationError, "missing its reconstruction"):
            self.inspect()

    def test_unrecognized_header_location_is_rejected(self):
        self.write(self.head, "include/platform.h", "void platform();\n")
        with self.assertRaisesRegex(ci.VerificationError, "include/botw"):
            self.inspect()


if __name__ == "__main__":
    unittest.main()
