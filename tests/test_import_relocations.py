import hashlib
import json
import struct
import tempfile
import unittest
from pathlib import Path

from botw_decomp.import_relocations import IMPORT_PROFILE, MIXED_PROFILE
from botw_decomp.matching import compare_function, compare_function_hash
from botw_decomp.project import functions
from botw_decomp.rpx import DATA_PROFILE, RpxError, parse, reference_bytes
from tests.test_data_relocations import BSS, RODATA, START, make_cafe
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


class MixedProfileTests(unittest.TestCase):
    data_symbol = f"data_{BSS:08x}"
    data_field = {"offset": 2, "type": 4, "symbol": data_symbol}
    import_field = {**IMPORT, "offset": 4}
    row = {**ROW, "size": 12, "original_profile": MIXED_PROFILE,
           "data_bindings": {data_symbol: f"0x{BSS:08x}"}, "data_relocations": [data_field],
           "import_relocations": [import_field]}
    code = struct.pack(">I", 0x38800000 | BSS) + branch(START + 4, THUNK) + RETURN
    fields = [(START + 2, 4, "zero", 0), (START + 4, 10, "copy", 0)]

    def test_original_and_compiled_mixed_fields_are_both_verified(self):
        image = fixture(self.code, self.fields)
        raw = reference_bytes(image, self.row)
        self.assertEqual(raw, self.code)
        self.assertEqual(image.read(START, 12, profile=MIXED_PROFILE), self.code)
        obj = make_object(bytes.fromhex("38800000480000014e800020"),
                          extra_symbols=[(self.data_symbol, 0, 0, 0x11, 0, "undef"),
                                         (SYMBOL, 0, 0, 0x12, 0, "undef")],
                          relocations=[(2, 4, self.data_symbol, 0), (4, 10, SYMBOL, 0)])
        metadata = dict(data_bindings={self.data_symbol: BSS},
                        data_relocations=[self.data_field], import_relocations=[self.import_field])
        self.assertTrue(compare_function(obj, "target", raw, START, BINDING, **metadata)["matched"])
        digest = hashlib.sha256(raw).hexdigest()
        self.assertTrue(compare_function_hash(obj, "target", digest, 12, START, BINDING,
                                              **metadata)["matched"])
        for symbol, offset, kind in [(self.data_symbol, 2, 4), (SYMBOL, 4, 10)]:
            missing = make_object(raw, extra_symbols=[(symbol, 0, 0, 0x10, 0, "undef")],
                                  relocations=[(offset, kind, symbol, 0)])
            self.assertEqual(compare_function_hash(missing, "target", digest, 12, START,
                                                   BINDING, **metadata)["status"], "rejected")

    def test_manifest_requires_disjoint_nonempty_contracts(self):
        function = f"fn_{START:08x}"
        row = {**self.row, "address": f"0x{START:08x}", "id": function,
               "source": f"reconstructions/{function}.cpp", "status": "unmatched",
               "symbol": function, "sha256": hashlib.sha256(self.code).hexdigest()}
        with tempfile.TemporaryDirectory() as temporary:
            config = Path(temporary) / "config"
            config.mkdir()

            def load(entry):
                (config / "functions.json").write_text(
                    json.dumps({"schema_version": 1, "functions": [entry]}))
                return functions(config.parent)

            self.assertEqual(load(row), {function: row})
            for fields, reason in [
                ({"data_bindings": {}, "data_relocations": []}, "missing data"),
                ({"import_relocations": []}, "missing import"),
                ({"data_relocations": [{**self.data_field, "offset": 6}]}, "overlapping"),
            ]:
                with self.subTest(fields=fields), self.assertRaisesRegex(ValueError, reason):
                    load({**row, **fields})

    def test_rejects_incomplete_or_incorrect_original_metadata(self):
        image = fixture(self.code, self.fields)
        for row in [{**self.row, "data_bindings": {}, "data_relocations": []},
                    {**self.row, "import_relocations": []},
                    {**self.row, "import_relocations": [{**self.import_field, "name": "clear"}]}]:
            with self.subTest(row=row), self.assertRaisesRegex(RpxError, "contract disagrees"):
                reference_bytes(image, row)
        with self.assertRaisesRegex(RpxError, "link-address value"):
            fixture(bytes(4) + self.code[4:], self.fields).read(START, 12, profile=MIXED_PROFILE)
        with self.assertRaisesRegex(RpxError, "unsupported"):
            fixture(self.code, [*self.fields, (START + 8, 26, "zero", 0)]).read(
                START, 12, profile=MIXED_PROFILE)
        with self.assertRaisesRegex(RpxError, "requires original data and import relocations"):
            fixture(self.code, self.fields[1:]).read(START, 12, profile=MIXED_PROFILE)

    def test_original_boundary_cannot_split_either_field(self):
        image = fixture(self.code, self.fields)
        with self.assertRaisesRegex(RpxError, "crosses a function boundary"):
            image.read(START + 3, 9, profile=MIXED_PROFILE)
        with self.assertRaisesRegex(RpxError, "crosses a function boundary"):
            image.read(START, 7, profile=MIXED_PROFILE)

    def test_checks_data_between_and_after_imports(self):
        code = self.code[:8] + self.code[:4] + branch(START + 12, THUNK) + self.code[:4] + RETURN
        image = fixture(code, [*self.fields, (START + 10, 4, "zero", 0),
                               (START + 12, 10, "copy", 0), (START + 18, 4, "zero", 0)])
        row = {**self.row, "size": len(code),
               "data_relocations": [self.data_field, {**self.data_field, "offset": 10},
                                    {**self.data_field, "offset": 18}],
               "import_relocations": [self.import_field, {**self.import_field, "offset": 12}]}
        self.assertEqual(reference_bytes(image, row), code)
        for profile in (DATA_PROFILE, IMPORT_PROFILE):
            with self.subTest(profile=profile), self.assertRaisesRegex(RpxError, "unsupported"):
                image.read(START, len(code), profile=profile)
