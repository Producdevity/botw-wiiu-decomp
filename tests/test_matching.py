import hashlib
import struct
import unittest

from botw_decomp.matching import compare_function, compare_function_hash
from tests.test_elf import make_object


START = 0x02001000
CODE = bytes.fromhex("386000074e800020")
EXTERNAL = ("outside", 0, 0, 0x10, 0, "undef")


class MatchingTests(unittest.TestCase):
    def compare(self, obj, expected=CODE, bindings=None, address=START):
        return compare_function(obj, "target", expected, address, bindings or {})

    def test_exact_function(self):
        result = self.compare(make_object())
        self.assertTrue(result["matched"])
        self.assertEqual(result["actual_sha256"], hashlib.sha256(CODE).hexdigest())
        self.assertEqual(result["expected_sha256"], result["actual_sha256"])

    def test_instruction_change_is_not_a_match(self):
        result = self.compare(make_object(bytes.fromhex("386000084e800020")))
        self.assertEqual(result["status"], "mismatch")
        self.assertFalse(result["matched"])
        self.assertEqual(result["first_difference"], 3)

    def test_exact_size_is_required(self):
        result = self.compare(make_object(CODE + bytes(4)))
        self.assertEqual(result["status"], "mismatch")
        self.assertEqual(result["reason"], "function size differs")

    def test_hash_check_without_game_bytes(self):
        sha = hashlib.sha256(CODE).hexdigest()
        result = compare_function_hash(make_object(), "target", sha, len(CODE), START, {})
        self.assertTrue(result["matched"])
        self.assertFalse(compare_function_hash(make_object(), "target", "0" * 64,
                                                len(CODE), START, {})["matched"])
        self.assertEqual(compare_function_hash(make_object(), "target", "bad",
                                                len(CODE), START, {})["status"], "rejected")

    def test_external_branch_resolves_and_wrong_binding_fails(self):
        obj = make_object(bytes.fromhex("480000014e800020"), extra_symbols=[EXTERNAL],
                          relocations=[(0, 10, "outside", 0)])
        expected = bytes.fromhex("480000114e800020")
        self.assertTrue(self.compare(obj, expected, {"outside": START + 16})["matched"])
        self.assertEqual(self.compare(obj, expected, {"outside": START + 20})["status"], "mismatch")
        self.assertEqual(self.compare(obj, expected)["status"], "rejected")

    def test_conditional_branch_preserves_condition_and_link(self):
        obj = make_object(bytes.fromhex("418200014e800020"), extra_symbols=[EXTERNAL],
                          relocations=[(0, 11, "outside", 0)])
        expected = bytes.fromhex("4182fff14e800020")
        self.assertTrue(self.compare(obj, expected, {"outside": START - 16})["matched"])

    def test_branch_range_and_alignment_are_enforced(self):
        for kind, instruction, destinations in (
            (10, "48000001", [START + (1 << 25), START + 2]),
            (11, "41820000", [START + (1 << 15), START - (1 << 15) - 4]),
        ):
            obj = make_object(bytes.fromhex(instruction + "4e800020"), extra_symbols=[EXTERNAL],
                              relocations=[(0, kind, "outside", 0)])
            for destination in destinations:
                with self.subTest(kind=kind, destination=destination):
                    self.assertEqual(self.compare(obj, bindings={"outside": destination})["status"], "rejected")

    def test_branch_relocation_cannot_patch_a_nonbranch_or_absolute_branch(self):
        for instruction in ("38600000", "48000003"):
            obj = make_object(bytes.fromhex(instruction + "4e800020"), extra_symbols=[EXTERNAL],
                              relocations=[(0, 10, "outside", 0)])
            self.assertEqual(self.compare(obj, bindings={"outside": START + 4})["status"], "rejected")

    def test_absolute_high_low_and_adjusted_high(self):
        destination = 0x12348000
        for kind, half in ((4, 0x8000), (5, 0x1234), (6, 0x1235)):
            obj = make_object(bytes.fromhex("3c6000004e800020"), extra_symbols=[EXTERNAL],
                              relocations=[(2, kind, "outside", 0)])
            expected = struct.pack(">I", 0x3C600000 | half) + CODE[4:]
            with self.subTest(kind=kind):
                self.assertTrue(self.compare(obj, expected, {"outside": destination})["matched"])

    def test_addr32_and_rel32(self):
        for kind, destination, word in ((1, 0x10200000, 0x10200004),
                                       (26, START - 8, 0xFFFFFFFC)):
            obj = make_object(bytes(4) + CODE[4:], extra_symbols=[EXTERNAL],
                              relocations=[(0, kind, "outside", 4)])
            self.assertTrue(self.compare(obj, struct.pack(">I", word) + CODE[4:],
                                         {"outside": destination})["matched"])

    def test_overlapping_relocations_fail_closed(self):
        obj = make_object(extra_symbols=[EXTERNAL],
                          relocations=[(0, 1, "outside", 0), (2, 4, "outside", 0)])
        result = self.compare(obj, bindings={"outside": 0})
        self.assertEqual(result["status"], "rejected")
        self.assertIn("overlapping", result["reason"])

    def test_unsupported_relocation_fails_closed(self):
        obj = make_object(relocations=[(0, 32, "target", 0)])
        self.assertEqual(self.compare(obj)["status"], "rejected")

    def test_relocation_crossing_function_boundary_fails(self):
        obj = make_object(CODE + bytes(4), symbol_size=8, extra_symbols=[EXTERNAL],
                          relocations=[(6, 1, "outside", 0)])
        self.assertEqual(self.compare(obj, bindings={"outside": 0})["status"], "rejected")

    def test_local_rodata_fails_even_with_trusted_address(self):
        obj = make_object(bytes(4) + CODE[4:], rodata=b"constant",
                          extra_symbols=[("constant", 0, 8, 1, 0, "rodata")],
                          relocations=[(0, 1, "constant", 0)])
        result = self.compare(obj, bindings={"constant": 0x10000000})
        self.assertEqual(result["status"], "rejected")
        self.assertIn("allocated section", result["reason"])

    def test_unreferenced_allocated_data_is_not_accepted(self):
        self.assertEqual(self.compare(make_object(rodata=b"hidden"))["status"], "rejected")

    def test_nonallocated_ghs_metadata_is_allowed(self):
        self.assertTrue(self.compare(make_object(metadata=True))["matched"])

    def test_additional_function_body_or_alias_is_rejected(self):
        for symbol in (("hidden", 8, 8, 0x12, 0, "text"),
                       ("hidden", 0, 8, 0x12, 0, "text"),
                       ("hidden", 8, 0, 0x12, 0, "text")):
            obj = make_object(CODE + CODE, symbol_size=8, extra_symbols=[symbol])
            self.assertEqual(self.compare(obj)["status"], "rejected")

    def test_unverified_text_cannot_hide_outside_symbol_size(self):
        obj = make_object(CODE + CODE, symbol_size=8)
        self.assertEqual(self.compare(obj)["status"], "rejected")

    def test_short_alignment_padding_is_allowed_but_cannot_be_relocated(self):
        for padding in (bytes(4), bytes.fromhex("60000000")):
            obj = make_object(CODE + padding, symbol_size=8, text_alignment=16)
            self.assertTrue(self.compare(obj)["matched"])
        obj = make_object(CODE + bytes(4), symbol_size=8, text_alignment=16,
                          extra_symbols=[EXTERNAL], relocations=[(8, 1, "outside", 0)])
        self.assertEqual(self.compare(obj, bindings={"outside": 0})["status"], "rejected")

    def test_relocation_before_symbol_cannot_write_into_selected_bytes(self):
        obj = make_object(bytes(4) + CODE, symbol_value=4, symbol_size=8,
                          text_alignment=16, extra_symbols=[EXTERNAL],
                          relocations=[(2, 1, "outside", 0)])
        self.assertEqual(self.compare(obj, bindings={"outside": 0})["status"], "rejected")

    def test_unreferenced_common_data_is_rejected(self):
        obj = make_object(extra_symbols=[("hidden", 4, 4, 0x11, 0, "common")])
        self.assertEqual(self.compare(obj)["status"], "rejected")

    def test_absolute_symbol_cannot_override_its_declared_address(self):
        obj = make_object(bytes(4) + CODE[4:],
                          extra_symbols=[("absolute", START, 0, 0x10, 0, "abs")],
                          relocations=[(0, 1, "absolute", 0)])
        expected = struct.pack(">I", START) + CODE[4:]
        self.assertTrue(self.compare(obj, expected, {"absolute": START})["matched"])
        self.assertEqual(self.compare(obj, expected, {"absolute": START + 4})["status"], "rejected")

    def test_local_reference_within_selected_function(self):
        obj = make_object(bytes.fromhex("480000004e800020"),
                          extra_symbols=[("label", 4, 0, 0, 0, "text")],
                          relocations=[(0, 10, "label", 0)])
        self.assertTrue(self.compare(obj, bytes.fromhex("480000044e800020"))["matched"])

    def test_local_reference_outside_selected_function_requires_verified_function(self):
        obj = make_object(bytes.fromhex("480000004e800020") + bytes(4), symbol_size=8,
                          extra_symbols=[("label", 8, 0, 0, 0, "text")],
                          relocations=[(0, 10, "label", 0)])
        self.assertEqual(self.compare(obj, bindings={"label": START + 8})["status"], "rejected")

    def test_malformed_inputs_do_not_match(self):
        for obj in (b"", b"not an ELF", make_object(target_type=1),
                    make_object(text_flags=2), make_object(symbol_size=0),
                    make_object(extra_symbols=[("target", 0, 8, 0x12, 0, "text")])):
            with self.subTest(length=len(obj)):
                self.assertEqual(self.compare(obj)["status"], "rejected")

    def test_invalid_binding_and_address_fail_closed(self):
        for bindings in ({"outside": -1}, {"outside": True}, {"target": START + 4}):
            self.assertEqual(self.compare(make_object(), bindings=bindings)["status"], "rejected")
        self.assertEqual(self.compare(make_object(), address=START + 1)["status"], "rejected")


if __name__ == "__main__":
    unittest.main()
