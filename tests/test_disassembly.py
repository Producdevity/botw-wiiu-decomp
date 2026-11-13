from pathlib import Path
import subprocess
import unittest
from unittest.mock import patch

from botw_decomp.disassembly import _overlay, disassemble, locate
from botw_decomp.elf import parse_object


SYNTHETIC_CODE = bytes.fromhex("386000074e800020")


class DisassemblyTests(unittest.TestCase):
    def test_wraps_exact_code_and_uses_original_address(self):
        def run(command, **kwargs):
            raw = (Path(kwargs["cwd"]) / command[-1]).read_bytes()
            obj = parse_object(raw)
            section = next(s for s in obj.sections if s.name == ".text")
            self.assertEqual(section.data, SYNTHETIC_CODE)
            self.assertEqual(obj.symbols[1].name, "fn_02001234")
            self.assertEqual(obj.symbols[1].value, 0)
            self.assertEqual(obj.symbols[1].size, 8)
            self.assertFalse(obj.relocations)
            self.assertIn("--adjust-vma=0x2001234", command)
            self.assertFalse(kwargs.get("shell", False))
            self.assertEqual(kwargs["timeout"], 15)
            return subprocess.CompletedProcess(command, 0, "synthetic output\n", "")

        with patch("botw_decomp.disassembly.locate", return_value="/llvm-objdump"), \
                patch("botw_decomp.disassembly.subprocess.run", side_effect=run):
            self.assertEqual(disassemble(SYNTHETIC_CODE, 0x02001234, "fn_02001234"),
                             "synthetic output\n")

    def test_overlay_preserves_original_columns_and_ordinary_rows(self):
        code = bytes.fromhex("e0230008100004844e800020")
        output = ("header\n"
                  " 2001000: e0 23 00 08  lq 1, 8(3)\n"
                  " 2001004: 10 00 04 84  vor 0, 0, 0\n"
                  " 2001008: 4e 80 00 20  blr\n")
        expected = ("header\n"
                    " 2001000: e0 23 00 08  psq_l f1, 8(r3), 0, 0\n"
                    " 2001004: 10 00 04 84  <unsupported Espresso opcode 4>\n"
                    " 2001008: 4e 80 00 20  blr\n")
        self.assertEqual(_overlay(output, code, 0x2001000), expected)

    def test_overlay_fails_closed_on_missing_mismatched_or_duplicate_rows(self):
        code = bytes.fromhex("e0230008")
        row = " 2001000: e0 23 00 08  unknown\n"
        for output in ("header\n", row.replace("e0 23", "e0 24"), row + row):
            with self.subTest(output=output), self.assertRaisesRegex(ValueError, "Espresso"):
                _overlay(output, code, 0x2001000)

    def test_real_llvm_espresso_overlay(self):
        try:
            locate()
        except ValueError as exc:
            self.skipTest(str(exc))
        result = disassemble(bytes.fromhex("e0230008f0230008100004844e800020"),
                             0x2001000, "example")
        self.assertRegex(result, r"2001000:\s+e0 23 00 08\s+psq_l f1, 8\(r3\), 0, 0")
        self.assertIn("psq_st f1, 8(r3), 0, 0", result)
        self.assertIn("<unsupported Espresso opcode 4>", result)
        self.assertNotIn("vor", result)
        self.assertRegex(result, r"200100c:\s+4e 80 00 20\s+blr")

    def test_reports_missing_llvm(self):
        with patch("botw_decomp.disassembly.shutil.which", return_value=None), \
                self.assertRaisesRegex(ValueError, "install LLVM"):
            disassemble(SYNTHETIC_CODE, 0, "example")

    def test_reports_failed_process_and_timeout(self):
        cases = [subprocess.TimeoutExpired("llvm-objdump", 15),
                 subprocess.CompletedProcess([], 1, "", "unsupported target"),
                 subprocess.CompletedProcess([], 0, "", "")]
        for result in cases:
            with self.subTest(result=result), \
                    patch("botw_decomp.disassembly.locate", return_value="/llvm-objdump"), \
                    patch("botw_decomp.disassembly.subprocess.run") as run:
                if isinstance(result, Exception):
                    run.side_effect = result
                else:
                    run.return_value = result
                with self.assertRaisesRegex(ValueError, "llvm-objdump"):
                    disassemble(SYNTHETIC_CODE, 0, "example")

    def test_rejects_invalid_spans_and_symbols_before_running_tools(self):
        cases = [(b"", 0, "example"), (b"abc", 0, "example"),
                 (SYNTHETIC_CODE, -4, "example"), (SYNTHETIC_CODE, 2, "example"),
                 (SYNTHETIC_CODE, 0xFFFFFFFC, "example"),
                 (SYNTHETIC_CODE, 0, "bad\nname"), (SYNTHETIC_CODE, 0, "")]
        with patch("botw_decomp.disassembly.locate") as find:
            for code, address, symbol in cases:
                with self.subTest(address=address, symbol=symbol), self.assertRaises(ValueError):
                    disassemble(code, address, symbol)
            find.assert_not_called()

    def test_real_llvm_decodes_synthetic_powerpc(self):
        try:
            locate()
        except ValueError as exc:
            self.skipTest(str(exc))
        result = disassemble(SYNTHETIC_CODE, 0x02001234, "fn_02001234")
        self.assertRegex(result, r"2001234\s+<fn_02001234>")
        self.assertRegex(result, r"2001234:\s+38 60 00 07\s+li\s+3, 7")
        self.assertRegex(result, r"2001238:\s+4e 80 00 20\s+blr")


if __name__ == "__main__":
    unittest.main()
