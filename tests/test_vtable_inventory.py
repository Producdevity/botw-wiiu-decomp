import contextlib
from dataclasses import replace
import hashlib
import io
import json
import struct
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

from botw_decomp.inventory import discover
from botw_decomp.rpx import Section, _RELOCATION_RECORD, parse
from botw_decomp.vtable_inventory import discover_vtables
from tests.test_data_relocations import START, make_cafe
from tests.test_short_inventory import BLR, LI, NOP, branch, inventory_cli


RODATA = 0x12348010
FIRST, SECOND = START + 24, START + 32
HIGH = 0x3CA01235  # lis r5, 0x1235
LOW = 0x38C58010  # addi r6, r5, -32752
MOVE = 0x7CC73378  # mr r7, r6
STORE = 0x90E30010  # stw r7, 16(r3)


def fixture(*, changes=None, adjustment=0, header=0, linked_second=SECOND,
            pointer_section=1, relocations=None, extra_records=(), extra_words=(), rodata_flags=3):
    words = [HIGH, NOP, LOW, MOVE, STORE, BLR, LI, BLR, LI, BLR, BLR, *extra_words]
    for index, word in (changes or {}).items():
        words[index] = word
    rodata = struct.pack(">6I", header, 0, 0, FIRST, adjustment, linked_second)
    if relocations is None:
        relocations = [(START + 2, 6, "ro", 0), (START + 10, 4, "ro", 0)]
    original = parse(make_cafe(text=struct.pack(f">{len(words)}I", *words), rodata=rodata,
                               rodata_address=RODATA, rodata_flags=rodata_flags, relocations=relocations))
    sections = list(original.sections)
    code_base = START
    if pointer_section == 3:
        code_base = START - 8
        sections[3] = Section(3, ".syscall", 1, 6, code_base, 8, struct.pack(">2I", BLR, BLR))
    # Extend the parser's text relocations with structured records for the data slots.
    slots = [
        (RODATA + 12, 1, FIRST - code_base, code_base, 0, pointer_section, 3, 0),
        (RODATA + 20, 1, SECOND - code_base, code_base, 0, pointer_section, 3, 0),
    ]
    records = sorted([*_RELOCATION_RECORD.iter_unpack(original.relocation_records), *slots, *extra_records])
    sites = tuple(record[0] for record in records)
    return replace(original, sections=tuple(sections), relocation_sites=frozenset(sites),
                   sorted_relocation_sites=sites,
                   sorted_relocation_ends=tuple(site + (2 if kind in (4, 6) else 4)
                                                for site, kind, *_ in records),
                   relocation_records=b"".join(_RELOCATION_RECORD.pack(*record) for record in records))


def candidates(image, **options):
    rows, summary = discover_vtables(image, discover(image), **options)
    return {int(row["address"], 16): row for row in rows}, summary


class VtableInventoryTests(unittest.TestCase):
    def test_linked_slots_and_stored_pointer_establish_candidates(self):
        for pointer_section in (1, 3):
            with self.subTest(pointer_section=pointer_section):
                image = fixture(pointer_section=pointer_section)
                self.assertEqual(discover(image), [])
                rows, summary = candidates(image)
                self.assertEqual(list(rows), [FIRST, SECOND])
                self.assertEqual(summary["tables"], 1)
                self.assertEqual(summary["bytes"], 16)
                first = rows[FIRST]
                self.assertEqual(first["status"], "unmatched")
                self.assertEqual(first["bindings"], {})
                self.assertEqual(first["sha256"], hashlib.sha256(image.read(FIRST, 8)).hexdigest())
                self.assertEqual(first["discovery_evidence"], {
                    "mode": "stored-vtable-pattern",
                    "memberships": [{
                        "table": f"0x{RODATA:08x}", "slot": f"0x{RODATA + 12:08x}",
                        "ha_relocation": f"0x{START + 2:08x}", "lo_relocation": f"0x{START + 10:08x}",
                        "store": f"0x{START + 16:08x}", "store_base_register": 3, "store_linked_displacement": 16,
                    }],
                })

    def test_nonzero_adjustment_or_header_rejects_incomplete_run(self):
        relocated_adjustment = (RODATA + 16, 1, 0, 0, 0, 0, 0, 0)
        for options in ({"adjustment": 4}, {"header": 1}, {"extra_records": [relocated_adjustment]}):
            with self.subTest(options=options):
                rows, summary = candidates(fixture(**options))
                self.assertFalse(rows)
                self.assertEqual(summary["tables"], 0)

    def test_clobbers_and_unchecked_materializations_are_rejected(self):
        clobber_high = 0x38A00000
        clobber_low = 0x38C00000
        wrong_store_input = STORE ^ (1 << 21)
        for changes in ({1: clobber_high}, {3: clobber_low}, {4: wrong_store_input},
                        {0: HIGH ^ 1}, {2: LOW ^ 1}, {1: branch(4, 16)}):
            with self.subTest(changes=changes):
                rows, summary = candidates(fixture(changes=changes))
                self.assertFalse(rows)
                self.assertEqual(summary["stored_table_roots"], 0)
        for relocations in ([], [(START, 6, "ro", 0), (START + 10, 4, "ro", 0)],
                            [(START + 2, 6, "ro", 0), (START + 10, 4, "ro", 4)]):
            with self.subTest(relocations=relocations):
                self.assertFalse(candidates(fixture(relocations=relocations))[0])

    def test_relocations_cannot_change_store_or_dataflow_opcodes(self):
        for site, kind in ((START + 4, 1), (START + 12, 1), (START + 14, 4), (START + 16, 1)):
            with self.subTest(site=site, kind=kind):
                relocation = (site, kind, 0, RODATA, 0, 2, 3, 0)
                self.assertFalse(candidates(fixture(extra_records=[relocation]))[0])

    def test_store_displacement_relocation_preserves_pointer_dataflow(self):
        relocation = (START + 18, 4, 0, RODATA, 0, 2, 3, 0)
        rows, _ = candidates(fixture(changes={4: STORE | 0x8000}, extra_records=[relocation]))
        self.assertEqual(list(rows), [FIRST, SECOND])

    def test_linked_slot_provenance_and_sections_must_agree(self):
        for options in ({"pointer_section": 2}, {"linked_second": SECOND + 4},
                        {"linked_second": SECOND + 2}):
            with self.subTest(options=options):
                self.assertFalse(candidates(fixture(**options))[0])
        with self.assertRaisesRegex(ValueError, "allocated .rodata"):
            candidates(fixture(rodata_flags=6))
        image = fixture()
        with self.assertRaisesRegex(ValueError, "relocation metadata"):
            candidates(replace(image, relocation_records=image.relocation_records[:-1]))

    def test_previous_terminal_and_interior_entry_gate_candidates(self):
        for changes, reason in (
                ({5: NOP}, "no preceding unrelocated terminal"),
                ({10: branch(40, 28)}, "external branch into interior"),
                ({10: branch(40, 28, True)}, "incomplete or relocated control flow")):
            with self.subTest(changes=changes):
                rows, summary = candidates(fixture(changes=changes))
                self.assertEqual(list(rows), [SECOND])
                self.assertEqual(summary["rejected"][reason], 1)

    def test_protected_function_cannot_overlap(self):
        for address, reason in ((FIRST, "known entry or body"), (FIRST + 4, "known body overlap")):
            with self.subTest(address=address):
                rows, summary = candidates(fixture(), admitted=[{"address": f"0x{address:08x}", "size": 4}])
                self.assertEqual(list(rows), [SECOND])
                self.assertEqual(summary["rejected"][reason], 1)

    def test_cfg_candidates_keep_direct_call_bindings(self):
        target = START + 48
        image = fixture(changes={8: branch(32, 48, True)}, extra_words=(NOP, LI, BLR))
        baseline = discover(image)
        self.assertEqual([row["address"] for row in baseline], [f"0x{target:08x}"])
        rows, _ = candidates(image)
        self.assertEqual(rows[SECOND]["category"], "calls")
        self.assertEqual(rows[SECOND]["bindings"], {f"fn_{target:08x}": f"0x{target:08x}"})

    def test_cli_opt_in_appends_only_vtable_candidates(self):
        image = fixture(changes={8: branch(32, 48, True)}, extra_words=(NOP, LI, BLR))
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "game.rpx"
            reports = []
            with (patch.object(inventory_cli, "load", return_value=image),
                  patch.object(inventory_cli.project, "functions", return_value={})):
                for flags in ([], ["--vtables"]):
                    output = io.StringIO()
                    with contextlib.redirect_stdout(output):
                        self.assertEqual(inventory_cli.main(["--rpx", str(path), *flags]), 0)
                    reports.append(json.loads(output.getvalue()))
        baseline, extended = reports
        self.assertEqual(baseline["functions"], discover(image))
        self.assertNotIn("vtables", baseline["options"])
        self.assertTrue(extended["options"]["vtables"])
        self.assertTrue(extended["summary"]["enabled"])
        self.assertEqual(extended["summary"]["additions"], 2)
        self.assertEqual(extended["summary"]["vtables"]["additions"], 2)
        self.assertEqual(extended["functions"][:len(baseline["functions"])], baseline["functions"])


if __name__ == "__main__":
    unittest.main()
