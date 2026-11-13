import unittest

from botw_decomp.espresso import decode


class EspressoTests(unittest.TestCase):
    def test_known_words(self):
        cases = {
            0xE0230008: "psq_l f1, 8(r3), 0, 0",
            0xE7FFF800: "psq_lu f31, -2048(r31), 1, 7",
            0xF00007FF: "psq_st f0, 2047(r0), 0, 0",
            0xF421FFFF: "psq_stu f1, -1(r1), 1, 7",
        }
        for word, expected in cases.items():
            with self.subTest(word=hex(word)):
                result = decode(word)
                self.assertEqual(result.text, expected)
                self.assertTrue(result.floating_point)

    def test_w_and_gqr_are_independent_of_signed_displacement(self):
        for w in (0, 1):
            for gqr in range(8):
                for displacement in (-2048, -1, 0, 2047):
                    word = 0xE0230000 | w << 15 | gqr << 12 | (displacement & 0xFFF)
                    self.assertEqual(decode(word).text,
                                     f"psq_l f1, {displacement}(r3), {w}, {gqr}")

    def test_update_zero_base_is_reserved(self):
        for word in (0xE4000000, 0xF4000000):
            self.assertIn("reserved", decode(word).text)
            self.assertFalse(decode(word).floating_point)
        for word in (0xE0000000, 0xF0000000):
            self.assertTrue(decode(word).floating_point)

    def test_opcode_four_never_falls_through_to_vmx(self):
        for word in (0x10000000, 0x10000484, 0x1000000C, 0x13FFFFFF):
            self.assertEqual(decode(word).text, "<unsupported Espresso opcode 4>")
            self.assertFalse(decode(word).floating_point)

    def test_ordinary_ppc_is_not_overridden(self):
        for word in (0x38600007, 0x4E800020, 0xC0230000, 0xFC200890, 0):
            self.assertIsNone(decode(word))

    def test_rejects_malformed_words(self):
        for word in (-1, 1 << 32, True, 1.0, b"abcd"):
            with self.subTest(word=word), self.assertRaises(ValueError):
                decode(word)


if __name__ == "__main__":
    unittest.main()
