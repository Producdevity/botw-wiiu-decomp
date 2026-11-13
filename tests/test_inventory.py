import hashlib
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
