from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import compiler as compiler_module
from botw_decomp.compiler import compile_sources


class CompileSourcesTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.include = self.root / "include"
        self.include.mkdir()

    def source(self, name, text):
        path = self.root / name
        path.write_text(text, encoding="utf-8")
        return path

    def test_combines_sources_in_caller_order_and_cleans_temporary_file(self):
        first = self.source("first.cpp", '// first at EOF')
        second = self.source("second.cpp", 'int second() { return 2; }')
        observed = {}

        def compile_one(compiler, source, include, profile):
            observed.update(path=source, text=source.read_text(encoding="utf-8"),
                            compiler=compiler, include=include, profile=profile)
            return b"object"

        with patch.object(compiler_module, "compile_source", side_effect=compile_one) as mocked:
            result = compile_sources("cc", [first, second], self.include, "ghs-profile")

        self.assertEqual(result, b"object")
        self.assertEqual(observed["text"], '// first at EOF\n\nint second() { return 2; }')
        self.assertEqual((observed["compiler"], observed["include"], observed["profile"]),
                         ("cc", self.include, "ghs-profile"))
        mocked.assert_called_once()
        self.assertFalse(observed["path"].exists())

    def test_rejects_policy_violation_in_later_source_before_compiler(self):
        first = self.source("first.cpp", "int first;\n")
        second = self.source("second.cpp", 'void bad() { asm("blr"); }\n')
        with patch.object(compiler_module, "compile_source") as mocked:
            with self.assertRaisesRegex(ValueError, "assembly"):
                compile_sources("cc", [first, second], self.include)
        mocked.assert_not_called()

    def test_rejects_empty_too_many_duplicate_and_symlink_sources(self):
        one = self.source("one.cpp", "int one;\n")
        with patch.object(compiler_module, "compile_source") as mocked:
            with self.assertRaisesRegex(ValueError, "at least one"):
                compile_sources("cc", [], self.include)
            with self.assertRaisesRegex(ValueError, "at most 8"):
                compile_sources("cc", [one] * 9, self.include)
            with self.assertRaisesRegex(ValueError, "duplicate"):
                compile_sources("cc", [one, one.parent / "." / one.name], self.include)
            link = self.root / "alias.cpp"
            link.symlink_to(one)
            with self.assertRaisesRegex(ValueError, "duplicate"):
                compile_sources("cc", [one, link], self.include)
            with self.assertRaisesRegex(ValueError, "regular file"):
                compile_sources("cc", [link, self.source("third.cpp", "int third;\n")],
                                self.include)
        mocked.assert_not_called()

    def test_rejects_combined_size_over_limit_before_compiler(self):
        first = self.source("first.cpp", "a" * (128 * 1024))
        second = self.source("second.cpp", "b" * (128 * 1024 + 1))
        with patch.object(compiler_module, "compile_source") as mocked:
            with self.assertRaisesRegex(ValueError, "combined source"):
                compile_sources("cc", [first, second], self.include)
        mocked.assert_not_called()

    def test_cleans_temporary_directory_when_compile_fails(self):
        first = self.source("first.cpp", "int first;\n")
        second = self.source("second.cpp", "int second;\n")
        observed = {}

        def fail(compiler, source, include, profile):
            observed["path"] = source
            raise RuntimeError("compiler failed")

        with patch.object(compiler_module, "compile_source", side_effect=fail):
            with self.assertRaisesRegex(RuntimeError, "compiler failed"):
                compile_sources("cc", [first, second], self.include)
        self.assertFalse(observed["path"].exists())

    def test_single_source_delegates_original_path_and_profile_unchanged(self):
        source = self.source("single.cpp", "int single;\n")
        with patch.object(compiler_module, "compile_source", return_value=b"single") as mocked:
            self.assertEqual(compile_sources("custom-cc", [source], self.include, "clang-ppc"), b"single")
        mocked.assert_called_once_with("custom-cc", source, self.include, "clang-ppc")


if __name__ == "__main__":
    unittest.main()
