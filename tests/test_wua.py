import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import wua

ROOT = Path(__file__).resolve().parents[1]
FIXTURE = ROOT / "tests/fixtures/wua/synthetic.wua"
UPDATE = "0005000e101c9400_v208/code/U-King.rpx"


class WuaTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temporary = tempfile.TemporaryDirectory(prefix="botw-wua-tests-")
        cls.root = Path(cls.temporary.name).resolve()
        for name in wua.SOURCES:
            destination = cls.root / name
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(ROOT / name, destination)
        wua.install_reader(cls.root)

    @classmethod
    def tearDownClass(cls):
        cls.temporary.cleanup()

    def altered(self, data):
        temporary = tempfile.TemporaryDirectory(prefix="botw-wua-invalid-")
        self.addCleanup(temporary.cleanup)
        path = Path(temporary.name) / "archive.wua"
        path.write_bytes(data)
        return path

    def test_vendored_sources_match_pinned_upstream_hashes(self):
        vendor = ROOT / "third_party/zarchive"
        manifest = json.loads((vendor / "UPSTREAM.json").read_text())
        self.assertEqual(manifest["commit"], "965b66c8d67b6b7e30fd63b3b75aa91a99ff303b")
        for name, expected in manifest["files_sha256"].items():
            self.assertEqual(hashlib.sha256((vendor / name).read_bytes()).hexdigest(), expected, name)

    def test_real_reader_lists_only_allowlisted_rpx_members(self):
        self.assertEqual(wua.candidates(FIXTURE, self.root), [
            {"path": "code/U-King.rpx", "size": 18},
            {"path": "00050000101c9400_v0/code/U-King.rpx", "size": 18},
            {"path": UPDATE, "size": 170000},
        ])

    def test_selective_read_across_compression_blocks(self):
        self.assertEqual(wua.read_rpx(FIXTURE, UPDATE, self.root), b"synthetic-update-" * 10000)
        self.assertEqual(wua.read_rpx(FIXTURE, "code/U-King.rpx", self.root), b"synthetic-root-rpx")

    def test_read_only_no_build_or_extraction(self):
        archive = self.altered(FIXTURE.read_bytes())
        archive.chmod(0o444)
        before = {str(p): hashlib.sha256(p.read_bytes()).hexdigest()
                  for p in self.root.rglob("*") if p.is_file()}
        with patch.object(wua, "install_reader", side_effect=AssertionError("read installed a reader")), \
                patch.object(wua.subprocess, "run", wraps=subprocess.run) as run:
            wua.candidates(archive, self.root)
            wua.read_rpx(archive, UPDATE, self.root)
        self.assertEqual([call.args[0][1] for call in run.call_args_list], ["list", "read"])
        after = {str(p): hashlib.sha256(p.read_bytes()).hexdigest()
                 for p in self.root.rglob("*") if p.is_file()}
        self.assertEqual(before, after)
        self.assertEqual(list(archive.parent.iterdir()), [archive])

    def test_missing_reader_is_actionable_and_does_not_build(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            with self.assertRaisesRegex(wua.ReaderUnavailable, "setup --game"):
                wua.candidates(FIXTURE, root)
            self.assertEqual(list(root.iterdir()), [])

    def test_unknown_installation_is_preserved(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            directory = root / ".local/toolchains/wua-reader"
            directory.mkdir(parents=True)
            unknown = directory / "keep.txt"
            unknown.write_text("keep")
            with self.assertRaisesRegex(wua.ReaderUnavailable, "preserved"):
                wua.install_reader(root)
            self.assertEqual(unknown.read_text(), "keep")

    def test_fingerprint_detects_changed_binary(self):
        binary = self.root / ".local/toolchains/wua-reader/wua-reader"
        data = binary.read_bytes()
        try:
            binary.write_bytes(data + b"changed")
            self.assertFalse(wua.reader_ready(self.root))
            with self.assertRaises(wua.ReaderUnavailable):
                wua.read_rpx(FIXTURE, UPDATE, self.root)
        finally:
            binary.write_bytes(data)
        self.assertTrue(wua.reader_ready(self.root))

    def test_rejects_truncation_and_corrupt_compressed_data(self):
        with self.assertRaises(ValueError):
            wua.candidates(self.altered(FIXTURE.read_bytes()[:-5]), self.root)
        data = bytearray(FIXTURE.read_bytes())
        data[:16] = bytes(16)
        archive = self.altered(data)
        with self.assertRaisesRegex(ValueError, "truncated or corrupt"):
            wua.read_rpx(archive, "code/U-King.rpx", self.root)

    def test_rejects_metadata_oom_before_open(self):
        data = bytearray(FIXTURE.read_bytes())
        struct.pack_into(">Q", data, len(data) - 144 + 40, 65 * 1024 * 1024)
        with self.assertRaises(ValueError):
            wua.candidates(self.altered(data), self.root)

    def test_rejects_oversized_rpx_and_bad_name_offset(self):
        original = FIXTURE.read_bytes()
        tree_offset = struct.unpack_from(">Q", original, len(original) - 144 + 48)[0]
        tree_size = struct.unpack_from(">Q", original, len(original) - 144 + 56)[0]
        files = [offset for offset in range(tree_offset, tree_offset + tree_size, 16)
                 if struct.unpack_from(">I", original, offset)[0] & 0x80000000]
        oversized = bytearray(original)
        struct.pack_into(">I", oversized, files[0] + 8, wua.MAX_RPX + 1)
        with self.assertRaises(ValueError):
            wua.candidates(self.altered(oversized), self.root)
        invalid_name = bytearray(original)
        struct.pack_into(">I", invalid_name, files[0], 0x80000000 | len(original))
        with self.assertRaisesRegex(ValueError, "name offset"):
            wua.candidates(self.altered(invalid_name), self.root)

    def test_rejects_invalid_paths_at_both_boundaries(self):
        binary = self.root / ".local/toolchains/wua-reader/wua-reader"
        for entry in ["../code/U-King.rpx", "/code/U-King.rpx", "code\\U-King.rpx",
                      "code/./U-King.rpx", "code/U-King.rpx\n", "unrelated/code/U-King.rpx"]:
            with self.subTest(entry=entry):
                with self.assertRaises(ValueError):
                    wua.read_rpx(FIXTURE, entry, self.root)
                result = subprocess.run([str(binary), "read", str(FIXTURE), entry], capture_output=True, timeout=10)
                self.assertNotEqual(result.returncode, 0)
                self.assertEqual(result.stdout, b"")

    def test_rejects_ambiguous_and_control_names(self):
        original = FIXTURE.read_bytes()
        for replacement in [b"co\ne", b"..//"]:
            data = original.replace(b"\x04code", b"\x04" + replacement)
            with self.assertRaisesRegex(ValueError, "unsafe"):
                wua.candidates(self.altered(data), self.root)
        # Reuse the base title name on the DLC directory, preserving all section sizes.
        data = bytearray(original)
        names = struct.unpack_from(">Q", data, len(data) - 144 + 32)[0]
        tree = struct.unpack_from(">Q", data, len(data) - 144 + 48)[0]
        tree_size = struct.unpack_from(">Q", data, len(data) - 144 + 56)[0]
        base_name = data.index(b"00050000101c9400_v0") - names - 1
        dlc_name = data.index(b"0005000c101c9400_v80") - names - 1
        for offset in range(tree, tree + tree_size, 16):
            if struct.unpack_from(">I", data, offset)[0] == dlc_name:
                struct.pack_into(">I", data, offset, base_name)
        with self.assertRaisesRegex(ValueError, "ambiguous"):
            wua.candidates(self.altered(data), self.root)

    def compiler_root(self):
        temporary = tempfile.TemporaryDirectory(prefix="botw-wua-compiler-tests-")
        self.addCleanup(temporary.cleanup)
        root = Path(temporary.name).resolve()
        for name in wua.SOURCES:
            destination = root / name
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(ROOT / name, destination)
        return root

    def clang_driver(self):
        executable = (shutil.which("clang") or shutil.which("clang-18")
                      or shutil.which("clang++") or shutil.which("clang++-18"))
        if not executable:
            self.skipTest("Clang is unavailable for driver-mode integration test")
        return Path(executable).resolve()

    def test_build_with_explicit_clang_c_driver(self):
        root = self.compiler_root()
        compiler = self.clang_driver()
        wua.install_reader(root, str(compiler))
        self.assertEqual(wua.read_rpx(FIXTURE, UPDATE, root), b"synthetic-update-" * 10000)
        metadata = json.loads((root / ".local/toolchains/wua-reader/build.json").read_text())
        self.assertEqual(metadata["compiler"], str(compiler.resolve()))

    def test_build_with_symlinked_clang_cpp_driver(self):
        root = self.compiler_root()
        compiler = root / "clang++"
        compiler.symlink_to(self.clang_driver())
        wua.install_reader(root, str(compiler))
        self.assertEqual(wua.read_rpx(FIXTURE, "code/U-King.rpx", root), b"synthetic-root-rpx")

    def test_versioned_clang_fallback_builds_actual_reader(self):
        root = self.compiler_root()
        compiler = str(self.clang_driver())
        with patch.object(wua.shutil, "which", side_effect=lambda name: compiler if name == "clang++-18" else None):
            wua.install_reader(root)
        self.assertTrue(wua.reader_ready(root))
        self.assertEqual(wua.read_rpx(FIXTURE, "code/U-King.rpx", root), b"synthetic-root-rpx")

    def test_installed_reader_is_reused(self):
        binary = self.root / ".local/toolchains/wua-reader/wua-reader"
        before = binary.stat().st_mtime_ns
        self.assertEqual(wua.install_reader(self.root), binary)
        self.assertEqual(binary.stat().st_mtime_ns, before)
        metadata = json.loads((binary.parent / "build.json").read_text())
        self.assertEqual(metadata["binary_sha256"], hashlib.sha256(binary.read_bytes()).hexdigest())


if __name__ == "__main__":
    unittest.main()
