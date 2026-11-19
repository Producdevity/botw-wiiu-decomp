from pathlib import Path
import struct
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import draft
from botw_decomp.compiler import check_text
from botw_decomp.ppc_gnu import UnsupportedInstruction, to_gnu_asm

ADDRESS = 0x02000000


def d_form(op, rt, ra, imm):
    return op << 26 | rt << 21 | ra << 16 | imm & 0xFFFF


def x_form(op, rt, ra, rb, xo, rc=0):
    return op << 26 | rt << 21 | ra << 16 | rb << 11 | xo << 1 | rc


def branch(target, site, link=False):
    return 18 << 26 | (target - site) & 0x03FFFFFC | int(link)


def conditional(bo, bi, target, site):
    return 16 << 26 | bo << 21 | bi << 16 | (target - site) & 0xFFFC


def blob(*words):
    return b"".join(struct.pack(">I", word) for word in words)


class ConversionTests(unittest.TestCase):
    def convert(self, *words, names=None, relocations=None):
        return to_gnu_asm(blob(*words), ADDRESS, "fn_02000000", names, relocations).splitlines()[2:]

    def test_integer_forms_use_gnu_spelling(self):
        lines = self.convert(
            d_form(14, 3, 0, -8), d_form(14, 4, 5, 12), d_form(15, 6, 0, 0x1000),
            d_form(24, 7, 7, 0x2A), d_form(24, 0, 0, 0), d_form(11, 0, 3, -1),
            d_form(10, 4, 3, 255), x_form(31, 4, 5, 6, 40), x_form(31, 4, 3, 4, 444),
            x_form(31, 4, 3, 5, 444, 1), x_form(31, 3, 4, 5, 266 | 0x200),
            d_form(21, 5, 6, 0) | 31 << 6 | 31 << 1, d_form(32, 3, 1, 8), d_form(37, 1, 1, -16),
            x_form(31, 0, 3, 4, 0), 0x4E800020)
        self.assertEqual(lines, [
            "li r3, -8", "addi r4, r5, 12", "lis r6, 0x1000", "ori r7, r7, 0x2a", "nop",
            "cmpwi cr0, r3, -1", "cmplwi cr1, r3, 255", "subf r4, r5, r6", "mr r3, r4",
            "or. r3, r4, r5", "addo r3, r4, r5", "rlwinm r6, r5, 0, 31, 31", "lwz r3, 8(r1)",
            "stwu r1, -16(r1)", "cmpw cr0, r3, r4", "blr"])

    def test_special_registers_and_float_forms(self):
        lines = self.convert(
            x_form(31, 0, 8 & 31, 0, 339), x_form(31, 0, 9 & 31, 0, 467),
            d_form(48, 1, 3, 4), d_form(54, 2, 1, -8), 59 << 26 | 1 << 21 | 2 << 16 | 3 << 11 | 21 << 1,
            63 << 26 | 1 << 21 | 2 << 16 | 3 << 6 | 25 << 1, x_form(63, 0, 1, 2, 0),
            x_form(63, 4, 0, 5, 72))
        self.assertEqual(lines, [
            "mflr r0", "mtctr r0", "lfs f1, 4(r3)", "stfd f2, -8(r1)", "fadds f1, f2, f3",
            "fmul f1, f2, f3", "fcmpu cr0, f1, f2", "fmr f4, f5"])

    def test_branches_labels_and_calls(self):
        site = ADDRESS
        words = [
            conditional(4, 2, ADDRESS + 12, site),                # bne
            branch(0x02100000, site + 4, link=True),              # bl callee
            conditional(12, 4 + 1, ADDRESS + 20, site + 8),       # bgt cr1
            conditional(16, 0, ADDRESS, site + 12),               # bdnz
            0x4E800020,
            branch(0x02200000, site + 20),                        # b tail
        ]
        lines = self.convert(*words, names={0x02100000: "fn_02100000"})
        self.assertEqual(lines, [
            ".L02000000:", "bne .L0200000c", "bl fn_02100000", "bgt cr1, .L02000014",
            ".L0200000c:", "bdnz .L02000000", "blr", ".L02000014:", "b fn_02200000"])

    def test_true_and_false_condition_bits(self):
        lines = self.convert(
            conditional(12, 0, ADDRESS + 8, ADDRESS), conditional(4, 1, ADDRESS + 8, ADDRESS + 4),
            0x4E800020)
        self.assertEqual([line for line in lines if line[0] == "b"], ["blt .L02000008", "ble .L02000008", "blr"])

    def test_data_relocations_become_symbol_halves(self):
        lines = self.convert(
            d_form(15, 12, 0, 0x1000), d_form(32, 3, 12, 0x54), d_form(14, 4, 12, 0x58),
            relocations=[{"offset": 2, "type": 6, "symbol": "data_10000054"},
                         {"offset": 6, "type": 4, "symbol": "data_10000054"},
                         {"offset": 10, "type": 4, "symbol": "data_10000058"}])
        self.assertEqual(lines, ["lis r12, data_10000054@ha", "lwz r3, data_10000054@l(r12)",
                                 "addi r4, r12, data_10000058@l"])

    def test_final_indirect_jump_becomes_call_and_return(self):
        lines = self.convert(d_form(32, 12, 3, 12), d_form(32, 0, 12, 108),
                             x_form(31, 0, 9 & 31, 0, 467), 0x4E800420)
        self.assertEqual(lines[-3:], ["mtctr r0", "bctrl", "blr"])

    def test_unsupported_words_are_rejected(self):
        for word in (4 << 26, 56 << 26, 0):
            with self.subTest(word=word), self.assertRaises(UnsupportedInstruction):
                self.convert(word)

    def test_rejects_bad_input(self):
        with self.assertRaises(ValueError):
            to_gnu_asm(b"\0\0\0", ADDRESS, "fn_02000000")
        with self.assertRaises(ValueError):
            to_gnu_asm(blob(0x4E800020), ADDRESS, "bad symbol")


M2C_SAMPLE = """void *fn_02100000(M2C_UNK);

void *fn_02000000(void *arg0) {
    void *var_r3;

    var_r3 = fn_02100000(NULL);
    M2C_FIELD(var_r3, s32 *, 4) = 0;
    return var_r3;
}
"""


class WrapperTests(unittest.TestCase):
    def test_wraps_as_cpp_the_checker_accepts(self):
        text = draft.to_cpp(M2C_SAMPLE, "fn_02000000")
        check_text(text)
        self.assertIn('extern "C" void *fn_02100000(M2C_UNK);', text)
        self.assertIn('extern "C" void *fn_02000000(void *arg0) {', text)
        for needed in ("typedef s32 M2C_UNK;", "#define M2C_FIELD(", "#define NULL 0", "typedef int s32;"):
            self.assertIn(needed, text.replace("typedef signed int", "typedef int"))
        self.assertNotIn("nullptr", text)
        self.assertNotIn("#include", text)
        self.assertNotIn("M2C_BITWISE", text)

    def test_declared_data_and_pinned_signature(self):
        output = "extern f32 data_10000054;\n\nvoid fn_02000000(s32 arg0) {\n    data_10000054 = 0.0f;\n}\n"
        contract = {"return_type": "void", "parameter_types": ["const unsigned int *"], "variadic": False}
        text = draft.to_cpp(output, "fn_02000000", contract, 'extern "C" int fn_02100000(int);\n')
        self.assertIn('extern "C" f32 data_10000054;', text)
        self.assertIn('extern "C" void fn_02000000(const unsigned int *arg0) {', text)
        self.assertIn('extern "C" int fn_02100000(int);', text)

    def test_contract_names_follow_inferred_parameters(self):
        body = "int fn_02000000(void *arg0, s32 arg1, f32 farg2) {\n    return 0;\n}"
        contract = {"return_type": "int", "parameter_types": ["const void *", "int", "float"], "variadic": False}
        self.assertIn("int fn_02000000(const void *arg0, int arg1, float farg2) {",
                      draft.apply_contract(body, "fn_02000000", contract))

    def test_missing_function_is_rejected(self):
        with self.assertRaises(ValueError):
            draft.to_cpp("extern s32 data_10000054;\n", "fn_02000000")

    def test_context_declares_pinned_interfaces(self):
        contract = {"return_type": "bool", "parameter_types": ["const struct Thing *", "int"], "variadic": False}
        callee = {"id": "fn_02100000", "symbol": "fn_02100000",
                  "source_contract": {"return_type": "void", "parameter_types": [], "variadic": False}}
        row = {"id": "fn_02000000", "symbol": "fn_02000000", "source_contract": contract,
               "bindings": {"fn_02100000": "0x02100000", "fn_02200000": "0x02200000"}}
        context, declarations = draft.build_context(row, {"fn_02100000": callee, "fn_02000000": row})
        self.assertIn("struct Thing;", context)
        self.assertIn("bool fn_02000000(const struct Thing *, int);", context)
        self.assertIn("void fn_02100000(void);", context)
        self.assertIn('extern "C" void fn_02100000(void);', declarations)
        self.assertNotIn("fn_02000000", declarations)
        self.assertNotIn("fn_02200000", context)


class InstallTests(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory()
        self.root = Path(self.directory.name)
        self.addCleanup(self.directory.cleanup)

    def fake_install(self, script="print('x')\n"):
        target = draft.install_path(self.root)
        target.mkdir(parents=True)
        (target / "m2c.py").write_text(script, encoding="utf-8")
        (target / "__pycache__").mkdir()
        (target / "__pycache__/ignored.pyc").write_bytes(b"cache")
        digest = draft.tree_digest(target)
        (target / ".botw-pin").write_text(f"{draft.M2C_COMMIT} {digest}\n", encoding="utf-8")
        return digest

    def test_digest_ignores_pin_file_and_caches(self):
        digest = self.fake_install()
        target = draft.install_path(self.root)
        (target / "__pycache__/other.pyc").write_bytes(b"more")
        self.assertEqual(draft.tree_digest(target), digest)
        (target / "m2c.py").write_text("print('y')\n", encoding="utf-8")
        self.assertNotEqual(draft.tree_digest(target), digest)

    def test_not_installed_changes_nothing(self):
        self.assertFalse(draft.installed(self.root))
        self.assertIsNone(draft.write_draft(self.root, self.root, {}, {}, b""))
        self.assertFalse((self.root / "draft.cpp").exists())

    def test_modified_install_is_refused(self):
        digest = self.fake_install()
        with patch.object(draft, "M2C_TREE_SHA256", digest):
            draft.verify_install(self.root)
            (draft.install_path(self.root) / "m2c.py").write_text("print('tampered')\n", encoding="utf-8")
            with self.assertRaises(ValueError):
                draft.verify_install(self.root)

    def test_install_refuses_existing_directory(self):
        self.fake_install()
        with self.assertRaises(ValueError):
            draft.install(self.root)

    def test_write_draft_with_fake_m2c(self):
        script = ("import sys\nprint('void fn_02000000(void) {\\n}')\n"
                  "assert '--valid-syntax' in sys.argv and '--context' in sys.argv\n")
        digest = self.fake_install(script)
        row = {"id": "fn_02000000", "symbol": "fn_02000000", "address": "0x02000000",
               "size": 4, "bindings": {}}
        packet = self.root / "packet"
        packet.mkdir()
        (packet / "draft.cpp").write_text("stale", encoding="utf-8")
        with patch.object(draft, "M2C_TREE_SHA256", digest):
            result = draft.write_draft(self.root, packet, row, {"fn_02000000": row}, blob(0x4E800020))
            self.assertEqual(result["status"], "written")
            text = (packet / "draft.cpp").read_text(encoding="utf-8")
            self.assertIn('extern "C" void fn_02000000(void) {', text)
            check_text(text)
            result = draft.write_draft(self.root, packet, row, {}, blob(4 << 26))
            self.assertEqual(result["status"], "skipped")
            self.assertFalse((packet / "draft.cpp").exists())

    def test_m2c_failure_is_reported_not_raised(self):
        script = "print('/*\\nDecompilation failure in function fn_02000000:\\n\\nUnable to do it\\n*/')\n"
        digest = self.fake_install(script)
        row = {"id": "fn_02000000", "symbol": "fn_02000000", "address": "0x02000000",
               "size": 4, "bindings": {}}
        with patch.object(draft, "M2C_TREE_SHA256", digest):
            result = draft.write_draft(self.root, self.root, row, {}, blob(0x4E800020))
        self.assertEqual(result["status"], "skipped")
        self.assertIn("Unable to do it", result["reason"])


if __name__ == "__main__":
    unittest.main()
