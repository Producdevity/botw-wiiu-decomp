import json
import struct
import unittest

from botw_decomp.register_proof import Unsupported, canonical, report


def words(*values):
    return struct.pack(">" + "I" * len(values), *values)


def d(op, rt, ra, imm):
    return op << 26 | rt << 21 | ra << 16 | imm & 0xFFFF


def add(rt, ra, rb, *, oe=0, rc=0):
    return 31 << 26 | rt << 21 | ra << 16 | rb << 11 | oe << 10 | 266 << 1 | rc


def cmp(op, bf, ra, value, *, reserved=0):
    return op << 26 | bf << 23 | reserved << 21 | ra << 16 | value & 0xFFFF


def cmp_reg(unsigned, bf, ra, rb, *, reserved=0):
    return (31 << 26 | bf << 23 | reserved << 21 | ra << 16 |
            rb << 11 | (32 if unsigned else 0) << 1)


def bc(bo, bi, displacement, *, aa=0, lk=0):
    return (16 << 26 | bo << 21 | bi << 16 | displacement & 0xFFFC |
            aa << 1 | lk)


def b(displacement, *, aa=0, lk=0):
    return 18 << 26 | displacement & 0x03FFFFFC | aa << 1 | lk


def bclr(bo=20, bi=0, *, bh=0, reserved=0, lk=0):
    return (19 << 26 | bo << 21 | bi << 16 | reserved << 13 |
            bh << 11 | 16 << 1 | lk)


def equivalent(a, b):
    return report(words(*a), words(*b))["equivalent"]


class RegisterProofTests(unittest.TestCase):
    def test_temporary_rename_and_byte_count(self):
        a = [d(14, 10, 3, 8), d(32, 11, 10, 4), d(36, 11, 4, -8), bclr()]
        c = [d(14, 12, 3, 8), d(32, 10, 12, 4), d(36, 10, 4, -8), bclr()]
        result = report(words(*a), words(*c))
        self.assertTrue(result["equivalent"])
        self.assertFalse(result["exact_bytes"])
        self.assertTrue(result["exact_byte_count"])
        self.assertEqual(result["original_semantic_sha256"], result["candidate_semantic_sha256"])

    def test_address_value_operand_and_compare_changes(self):
        base = [d(32, 10, 3, 4), d(36, 10, 4, 8), cmp(11, 0, 10, 9), bclr()]
        variants = [
            [d(32, 10, 5, 4), *base[1:]],
            [d(32, 10, 3, 5), *base[1:]],
            [base[0], d(36, 10, 5, 8), *base[2:]],
            [base[0], d(36, 6, 4, 8), *base[2:]],
            [*base[:2], cmp(10, 0, 10, 9), bclr()],
            [*base[:2], cmp(11, 1, 10, 9), bclr()],
            [*base[:2], cmp(11, 0, 10, 10), bclr()],
            [*base[:2], cmp(11, 0, 6, 9), bclr()],
        ]
        for variant in variants:
            with self.subTest(variant=variant):
                self.assertFalse(equivalent(base, variant))

    def test_register_compare_sources_and_unused_events(self):
        a = [add(10, 3, 4), cmp_reg(False, 2, 10, 5), bclr()]
        renamed = [add(11, 3, 4), cmp_reg(False, 2, 11, 5), bclr()]
        self.assertTrue(equivalent(a, renamed))
        self.assertFalse(equivalent(a, [add(11, 3, 4), cmp_reg(False, 2, 10, 5), bclr()]))
        self.assertFalse(equivalent(a, [add(10, 3, 4), cmp_reg(True, 2, 10, 5), bclr()]))
        self.assertFalse(equivalent(a, [add(10, 3, 4), cmp_reg(False, 2, 10, 6), bclr()]))
        self.assertFalse(equivalent([d(14, 10, 3, 1), bclr()],
                                    [d(14, 10, 4, 1), bclr()]))

    def test_add_uses_r0_as_register_but_addi_ra0_is_zero(self):
        self.assertTrue(equivalent(
            [d(14, 10, 0, 7), bclr()], [d(14, 11, 0, 7), bclr()]))
        self.assertFalse(equivalent(
            [add(10, 0, 3), bclr()], [add(10, 12, 3), bclr()]))
        self.assertFalse(equivalent(
            [d(14, 10, 0, 7), bclr()], [d(14, 10, 12, 7), bclr()]))

    def test_overwritten_temporary_still_observable_as_event(self):
        a = [d(14, 10, 3, 1), d(14, 10, 4, 2), bclr()]
        c = [d(14, 11, 3, 1), d(14, 10, 4, 2), bclr()]
        self.assertTrue(equivalent(a, c))
        changed = [d(14, 11, 5, 1), d(14, 10, 4, 2), bclr()]
        self.assertFalse(equivalent(a, changed))
        used = [d(14, 10, 3, 1), add(11, 10, 4), bclr()]
        changed_used = [d(14, 12, 3, 1), add(11, 10, 4), bclr()]
        self.assertFalse(equivalent(used, changed_used))

    def test_final_callee_saved_return_and_cr(self):
        a = [d(14, 3, 3, 1), bclr()]
        self.assertFalse(equivalent(a, [d(14, 10, 3, 1), bclr()]))
        self.assertFalse(equivalent([d(14, 14, 3, 1), bclr()],
                                    [d(14, 10, 3, 1), bclr()]))
        self.assertFalse(equivalent([cmp(11, 0, 3, 1), bclr()],
                                    [cmp(11, 1, 3, 1), bclr()]))

    def test_overwritten_protected_destination_is_not_renamable(self):
        original = words(d(14, 10, 0, 7), d(14, 3, 0, 9), bclr())
        candidate = words(d(14, 3, 0, 7), d(14, 3, 0, 9), bclr())
        self.assertNotEqual(canonical(original), canonical(candidate))
        result = report(original, candidate)
        self.assertFalse(result["equivalent"])
        self.assertEqual(result["reason"], "changed GPR fields exceed fixed scratch set")

    def test_full_conditional_paths_and_branch_provenance(self):
        a = [cmp(11, 1, 3, 5), bclr(12, 4), d(14, 10, 3, 8), bclr()]
        c = [cmp(11, 1, 3, 5), bclr(12, 4), d(14, 11, 3, 8), bclr()]
        self.assertTrue(equivalent(a, c))
        self.assertFalse(equivalent(a, [a[0], bclr(4, 4), *a[2:]]))
        self.assertFalse(equivalent(a, [a[0], bclr(12, 5), *a[2:]]))
        self.assertFalse(equivalent(a, [a[0], bclr(12, 0), *a[2:]]))
        forward = [cmp(11, 0, 3, 5), bc(12, 0, 8), d(14, 10, 3, 8), bclr()]
        self.assertFalse(equivalent(forward, [forward[0], bc(4, 0, 8), *forward[2:]]))
        self.assertFalse(equivalent(forward, [forward[0], bc(12, 0, 4), *forward[2:]]))

    def test_forward_unconditional_branch_requires_reachability(self):
        with self.assertRaisesRegex(Unsupported, "unreachable"):
            canonical(words(b(8), d(14, 10, 3, 1), bclr()))
        with self.assertRaisesRegex(Unsupported, "unreachable"):
            canonical(words(bclr(), d(14, 10, 3, 1)))
        with self.assertRaisesRegex(Unsupported, "unsupported opcode"):
            canonical(words(bclr(), 63 << 26))

    def test_unsupported_and_malformed(self):
        unsupported = [
            18 << 26 | 1,  # bl
            63 << 26,       # FP
            31 << 26 | 20 << 1,  # atomic lwarx
            add(10, 3, 4, oe=1), add(10, 3, 4, rc=1),
            cmp(11, 0, 3, 1, reserved=1),
            cmp_reg(False, 0, 3, 4, reserved=1),
            bclr(20, bh=1), bclr(20, lk=1), bclr(20, reserved=1),
            bclr(20, bi=1),
        ]
        for word in unsupported:
            with self.subTest(word=word), self.assertRaises(Unsupported):
                canonical(words(word))
        for raw in (b"", b"\0" * 3, b"\0" * 516):
            with self.assertRaises(Unsupported):
                canonical(raw)
        for code in (
            [d(14, 10, 3, 1)],  # falloff
            [bc(12, 0, 0), bclr()],  # backward/self edge
            [bc(12, 0, 8), bclr()],  # target off end
            [bc(12, 0, 8, lk=1), bclr(), bclr()],
            [bc(12, 0, 8, aa=1), bclr(), bclr()],
            [bclr(12, 0)],  # conditional return fallthrough
            [b(-4), bclr()],
        ):
            with self.subTest(code=code), self.assertRaises(Unsupported):
                canonical(words(*code))

    def test_path_limit(self):
        def branches(count):
            code = []
            for _ in range(count):
                code.extend((bc(12, 0, 8), d(14, 10, 10, 1)))
            return code + [bclr()]

        self.assertEqual(len(json.loads(canonical(words(*branches(6))))["paths"]), 64)
        with self.assertRaisesRegex(Unsupported, "path limit"):
            canonical(words(*branches(7)))

    def test_byte_limit_inclusive(self):
        canonical(words(*([d(14, 10, 10, 1)] * 127), bclr()))


if __name__ == "__main__":
    unittest.main()
