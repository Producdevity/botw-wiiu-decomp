import hashlib
from pathlib import Path
import tempfile
import struct
import unittest

from botw_decomp.inventory import branch_target, discover, select_pilot
from botw_decomp.rpx import parse
from tests.test_rpx import START, make_rpx


LI = 0x38600007
BLR = 0x4E800020
NOP = 0x60000000


def inventory(words, relocations=(), entry=START):
    code = b"".join(struct.pack(">I", word) for word in words)
    return discover(parse(make_rpx(code, relocations, entry=entry)))


class InventoryTests(unittest.TestCase):
    def test_leaf_hash_includes_all_instructions(self):
        items = inventory([LI, BLR])
        self.assertEqual(len(items), 1)
        self.assertEqual(items[0]["size"], 8)
        self.assertEqual(items[0]["sha256"], hashlib.sha256(struct.pack(">II", LI, BLR)).hexdigest())
        self.assertEqual(items[0]["bindings"], {})
        self.assertIn("RPX entry", items[0]["boundary"])

    def test_psq_is_floating_point_without_changing_hash_or_boundary(self):
        for word in (0xE0230008, 0xE423FFFF, 0xF0238008, 0xF4237008):
            with self.subTest(word=hex(word)):
                item = inventory([word, BLR])[0]
                self.assertEqual(item["category"], "floating-point")
                self.assertEqual(item["size"], 8)
                self.assertEqual(item["sha256"], hashlib.sha256(struct.pack(">II", word, BLR)).hexdigest())
        for word in (0x10000484, 0xE4000000, 0xF4000000):
            self.assertEqual(inventory([word, BLR])[0]["category"], "integer")

    def test_psq_preserves_call_and_loop_category_priority(self):
        self.assertEqual(inventory([0xE0230008, 0x4082FFFC, BLR])[0]["category"], "loops")
        self.assertEqual(inventory([0xE0230008, 0x48000009, BLR, LI, BLR])[0]["category"], "calls")

    def test_direct_call_creates_a_trusted_address_binding(self):
        items = inventory([0x48000009, BLR, LI, BLR])
        self.assertEqual(len(items), 2)
        self.assertEqual(items[0]["category"], "calls")
        self.assertEqual(items[0]["bindings"], {f"fn_{START + 8:08x}": f"0x{START + 8:08x}"})
        self.assertEqual(items[1]["size"], 8)

    def test_conditional_forward_branch_includes_both_paths(self):
        items = inventory([LI, 0x41820008, NOP, BLR])
        self.assertEqual(items[0]["size"], 16)
        self.assertEqual(items[0]["category"], "control-flow")

    def test_backward_loop_includes_the_return_after_the_condition(self):
        items = inventory([LI, 0x3863FFFF, 0x4082FFFC, BLR])
        self.assertEqual(items[0]["size"], 16)
        self.assertEqual(items[0]["category"], "loops")

    def test_conditional_return_includes_fallthrough(self):
        items = inventory([0x4C820020, LI, BLR])
        self.assertEqual(items[0]["size"], 12)

    def test_unreachable_hole_is_not_hashed_as_a_function(self):
        self.assertEqual(inventory([0x48000008, NOP, BLR]), [])

    def test_tail_call_does_not_merge_the_next_function(self):
        items = inventory([0x48000011, 0x4800000C, NOP, NOP, LI, BLR])
        self.assertEqual([item["address"] for item in items], [f"0x{START + 16:08x}"])

    def test_indirect_control_transfers_fail_closed(self):
        for branch in (0x4E800420, 0x4E800421, 0x4E800021, 0x4C000064):
            with self.subTest(branch=hex(branch)):
                self.assertEqual(inventory([LI, branch]), [])

    def test_link_to_next_instruction_is_not_a_function_call(self):
        self.assertEqual(inventory([0x48000005, LI, BLR]), [])

    def test_original_instruction_relocation_excludes_candidate(self):
        self.assertEqual(inventory([LI, BLR], [(START + 2, 4)]), [])

    def test_relocated_call_does_not_invent_an_entry_from_placeholder_bits(self):
        self.assertEqual(inventory([0x48000009, BLR, LI, BLR], [(START + 2, 4)]), [])

    def test_text_and_entry_must_be_word_aligned(self):
        for entry in (START - 4, START + 1, START + 8):
            with self.subTest(entry=entry), self.assertRaises(ValueError):
                inventory([LI, BLR], entry=entry)
        with self.assertRaises(ValueError):
            discover(parse(make_rpx(b"abc")))

    def test_function_walk_is_bounded(self):
        self.assertEqual(inventory([NOP] * 1024 + [BLR]), [])

    def test_branch_addresses_follow_32_bit_signed_displacements(self):
        self.assertEqual(branch_target(0x4BFFFFFC, START), START - 4)
        self.assertEqual(branch_target(0x4BFFFFFE, START), 0xFFFFFFFC)
        self.assertEqual(branch_target(0x48000004, 0xFFFFFFFC), 0)
        self.assertEqual(branch_target(0x4182FFFC, START), START - 4)
        with self.assertRaises(ValueError):
            branch_target(LI, START)

    def test_pilot_limits_and_spreads_each_category(self):
        candidates = [{"address": f"0x{address:08x}", "size": size, "category": category}
                      for address, size, category in ((0x1000, 8, "integer"),
                          (0x1008, 12, "integer"), (0x2000, 16, "integer"),
                          (0x3000, 8, "calls"))]
        self.assertEqual(len(select_pilot(candidates, 1)), 2)
        self.assertEqual(len(select_pilot(candidates, 2)), 3)
        for count in (0, -1, True, 1.5):
            with self.subTest(count=count), self.assertRaises(ValueError):
                select_pilot(candidates, count)


if __name__ == "__main__":
    unittest.main()


from botw_decomp.import_relocations import IMPORT_PROFILE, MIXED_PROFILE  # noqa: E402
from botw_decomp.project import functions, write_manifest  # noqa: E402
from botw_decomp.rpx import DATA_PROFILE, reference_bytes  # noqa: E402
from tests.test_data_relocations import BSS, RODATA, START as CAFE, encode_original, make_cafe  # noqa: E402
from tests.test_import_relocations import THUNK, branch, fixture  # noqa: E402

LIS_R3, LWZ_R3, LIS_R4, ADDI_R4 = 0x3C600000, 0x80630000, 0x3C800000, 0x38840000


def code(*words):
    return b"".join(struct.pack(">I", word) for word in words)


def data_load(destination, symbol="ro", site=CAFE):
    base = RODATA if symbol == "ro" else BSS
    return [(site + 2, 6, symbol, destination - base, base),
            (site + 6, 4, symbol, destination - base, base)]


class OriginalRelocationDiscoveryTests(unittest.TestCase):
    def cafe(self, words, specs, **options):
        text = encode_original(specs, code(*words))
        return parse(make_cafe(text=text, relocations=[item[:4] for item in specs], **options))

    def test_data_relocated_leaf_is_opt_in_and_carries_its_contract(self):
        image = self.cafe([LIS_R3, LWZ_R3, BLR], data_load(RODATA + 8))
        self.assertEqual(discover(image), [])
        row, = discover(image, original_relocations=True)
        self.assertEqual(row["original_profile"], DATA_PROFILE)
        self.assertEqual(row["data_bindings"], {f"data_{RODATA + 8:08x}": f"0x{RODATA + 8:08x}"})
        self.assertEqual(row["data_relocations"], [
            {"offset": 2, "symbol": f"data_{RODATA + 8:08x}", "type": 6},
            {"offset": 6, "symbol": f"data_{RODATA + 8:08x}", "type": 4}])
        self.assertEqual(row["size"], 12)
        self.assertEqual(reference_bytes(image, row), image.read(CAFE, 12, profile=DATA_PROFILE))
        self.assertEqual(row["sha256"], hashlib.sha256(reference_bytes(image, row)).hexdigest())

    def test_discovered_contract_is_a_valid_manifest_row(self):
        image = self.cafe([LIS_R3, LWZ_R3, BLR], data_load(BSS + 4, "zero"))
        row, = discover(image, original_relocations=True)
        with tempfile.TemporaryDirectory() as directory:
            write_manifest(Path(directory), {"schema_version": 1, "functions": [row]})
            self.assertEqual(functions(Path(directory))[row["id"]]["data_relocations"],
                             row["data_relocations"])

    def test_import_call_binds_its_thunk(self):
        image = fixture(branch(CAFE, THUNK) + code(BLR), [(CAFE, 10, "copy", 0)])
        self.assertEqual(discover(image), [])
        row, = discover(image, original_relocations=True)
        self.assertEqual(row["original_profile"], IMPORT_PROFILE)
        self.assertEqual(row["bindings"], {f"fn_{THUNK:08x}": f"0x{THUNK:08x}"})
        self.assertEqual(row["import_relocations"], [
            {"offset": 0, "symbol": f"fn_{THUNK:08x}", "library": "coreinit", "name": "copy"}])
        self.assertEqual(row["category"], "calls")
        self.assertEqual(reference_bytes(image, row), branch(CAFE, THUNK) + code(BLR))

    def test_import_tail_branch_ends_the_function(self):
        image = fixture(code(LI) + branch(CAFE + 4, THUNK, link=False), [(CAFE + 4, 10, "copy", 0)])
        row, = discover(image, original_relocations=True)
        self.assertEqual((row["size"], row["original_profile"]), (8, IMPORT_PROFILE))

    def test_data_and_import_relocations_use_the_mixed_profile(self):
        specs = data_load(BSS + 4, "zero", site=CAFE + 4)
        text = encode_original(specs, code(LI) + code(LIS_R3, LWZ_R3, BLR))
        text = branch(CAFE, THUNK) + text[4:]
        image = fixture(text, [(CAFE, 10, "copy", 0), *[item[:4] for item in specs]])
        row, = discover(image, original_relocations=True)
        self.assertEqual(row["original_profile"], MIXED_PROFILE)
        self.assertEqual([item["offset"] for item in row["data_relocations"]], [6, 10])
        self.assertEqual(row["import_relocations"][0]["offset"], 0)
        self.assertEqual(reference_bytes(image, row), text)

    def test_unsupported_relocations_stay_excluded(self):
        to_text = [(CAFE + 2, 6, "here", 4, CAFE), (CAFE + 6, 4, "here", 4, CAFE)]
        image = self.cafe([LIS_R3, LWZ_R3, BLR], to_text,
                          symbols={"here": (CAFE, 0, 0x12, "text")})
        self.assertEqual(discover(image, original_relocations=True), [])
        relocated_call = fixture(branch(CAFE, CAFE + 8) + code(BLR, LI, BLR), [(CAFE, 10, "copy", 4)])
        self.assertEqual([row["address"] for row in discover(relocated_call, original_relocations=True)],
                         [])

    def test_address_taken_interior_fences_a_relocated_span(self):
        for target, admitted in ((CAFE + 8, False), (CAFE, True)):
            pointer = [(CAFE + 18, 6, "here", target - CAFE, CAFE),
                       (CAFE + 22, 4, "here", target - CAFE, CAFE)]
            image = self.cafe([LIS_R3, LWZ_R3, NOP, BLR, LIS_R4, ADDI_R4, BLR],
                              data_load(RODATA) + pointer,
                              symbols={"here": (CAFE, 0, 0x12, "text")})
            with self.subTest(target=hex(target)):
                rows = discover(image, original_relocations=True)
                self.assertEqual([row["address"] for row in rows],
                                 [f"0x{CAFE:08x}"] if admitted else [])
