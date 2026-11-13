from pathlib import Path
import subprocess
import unittest
from unittest.mock import patch

from botw_decomp.disassembly import disassemble, locate
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
