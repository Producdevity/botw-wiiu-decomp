import unittest

from botw_decomp.ppc_annotations import annotation


def branch(op, bo, bi, low=0):
    return (op << 26) | (bo << 21) | (bi << 16) | low


def shift(xo, source, destination, count, rc=0):
    return (31 << 26) | (source << 21) | (destination << 16) | (count << 11) | (xo << 1) | rc


class AnnotationTests(unittest.TestCase):
    def test_all_condition_fields_bits_and_senses_for_bc_and_bclr(self):
        for field in range(8):
            for bit, name in enumerate(("lt", "gt", "eq", "so-or-un")):
                for bo, sense in ((4, "clear"), (12, "set")):
                    for op, low in ((16, 0x7FFC), (19, 16 << 1)):
                        with self.subTest(field=field, bit=bit, bo=bo, op=op):
                            self.assertEqual(annotation(branch(op, bo, field * 4 + bit, low)),
                                             f"branch if cr{field}.{name} is {sense}")

    def test_bc_address_and_link_bits_do_not_change_condition(self):
        for low in (0, 1, 2, 3, 0xFFFC, 0xFFFF):
            self.assertEqual(annotation(branch(16, 4, 2, low)),
                             "branch if cr0.eq is clear")

    def test_other_bo_values_including_ctr_and_hints_are_unchanged(self):
        for bo in set(range(32)) - {4, 12}:
            for op, low in ((16, 8), (19, 16 << 1)):
                with self.subTest(bo=bo, op=op):
                    self.assertIsNone(annotation(branch(op, bo, 2, low)))
        self.assertIsNone(annotation(branch(19, 20, 0, 16 << 1)))

    def test_bclr_rejects_link_hints_reserved_bits_and_other_xo(self):
        for bo in (4, 12):
            for bit in (0, 11, 12, 13, 14, 15):
                with self.subTest(bo=bo, bit=bit):
                    self.assertIsNone(annotation(branch(19, bo, 2, (16 << 1) | (1 << bit))))
            for xo in set(range(1024)) - {16}:
                self.assertIsNone(annotation(branch(19, bo, 2, xo << 1)))

    def test_shift_register_roles_count_and_rc(self):
        for xo in (24, 536, 792):
            for rc in (0, 1):
                for register in range(32):
                    source, destination, count = register, (register + 7) % 32, (register + 19) % 32
                    with self.subTest(xo=xo, rc=rc, register=register):
                        self.assertEqual(annotation(shift(xo, source, destination, count, rc)),
                                         f"shift destination r{destination}, value r{source}, count register r{count}")

    def test_srawi_count_is_immediate_even_with_record_bit(self):
        for count in range(32):
            for rc in (0, 1):
                self.assertEqual(annotation(shift(824, 9, 3, count, rc)),
                                 f"shift destination r3, value r9, count immediate {count}")

    def test_exact_shift_xo_and_primary_opcode_required(self):
        for xo in set(range(1024)) - {24, 536, 792, 824}:
            for rc in (0, 1):
                self.assertIsNone(annotation(shift(xo, 9, 3, 4, rc)))
        for op in set(range(64)) - {16, 19, 31}:
            self.assertIsNone(annotation((op << 26) | (9 << 21) | (3 << 16) | (4 << 11) | (24 << 1)))

    def test_rejects_non_word_input(self):
        for word in (-1, 0x100000000, True, None, 1.0, "0"):
            with self.subTest(word=word), self.assertRaisesRegex(ValueError, "unsigned 32-bit"):
                annotation(word)


if __name__ == "__main__":
    unittest.main()
