import json
from pathlib import Path
import tempfile
import unittest

from botw_decomp import project


def row(address, size=8):
    key = f"fn_{address:08x}"
    return {"address": f"0x{address:08x}", "id": key, "sha256": "0" * 64, "size": size,
            "source": f"reconstructions/{key}.cpp", "status": "unmatched", "symbol": key}


HEADER = {"schema_version": 1, "scope": "fixture"}


class ShardLayoutTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        self.rows = [row(0x02000020), row(0x020ffff8), row(0x02100000), row(0x02400010)]

    def test_rows_are_grouped_by_start_address_and_reassemble_in_order(self):
        project.write_manifest(self.root, {**HEADER, "functions": list(reversed(self.rows))})
        self.assertEqual([path.name for path in project.manifest_files(self.root)],
                         ["02000000.json", "02100000.json", "02400000.json"])
        self.assertEqual(project.read_manifest(self.root), {**HEADER, "functions": self.rows})

    def test_rewrite_removes_shards_that_became_empty(self):
        project.write_manifest(self.root, {**HEADER, "functions": self.rows})
        project.write_manifest(self.root, {**HEADER, "functions": self.rows[:1]})
        self.assertEqual([path.name for path in project.manifest_files(self.root)], ["02000000.json"])

    def test_row_in_the_wrong_shard_is_rejected(self):
        project.write_manifest(self.root, {**HEADER, "functions": self.rows})
        path = self.root / "config/functions/02000000.json"
        value = json.loads(path.read_text())
        value["functions"].append(row(0x02100010))
        path.write_text(json.dumps(value))
        with self.assertRaisesRegex(ValueError, "outside its manifest shard"):
            project.read_manifest(self.root)

    def test_headers_must_agree(self):
        project.write_manifest(self.root, {**HEADER, "functions": self.rows})
        path = self.root / "config/functions/02400000.json"
        path.write_text(json.dumps({"schema_version": 2, "functions": [self.rows[-1]]}))
        with self.assertRaisesRegex(ValueError, "header differs"):
            project.read_manifest(self.root)

    def test_unexpected_entries_and_symlinks_are_rejected(self):
        project.write_manifest(self.root, {**HEADER, "functions": self.rows})
        directory = self.root / "config/functions"
        (directory / "notes.txt").write_text("x")
        with self.assertRaisesRegex(ValueError, "unexpected function manifest entry"):
            project.manifest_files(self.root)
        (directory / "notes.txt").unlink()
        (directory / "03000000.json").symlink_to(directory / "02000000.json")
        with self.assertRaisesRegex(ValueError, "unexpected function manifest entry"):
            project.manifest_files(self.root)

    def test_missing_or_empty_manifest_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "missing function manifest"):
            project.read_manifest(self.root)
        (self.root / "config/functions").mkdir(parents=True)
        with self.assertRaisesRegex(ValueError, "empty function manifest"):
            project.read_manifest(self.root)


class PublishedManifestTests(unittest.TestCase):
    def test_published_shards_are_canonical(self):
        """Re-sharding the reassembled rows reproduces every published shard byte for byte."""
        paths = project.manifest_files(project.ROOT)
        published = {path.name: path.read_text(encoding="utf-8") for path in paths}
        manifest = project.read_manifest(project.ROOT)
        self.assertEqual(project.manifest_shards(manifest), published)
        ids = [item["id"] for item in manifest["functions"]]
        self.assertEqual(len(ids), len(set(ids)))

    def test_published_shards_stay_below_the_github_warning_size(self):
        for path in project.manifest_files(project.ROOT):
            self.assertLess(path.stat().st_size, 50_000_000, path.name)


if __name__ == "__main__":
    unittest.main()
