import base64
import struct
import unittest

from botw_decomp import permuter
from tests.test_elf import make_object

SOURCE = '''#include "botw/example.h"

namespace {
struct View {
    unsigned char prefix[44];
    const void* nested;
};
static_assert(sizeof(View) == 48, "layout");
}

extern "C" unsigned char fn_02470538(const void* context) {
    const View* view = static_cast<const View*>(context);
    return view->nested != 0 && fn_0314dbf0(reinterpret_cast<const char*>(view->nested)) != 0;
}

extern "C" void fn_02470580(void) {}
'''


class BridgeTests(unittest.TestCase):
    def test_finds_only_the_definition(self):
        text = 'extern "C" int fn_00000010(int);\n// fn_00000010(1) {\nextern "C" int fn_00000010(int a) { return a; }\n'
        start, brace, end = permuter.find_definition(text, "fn_00000010")
        self.assertEqual(text[start:brace], 'extern "C" int fn_00000010(int a) ')
        self.assertEqual(text[end - 1], "}")

    def test_definition_after_preprocessor_line(self):
        text = '#include "botw/x.h"\nint fn_00000010(void) { return 0; }'
        start, _, _ = permuter.find_definition(text, "fn_00000010")
        self.assertEqual(text[start:start + 3], "int")

    def test_rejects_missing_or_duplicate_definitions(self):
        with self.assertRaises(ValueError):
            permuter.find_definition("int fn_00000010(void);", "fn_00000010")
        with self.assertRaises(ValueError):
            permuter.find_definition("int fn_00000010(void) {}\nint fn_00000010(void) {}", "fn_00000010")

    def test_braces_in_literals_are_ignored(self):
        text = 'void fn_00000010(void) { const char* s = "}"; char c = \'{\'; /* } */ }'
        self.assertEqual(permuter.find_definition(text, "fn_00000010")[2], len(text))

    def test_nested_casts_become_c_casts(self):
        text = "static_cast<A*>(reinterpret_cast<const B<int>*>(f(x, y)))"
        self.assertEqual(permuter.casts_to_c(text), "((A*)(((const B<int>*)(f(x, y)))))")

    def test_shadow_drops_cpp_only_declarations(self):
        shadow = permuter.c_shadow(SOURCE.split("extern \"C\" unsigned char")[0])
        self.assertNotIn("namespace", shadow)
        self.assertNotIn("static_assert", shadow)
        self.assertIn("typedef struct View View;", shadow)

    def test_base_keeps_cpp_context_verbatim(self):
        expanded = SOURCE.replace('#include "botw/example.h"', 'extern "C" unsigned fn_0314dbf0(const void*);')
        bridge = permuter.build_base(expanded, "fn_02470538")
        self.assertEqual(bridge["prototype"], 'extern "C" unsigned char fn_02470538(const void* context);')
        self.assertIn("PERM_IGNORE(", bridge["base"])
        self.assertIn("namespace {", bridge["base"])
        self.assertIn("\nunsigned char fn_02470538(const void* context) {", bridge["base"])
        self.assertIn("((const View*)(context))", bridge["base"])
        self.assertIn("fn_02470580", bridge["epilogue"])

    def test_splice_restores_linkage_and_context(self):
        expanded = SOURCE.replace('#include "botw/example.h"', "")
        bridge = permuter.build_base(expanded, "fn_02470538")
        body = "unsigned char fn_02470538(const void *context)\n{\n  return 1;\n}\n"
        output = "typedef int pretend;\n" + expanded[:expanded.index("extern \"C\" unsigned char")] + \
            bridge["prototype"] + "\n" + body + bridge["epilogue"]
        result = permuter.splice(SOURCE, output, "fn_02470538", bridge["prototype"], bridge["epilogue"])
        self.assertTrue(result.startswith('#include "botw/example.h"'))
        self.assertIn('extern "C" unsigned char fn_02470538(const void *context)\n{\n  return 1;\n}', result)
        self.assertIn("static_assert", result)
        self.assertTrue(result.endswith('extern "C" void fn_02470580(void) {}\n'))

    def test_splice_requires_marker(self):
        with self.assertRaises(ValueError):
            permuter.splice(SOURCE, "int x;", "fn_02470538", "missing;", "")

    def test_decode_pragmas(self):
        encoded = base64.b64encode(b'extern "C" int a;').decode()
        self.assertEqual(permuter.decode_pragmas(f"x\n#pragma _permuter b64literal {encoded}\ny"),
                         'x\nextern "C" int a;\ny')


class ScoringTests(unittest.TestCase):
    def test_resolves_bound_call_and_keeps_unknown_zero(self):
        code = bytes.fromhex("48000001" "3c600000" "4e800020")
        obj = make_object(code, relocations=[(0, 10, "callee", 0), (6, 6, "unknown", 0)],
                          extra_symbols=[("callee", 0, 0, 0x10, 0, "undef"),
                                         ("unknown", 0, 0, 0x10, 0, "undef")])
        resolved = permuter.resolve_for_score(obj, "target", 0x02000000, {"callee": 0x02000100})
        self.assertEqual(struct.unpack(">I", resolved[:4])[0], 0x48000101)
        self.assertEqual(resolved[4:], code[4:])

    def test_accepts_any_size(self):
        code = bytes.fromhex("38600007" "60000000" "4e800020")
        self.assertEqual(permuter.resolve_for_score(make_object(code), "target", 0x02000000, {}), code)

    def test_objdump_rows(self):
        text = ("\nfunction.o:\tfile format elf32-powerpc\n\n"
                " 2470538: 7c 08 02 a6  \tmflr r0\n"
                " 247053c: 94 21 ff f0  \tstwu r1, -16(r1)\n"
                " 2470554: 41 82 00 14  \tbt\teq, 0x2470568 <fn_02470538+0x30>; branch if cr0.eq is set\n"
                " 2470558: 10 00 00 00  \t<unknown>\n")
        rows = permuter.objdump_rows(text).splitlines()
        self.assertEqual(rows[1], "2470538:\t7c 08 02 a6\tmflr\tr0")
        self.assertEqual(rows[2], "247053c:\t94 21 ff f0\tstwu\tr1,-16(r1)")
        self.assertEqual(rows[3], "2470554:\t41 82 00 14\tbeq\t0x2470568 <fn_02470538+0x30>")
        self.assertEqual(rows[4], "2470558:\t10 00 00 00\t.long\t0x10000000")

    def test_status(self):
        log = "[fn] base score = 60\n\riteration 1, 0 errors, score = 60\riteration 12, 3 errors, score = inf"
        self.assertEqual(permuter.status(log), {"base_score": 60, "iterations": 12, "errors": 3})
        self.assertEqual(permuter.status("")["base_score"], None)


if __name__ == "__main__":
    unittest.main()
