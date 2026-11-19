import json
from pathlib import Path
import sys
import tempfile
import unittest


sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import admit_references as admit
from botw_decomp import project


def row(address, size=8):
    key = f"fn_{address:08x}"
    return {"id": key, "symbol": key, "address": f"0x{address:08x}", "size": size,
            "source": f"reconstructions/{key}.cpp", "sha256": "a" * 64, "status": "unmatched",
            "bindings": {}, "boundary": "direct-call target", "category": "integer"}


class AdmitTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        (self.root / "config").mkdir()
        (self.root / "config/target.json").write_text(json.dumps({"rpx_sha256": "f" * 64}))
        project.write_manifest(self.root, {"schema_version": 1, "functions": [row(0x03000010)]})
        (self.root / "config/batches.json").write_text(json.dumps({"schema_version": 1, "batches": []}))

    def test_admits_non_overlapping_rows_one_per_line(self):
        inventory = {"rpx_sha256": "f" * 64, "functions": [
            row(0x03000000), row(0x03000008, 12), row(0x03000010), row(0x03000020)]}
        added = admit.admit(self.root, inventory, "discovered-test")
        self.assertEqual(added, ["fn_03000000", "fn_03000020"])
        manifest = project.read_manifest(self.root)
        self.assertEqual([r["id"] for r in manifest["functions"]],
                         ["fn_03000000", "fn_03000010", "fn_03000020"])
        self.assertEqual(manifest["functions"][0]["compiler_profile"], "ghs-5.3.22-auto")
        text = (self.root / "config/functions/03000000.json").read_text()
        self.assertEqual(len(text.splitlines()), 5)
        batches = json.loads((self.root / "config/batches.json").read_text())["batches"]
        self.assertEqual(batches, [{"id": "discovered-test", "functions": added}])

    def test_rejects_foreign_inventory_and_duplicate_batch(self):
        with self.assertRaises(ValueError):
            admit.admit(self.root, {"rpx_sha256": "0" * 64, "functions": []}, "discovered-test")
        admit.admit(self.root, {"rpx_sha256": "f" * 64, "functions": [row(0x03000000)]}, "discovered-test")
        with self.assertRaises(ValueError):
            admit.admit(self.root, {"rpx_sha256": "f" * 64, "functions": [row(0x03000040)]}, "discovered-test")


if __name__ == "__main__":
    unittest.main()
