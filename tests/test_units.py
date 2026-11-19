import json
import struct
import tempfile
import unittest
from pathlib import Path

from botw_decomp import rpx, units

TEXT, RODATA = 0x1000, 0x2000
NOP, BLR = 0x60000000, 0x4E800020
# Unit A: function, initializer, inline copy whose .rodata sits below the initializer's.
# Unit B: two functions, then its initializer; unit C's initializer follows immediately.
LAYOUT = [(0x1000, 0x00), (0x1010, 0x10), (0x1020, 0x08), (0x1030, 0x20), (0x1040, 0x24),
          (0x1050, 0x30), (0x1060, 0x40), (0x1070, 0x38)]
INITIALIZERS = [0x1010, 0x1050, 0x1060]
PATH = b"D:\\home\\Cafe\\U-King\\trunk\\Foo\\src\\barBaz.cpp\0"


def image():
    text = b"".join(struct.pack(">4I", NOP, NOP, NOP, BLR) for _ in LAYOUT)
    rodata = bytearray(0x200)
    rodata[0x80:0x80 + len(PATH)] = PATH
    relocations = [(start + 2, 4, RODATA + offset) for start, offset in LAYOUT]
    relocations.append((0x1036, 4, RODATA + 0x80))
    relocations += [(RODATA + 0x100 + 4 * i, 1, entry) for i, entry in enumerate(INITIALIZERS)]
    relocations.sort()
    records = b"".join(struct.pack(">IBiIIHBB", site, kind, 0, destination, 0, 0, 0, 0)
                       for site, kind, destination in relocations)
    widths = {1: 4, 4: 2}
    sections = (rpx.Section(0, "", 0, 0, 0, 0, b""),
                rpx.Section(1, ".text", 1, 6, TEXT, len(text), text),
                rpx.Section(2, ".rodata", 1, 2, RODATA, len(rodata), bytes(rodata)))
    sites = tuple(site for site, _, _ in relocations)
    return rpx.Rpx("0" * 64, TEXT, sections, frozenset(sites), sites,
                   tuple(site + widths[kind] for site, kind, _ in relocations), records)


TARGET = {"id": "test", "text": [{"address": "0x1000", "size": 0x80}]}


class UnitTests(unittest.TestCase):
    def setUp(self):
        self.image = image()
        self.units = units.infer(self.image, [start for start, _ in LAYOUT], minimum=3)

    def test_table_is_the_increasing_pointer_run(self):
        self.assertEqual(units.initializer_table(self.image, 3), (RODATA + 0x100, INITIALIZERS))
        with self.assertRaises(ValueError):
            units.initializer_table(self.image, 4)

    def test_cut_follows_inline_copies_and_rodata_order(self):
        spans = [(u["start"], u["end"], u["end_confidence"], u["end_evidence"]) for u in self.units]
        self.assertEqual(spans, [
            ("0x00001000", "0x00001030", "high", "rodata"),
            ("0x00001030", "0x00001060", "high", "forced"),
            ("0x00001060", "0x00001080", "high", "text-end"),
        ])
        self.assertEqual([u["id"] for u in self.units], [f"unit_{a:08x}" for a in INITIALIZERS])

    def test_files_come_from_embedded_paths(self):
        units.name_units(self.image, self.units)
        self.assertEqual(self.units[1]["files"], [{"path": "Foo/src/barBaz.cpp", "string": "0x00002080"}])
        self.assertNotIn("files", self.units[0])

    def test_validate_and_coverage(self):
        document = {"schema_version": 1, "target": "test", "units": self.units}
        self.assertEqual(units.validate(document, TARGET), self.units)
        self.assertEqual(units.coverage(self.units, TARGET), {"high": 0x80, "medium": 0, "low": 0, "none": 0})
        with tempfile.TemporaryDirectory() as root:
            self.assertEqual(units.read(Path(root), TARGET), [])
            (Path(root) / "config").mkdir()
            (Path(root) / units.UNITS_FILE).write_text(json.dumps(document), encoding="utf-8")
            self.assertEqual(units.read(Path(root), TARGET), self.units)
        broken = [dict(u) for u in self.units]
        broken[1]["start"] = "0x00001020"
        with self.assertRaises(ValueError):
            units.validate({**document, "units": broken}, TARGET)
        broken = [dict(u) for u in self.units]
        broken[0]["initializer"] = "0x00001040"
        with self.assertRaises(ValueError):
            units.validate({**document, "units": broken}, TARGET)
        broken = [dict(u) for u in self.units]
        broken[0]["end_window"] = ["0x00001040", "0x00001050"]
        with self.assertRaises(ValueError):
            units.validate({**document, "units": broken}, TARGET)

    def test_paths_lose_the_build_root(self):
        self.assertEqual(units.normalize_path("../ut/os/./platform/ut_Print_Cafe.cpp"),
                         "ut/os/platform/ut_Print_Cafe.cpp")
        self.assertEqual(units.normalize_path("hkpWorld.cpp"), "hkpWorld.cpp")


class PublishedUnitsTests(unittest.TestCase):
    def test_published_units_are_valid_and_cover_text(self):
        from botw_decomp import project
        target = project.read_json(project.ROOT / "config/target.json")
        published = units.read(project.ROOT, target)
        self.assertTrue(published)
        self.assertEqual(units.coverage(published, target)["none"], 0)


if __name__ == "__main__":
    unittest.main()
