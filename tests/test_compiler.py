import os
from pathlib import Path
import tempfile
import unittest

from botw_decomp.compiler import check_text, compile_source, flags, locate, profiles


class CompilerProfileTests(unittest.TestCase):
    def test_nopeephole_requires_an_explicit_profile(self):
        profile = "ghs-5.3.22-speed-nopeephole"
        self.assertEqual(profiles({"compiler_profile": profile}), [profile])
        self.assertEqual(flags(profile), ["-Ospeed", "-Onopeephole", "-bigendian", "--no_exceptions", "--no_rtti"])
        self.assertNotIn(profile, profiles({"compiler_profile": "ghs-5.3.22-auto"}))


    def test_single_exit_requires_an_explicit_profile(self):
        profile = "ghs-5.3.22-speed-single-exit"
        self.assertEqual(profiles({"compiler_profile": profile}), [profile])
        self.assertEqual(flags(profile), ["-Ospeed", "-Xsingle_exit_from_routine",
                                         "-bigendian", "--no_exceptions", "--no_rtti"])
        self.assertNotIn(profile, profiles({"compiler_profile": "ghs-5.3.22-auto"}))


class SourcePolicyTests(unittest.TestCase):
    def test_normal_source_and_literal_project_header(self):
        check_text('#include "botw/vector.h"\nextern "C" int f(int x) { return x + 1; }')

    def test_hidden_include_and_assembly_rejected(self):
        for source in ['#/**/include "/etc/passwd"', '#inc\\\nlude <vector>',
                       '#include "botw/../outside.h"', 'void f() { __as\\\nm__("blr"); }',
                       '#pragma GCC optimize("O0")', '#include HEADER']:
            with self.subTest(source=source), self.assertRaises(ValueError):
                check_text(source)

    def test_comments_do_not_trigger_policy(self):
        check_text('// asm may appear in a comment\n/* #include <vector> */\nint x;')

    def test_macro_generated_assembly_rejected_after_preprocessing(self):
        try:
            cxx = locate(os.environ.get("BOTW_CXX"))
        except ValueError:
            self.skipTest("Clang not installed")
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source = root / 'candidate.cpp'
            source.write_text('#define CAT(a,b) a##b\nextern "C" void f() { CAT(__as,m__)("blr"); }\n')
            with self.assertRaisesRegex(ValueError, "assembly"):
                compile_source(cxx, source, root / 'include')
