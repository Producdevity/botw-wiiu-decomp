import hashlib
import struct
import unittest

from botw_decomp.import_relocations import IMPORT_PROFILE
from botw_decomp.matching import compare_function, compare_function_hash
from botw_decomp.rpx import RpxError, parse, reference_bytes
from tests.test_data_relocations import RODATA, START, make_cafe
from tests.test_elf import make_object


THUNK = START + 0x80
SYMBOL = f"fn_{THUNK:08x}"
IMPORT = {"offset": 0, "symbol": SYMBOL, "library": "coreinit", "name": "copy"}
BINDING = {SYMBOL: THUNK}
ROW = {"address": hex(START), "size": 8, "original_profile": IMPORT_PROFILE,
       "bindings": {SYMBOL: hex(THUNK)}, "import_relocations": [IMPORT]}
RETURN = bytes.fromhex("4e800020")


def branch(site, target, *, link=True):
    return struct.pack(">I", 0x48000000 | ((target - site) & 0x03FFFFFC) | link)


def fixture(code, relocs, **options):
    fields = {"symbols": {"copy": (RODATA + 8, 0, 0x12, "rodata"),
                          "clear": (RODATA + 12, 0, 0x12, "rodata")},
              "rodata_name": ".fimport_coreinit", "rodata_kind": 0x80000002,
              "rodata_flags": 6, **options}
    return parse(make_cafe(text=code, relocations=relocs, **fields))


class ImportProfileTests(unittest.TestCase):
    def test_linked_import_preserves_all_raw_bytes(self):
        for link in (False, True):
            code = branch(START, THUNK, link=link) + RETURN
            image = fixture(code, [(START, 10, "copy", 0)])
            self.assertEqual(reference_bytes(image, ROW), code)
            with self.assertRaisesRegex(RpxError, "verified canonicalisation"):
                image.read(START, 8)

    def test_import_metadata_must_match(self):
        code = branch(START, THUNK) + RETURN
        image = fixture(code, [(START, 10, "copy", 0)])
        for changed in [{"name": "clear"}, {"library": "other"}, {"offset": 4}]:
            with self.subTest(changed=changed), self.assertRaisesRegex(RpxError, "contract disagrees"):
                reference_bytes(image, {**ROW, "import_relocations": [{**IMPORT, **changed}]})
        with self.assertRaisesRegex(RpxError, "contract disagrees"):
            reference_bytes(image, {**ROW, "import_relocations": []})

    def test_unresolved_malformed_or_non_import_branches_reject(self):
        for code, relocs, options in [
            (branch(START, START) + RETURN, [(START, 10, "copy", 0)], {}),
            (branch(START, THUNK) + RETURN, [(START, 10, "copy", 4)], {}),
            (branch(START, THUNK) + RETURN, [(START, 10, "copy", 0)], {"rodata_kind": 1}),
            (bytes.fromhex("480000834e800020"), [(START, 10, "copy", 0)], {}),
            (branch(START, THUNK) + RETURN, [(START, 1, "copy", 0)], {}),
        ]:
            with self.subTest(code=code, options=options), self.assertRaisesRegex(RpxError, "unsupported"):
                reference_bytes(fixture(code, relocs, **options), ROW)

    def test_colliding_stub_mappings_reject(self):
        first = branch(START, THUNK) + RETURN
        for target, name in [(THUNK, "clear"), (THUNK + 8, "copy")]:
            other = branch(START + 8, target) + RETURN
            relocs = [(START, 10, "copy", 0), (START + 8, 10, name, 0)]
            with self.subTest(target=target, name=name), self.assertRaisesRegex(RpxError, "ambiguous"):
                reference_bytes(fixture(first + other, relocs), ROW)

    def test_compiled_import_relocation_is_required_on_both_check_paths(self):
        expected = branch(START, THUNK) + RETURN
        symbols = [(SYMBOL, 0, 0, 0x12, 0, "undef")]
        matched = make_object(branch(START, START) + RETURN, extra_symbols=symbols,
                              relocations=[(0, 10, SYMBOL, 0)])
        self.assertTrue(compare_function(matched, "target", expected, START, BINDING,
                                         import_relocations=[IMPORT])["matched"])
        self.assertTrue(compare_function_hash(matched, "target", hashlib.sha256(expected).hexdigest(),
                                              8, START, BINDING, import_relocations=[IMPORT])["matched"])
        missing = make_object(expected)
        self.assertEqual(compare_function(missing, "target", expected, START, BINDING,
                                          import_relocations=[IMPORT])["status"], "rejected")

    def test_compiled_addend_is_checked_independently_of_bytes(self):
        obj = make_object(branch(START, START) + RETURN,
                          extra_symbols=[(SYMBOL, 0, 0, 0x12, 0, "undef")],
                          relocations=[(0, 10, SYMBOL, 4)])
        expected = branch(START, THUNK + 4) + RETURN
        result = compare_function(obj, "target", expected, START, BINDING,
                                  import_relocations=[IMPORT])
        self.assertEqual(result["status"], "rejected")
