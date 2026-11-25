"""Synthetic coverage for original Cafe code-address relocations."""

import hashlib
import json
from pathlib import Path
import struct
import sys
import tempfile
import unittest

from botw_decomp.code_relocations import (CODE_IMPORT_PROFILE, CODE_PROFILE, DATA_CODE_IMPORT_PROFILE,
                                          DATA_CODE_PROFILE, code_contract, profile_name)
from botw_decomp.inventory import discover
from botw_decomp.matching import compare_function, compare_function_hash
from botw_decomp.project import functions, write_manifest
from botw_decomp.rpx import DATA_PROFILE, RpxError, parse, reference_bytes
from tests.test_data_relocations import BSS, START, encode_original, make_cafe
from tests.test_elf import make_object
from tests.test_import_relocations import THUNK, branch, fixture

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import admit_references as admit  # noqa: E402


LIS_R3, ADDI_R3, LIS_R4, LWZ_R4 = 0x3C600000, 0x38630000, 0x3C800000, 0x80840000
LI, BLR, BCTR = 0x38600007, 0x4E800020, 0x4E800420
TARGET = START + 12
NAME = f"fn_{TARGET:08x}"
SECTION_SYMBOL = {"textsec": (START, 0, 0x03, "text")}
FIELDS = [{"offset": 2, "type": 6, "symbol": NAME}, {"offset": 6, "type": 4, "symbol": NAME}]
ROW = {"address": f"0x{START:08x}", "size": 12, "original_profile": CODE_PROFILE,
       "bindings": {NAME: f"0x{TARGET:08x}"}, "code_relocations": FIELDS}
FAR = START + 0x20
FAR_NAME = f"fn_{FAR:08x}"
FAR_ROW = {**ROW, "bindings": {FAR_NAME: f"0x{FAR:08x}"},
           "code_relocations": [{**item, "symbol": FAR_NAME} for item in FIELDS]}


def code(*words):
    return b"".join(struct.pack(">I", word) for word in words)


def pointer(destination, site=START, anchor="textsec", base=START):
    return [(site + 2, 6, anchor, destination - base, base), (site + 6, 4, anchor, destination - base, base)]


def image(words, destination=TARGET, *, site=START, specs=(), symbols=None, **options):
    specs = [*pointer(destination, site), *specs]
    text = encode_original(specs, code(*words))
    return parse(make_cafe(text=text, relocations=[item[:4] for item in specs],
                           symbols={**SECTION_SYMBOL, **(symbols or {})}, **options))


def call(site, target):
    return 0x48000001 | ((target - site) & 0x03FFFFFC)


class CodeProfileTests(unittest.TestCase):
    def test_pointer_to_following_function_is_verified_and_preserved(self):
        rpx = image([LIS_R3, ADDI_R3, BLR, LI, BLR])
        data, imports, fields = rpx.references(START, 12, CODE_PROFILE)
        self.assertEqual((data, imports), ((), ()))
        self.assertEqual(fields, ({"site": START + 2, "type": 6, "destination": TARGET},
                                  {"site": START + 6, "type": 4, "destination": TARGET}))
        self.assertEqual(reference_bytes(rpx, ROW), rpx.read(START, 12, profile=CODE_PROFILE))
        with self.assertRaisesRegex(RpxError, "canonicalisation"):
            rpx.read(START, 12)
        with self.assertRaises(RpxError):
            rpx.read(START, 12, profile=DATA_PROFILE)

    def test_code_segment_section_symbol_anchors(self):
        syscall = 0x0800
        specs = pointer(TARGET, anchor="sys", base=syscall)
        text = encode_original([(site, kind, name, addend, base) for site, kind, name, addend, base in specs],
                               code(LIS_R3, ADDI_R3, BLR, LI, BLR))
        rpx = parse(make_cafe(text=text, relocations=[item[:4] for item in specs],
                              symbols={"sys": (syscall, 0, 0x03, "rodata")}, rodata_name=".syscall",
                              rodata_flags=6, rodata_address=syscall, rodata=bytes(8)))
        self.assertEqual(reference_bytes(rpx, ROW), text[:12])

    def test_entry_evidence_accepts_rpx_entry_and_direct_calls(self):
        rpx = image([LI, BLR, LIS_R3, ADDI_R3, BLR], START, site=START + 8)
        self.assertEqual(len(rpx.references(START + 8, 12, CODE_PROFILE)[2]), 2)
        after_bctr = [LIS_R3, ADDI_R3, BCTR, LI, BLR]
        with self.assertRaisesRegex(RpxError, "function-entry evidence"):
            image(after_bctr).references(START, 12, CODE_PROFILE)
        called = image([*after_bctr, call(START + 20, TARGET), BLR])
        self.assertEqual(len(called.references(START, 12, CODE_PROFILE)[2]), 2)

    def test_mid_function_and_malformed_destinations_reject(self):
        words = [LIS_R3, ADDI_R3, BLR, LI, BLR, 0x4182FFF8]
        cases = {
            "after a non-terminal": (TARGET + 4, "function-entry evidence", {}),
            "conditional branch target": (TARGET, "function-entry evidence", {}),
            "inside the referencing span": (START + 4, "inside the referencing function", {}),
            "misaligned addend": (TARGET + 2, "aligned", {}),
            "outside executable text": (0x2000, "aligned", {}),
        }
        for label, (destination, reason, options) in cases.items():
            with self.subTest(case=label), self.assertRaisesRegex(RpxError, reason):
                used = words if label == "conditional branch target" else words[:5]
                image(used, destination, **options).references(START, 12, CODE_PROFILE)

    def test_anchor_and_field_must_be_exact(self):
        for symbol in [(START, 0, 0x11, "text"), (START + 4, 0, 0x03, "text"), (START, 4, 0x03, "text")]:
            with self.subTest(symbol=symbol), self.assertRaisesRegex(RpxError, "code symbol disagrees"):
                specs = pointer(TARGET)
                text = encode_original(specs, code(LIS_R3, ADDI_R3, BLR, LI, BLR))
                parse(make_cafe(text=text, relocations=[item[:4] for item in specs],
                                symbols={"textsec": symbol})).references(START, 12, CODE_PROFILE)
        specs = pointer(TARGET)
        mutated = bytearray(encode_original(specs, code(LIS_R3, ADDI_R3, BLR, LI, BLR)))
        mutated[7] ^= 4
        rpx = parse(make_cafe(text=bytes(mutated), relocations=[item[:4] for item in specs],
                              symbols=SECTION_SYMBOL))
        with self.assertRaisesRegex(RpxError, "link-address value"):
            rpx.references(START, 12, CODE_PROFILE)

    def test_trusted_contract_pins_every_field(self):
        rpx = image([LIS_R3, ADDI_R3, BLR, LI, BLR])
        other = f"fn_{TARGET + 4:08x}"
        variants = [
            {"code_relocations": FIELDS[:1]},
            {"code_relocations": [{**FIELDS[0], "type": 5}, FIELDS[1]]},
            {"code_relocations": [FIELDS[0], {**FIELDS[1], "offset": 10}]},
            {"code_relocations": [*FIELDS, {"offset": 8, "type": 1, "symbol": NAME}]},
            {"bindings": {other: f"0x{TARGET + 4:08x}"},
             "code_relocations": [{**item, "symbol": other} for item in FIELDS]},
            {"bindings": {}},
            {"bindings": {NAME: f"0x{TARGET + 4:08x}"}},
            {"original_profile": DATA_PROFILE, "data_relocations": [], "data_bindings": {}},
            {"original_profile": "unrelocated"},
        ]
        for changed in variants:
            with self.subTest(changed=changed), self.assertRaises(ValueError):
                reference_bytes(rpx, {**ROW, **changed})

    def test_contract_schema(self):
        bindings = {NAME: TARGET}
        self.assertEqual(code_contract(12, bindings, FIELDS),
                         ((2, 6, NAME, TARGET), (6, 4, NAME, TARGET)))
        for fields in ([{**FIELDS[0], "offset": 3}], [{**FIELDS[0], "offset": 11}],
                       [FIELDS[0], {**FIELDS[1], "offset": 2}], [{**FIELDS[0], "type": 10}],
                       [{**FIELDS[0], "symbol": "data_00001014"}], [{**FIELDS[0], "extra": 1}]):
            with self.subTest(fields=fields), self.assertRaises(ValueError):
                code_contract(12, bindings, fields)
        with self.assertRaises(ValueError):
            code_contract(12, {"fn_00001016": 0x1016}, [{**FIELDS[0], "symbol": "fn_00001016"}])
        self.assertEqual(profile_name({"data", "code", "import"}), DATA_CODE_IMPORT_PROFILE)
        self.assertEqual(profile_name(()), "unrelocated")


class CodeMatchingTests(unittest.TestCase):
    original = encode_original(pointer(TARGET), code(LIS_R3, ADDI_R3, BLR))
    bindings = {NAME: TARGET}

    def compiled(self, symbol=NAME, addend=0, kinds=(6, 4)):
        return make_object(code(LIS_R3, ADDI_R3, BLR), extra_symbols=[(symbol, 0, 0, 0x12, 0, "undef")],
                           relocations=[(2, kinds[0], symbol, addend), (6, kinds[1], symbol, addend)])

    def test_address_of_bound_function_matches_on_both_paths(self):
        obj = self.compiled()
        self.assertTrue(compare_function(obj, "target", self.original, START, self.bindings,
                                         code_relocations=FIELDS)["matched"])
        digest = hashlib.sha256(self.original).hexdigest()
        self.assertTrue(compare_function_hash(obj, "target", digest, 12, START, self.bindings,
                                              code_relocations=FIELDS)["matched"])

    def test_numeric_literal_and_wrong_dependencies_reject(self):
        literal = make_object(self.original)
        other = f"fn_{TARGET + 4:08x}"
        cases = {
            "numeric literal": (literal, self.bindings, FIELDS),
            "missing contract": (self.compiled(), self.bindings, None),
            "addend into the function": (self.compiled(addend=4), self.bindings, FIELDS),
            "other function": (self.compiled(other), {**self.bindings, other: TARGET + 4}, FIELDS),
            "same bytes, other field type": (self.compiled(kinds=(5, 4)), self.bindings, FIELDS),
        }
        for label, (obj, bindings, fields) in cases.items():
            with self.subTest(case=label):
                result = compare_function(obj, "target", self.original, START, bindings,
                                          code_relocations=fields)
                self.assertEqual(result["status"], "rejected", result)
                self.assertIn("code-address relocations disagree", result["reason"])


class CodeCombinationTests(unittest.TestCase):
    def test_discovery_emits_each_component_combination(self):
        data = f"data_{BSS + 4:08x}"
        # F at the RPX entry: [import call] pointer load [data load] blr; T follows F.
        for imports, loads, profile in [(False, False, CODE_PROFILE), (False, True, DATA_CODE_PROFILE),
                                        (True, False, CODE_IMPORT_PROFILE),
                                        (True, True, DATA_CODE_IMPORT_PROFILE)]:
            with self.subTest(profile=profile):
                words = [*([0] if imports else []), LIS_R3, ADDI_R3,
                         *([LIS_R4, LWZ_R4] if loads else []), BLR]
                size = 4 * len(words)
                target = START + size
                site = START + (4 if imports else 0)
                specs = pointer(target, site)
                if loads:
                    specs += [(site + 10, 6, "zero", 4, BSS), (site + 14, 4, "zero", 4, BSS)]
                text = encode_original(specs, code(*words, LI, BLR))
                relocations = [item[:4] for item in specs]
                if imports:
                    text = branch(START, THUNK) + text[4:]
                    relocations.append((START, 10, "copy", 0))
                rpx = fixture(text, relocations, symbols={
                    "copy": (0x2008, 0, 0x12, "rodata"), "zero": (BSS, 0, 0x11, "bss"), **SECTION_SYMBOL})
                self.assertEqual(discover(rpx), [])
                row, = discover(rpx, original_relocations=True)
                name = f"fn_{target:08x}"
                self.assertEqual((row["original_profile"], row["size"]), (profile, size))
                self.assertEqual(row["code_relocations"], [
                    {"offset": site - START + 2, "symbol": name, "type": 6},
                    {"offset": site - START + 6, "symbol": name, "type": 4}])
                self.assertEqual(row["bindings"][name], f"0x{target:08x}")
                self.assertEqual(bool(row.get("import_relocations")), imports)
                self.assertEqual(list(row.get("data_bindings", {})), [data] if loads else [])
                self.assertEqual(reference_bytes(rpx, row), text[:size])
                self.assertEqual(row["sha256"], hashlib.sha256(text[:size]).hexdigest())
                for other in (CODE_PROFILE, DATA_CODE_PROFILE, CODE_IMPORT_PROFILE, DATA_CODE_IMPORT_PROFILE):
                    if other != profile:
                        with self.assertRaises(RpxError):
                            reference_bytes(rpx, {**row, "original_profile": other})

    def test_destination_without_entry_evidence_is_not_discovered(self):
        rpx = image([LIS_R3, ADDI_R3, BLR, LI, BLR], TARGET + 4)
        self.assertEqual(discover(rpx, original_relocations=True), [])

    def test_compiled_combination_checks_data_and_code_fields(self):
        data = f"data_{BSS + 4:08x}"
        specs = [*pointer(START + 20), (START + 10, 6, "zero", 4, BSS), (START + 14, 4, "zero", 4, BSS)]
        original = encode_original(specs, code(LIS_R3, ADDI_R3, LIS_R4, LWZ_R4, BLR))
        obj = make_object(code(LIS_R3, ADDI_R3, LIS_R4, LWZ_R4, BLR),
                          extra_symbols=[("fn_00001014", 0, 0, 0x12, 0, "undef"), (data, 0, 0, 0x11, 0, "undef")],
                          relocations=[(2, 6, "fn_00001014", 0), (6, 4, "fn_00001014", 0),
                                       (10, 6, data, 0), (14, 4, data, 0)])
        metadata = dict(data_bindings={data: BSS + 4},
                        data_relocations=[{"offset": 10, "type": 6, "symbol": data},
                                          {"offset": 14, "type": 4, "symbol": data}])
        bindings = {"fn_00001014": START + 20}
        fields = [{"offset": 2, "type": 6, "symbol": "fn_00001014"},
                  {"offset": 6, "type": 4, "symbol": "fn_00001014"}]
        self.assertTrue(compare_function(obj, "target", original, START, bindings,
                                         code_relocations=fields, **metadata)["matched"])
        self.assertEqual(compare_function(obj, "target", original, START, bindings,
                                          **metadata)["status"], "rejected")


class CodeManifestTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        (self.root / "config").mkdir()
        key = f"fn_{START:08x}"
        self.row = {**FAR_ROW, "id": key, "symbol": key, "sha256": "0" * 64,
                    "source": f"reconstructions/{key}.cpp", "status": "unmatched"}

    def load(self, *rows):
        write_manifest(self.root, {"schema_version": 1, "functions": list(rows)})
        return functions(self.root)

    def other(self, address, size):
        key = f"fn_{address:08x}"
        return {"id": key, "symbol": key, "address": f"0x{address:08x}", "size": size, "sha256": "0" * 64,
                "source": f"reconstructions/{key}.cpp", "status": "unmatched"}

    def test_valid_rows_and_entry_destination(self):
        self.assertEqual(self.load(self.row, self.other(FAR, 8))[self.row["id"]]["code_relocations"],
                         FAR_ROW["code_relocations"])

    def test_invalid_rows_reject(self):
        data = {"data_bindings": {"data_00002000": "0x00002000"},
                "data_relocations": [{"offset": 6, "type": 4, "symbol": "data_00002000"}]}
        for rows in [
            [{**self.row, "original_profile": DATA_PROFILE, **data}],
            [{key: value for key, value in self.row.items() if key != "code_relocations"}],
            [{**self.row, "code_relocations": []}],
            [{**self.row, "bindings": {}}],
            [{**self.row, "original_profile": DATA_CODE_PROFILE, **data}],
            [self.row, self.other(FAR - 4, 8)],
        ]:
            with self.subTest(rows=rows), self.assertRaises(ValueError):
                self.load(*rows)


class CodeAdmissionTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        (self.root / "config").mkdir()
        (self.root / "config/target.json").write_text(json.dumps({"rpx_sha256": "f" * 64}))
        (self.root / "config/batches.json").write_text(json.dumps({"schema_version": 1, "batches": []}))
        key = f"fn_{START:08x}"
        self.row = {**FAR_ROW, "id": key, "symbol": key, "sha256": "a" * 64, "boundary": "entry",
                    "category": "integer", "source": f"reconstructions/{key}.cpp", "status": "unmatched"}

    def candidate(self, address, size):
        key = f"fn_{address:08x}"
        return {"id": key, "symbol": key, "address": f"0x{address:08x}", "size": size, "sha256": "a" * 64,
                "source": f"reconstructions/{key}.cpp", "status": "unmatched", "bindings": {},
                "boundary": "entry", "category": "integer"}

    def test_code_rows_are_admitted_and_destinations_stay_entries(self):
        write_manifest(self.root, {"schema_version": 1, "functions": [self.candidate(0x3000, 8)]})
        inventory = {"rpx_sha256": "f" * 64,
                     "functions": [self.row, self.candidate(FAR - 4, 8), self.candidate(FAR, 8)]}
        self.assertEqual(admit.admit(self.root, inventory, "discovered-test"), [self.row["id"], FAR_NAME])
        self.assertEqual(functions(self.root)[self.row["id"]]["code_relocations"],
                         FAR_ROW["code_relocations"])

    def test_destination_inside_an_existing_body_is_skipped(self):
        write_manifest(self.root, {"schema_version": 1, "functions": [self.candidate(FAR - 4, 8)]})
        inventory = {"rpx_sha256": "f" * 64, "functions": [self.row]}
        self.assertEqual(admit.admit(self.root, inventory, "discovered-test"), [])


if __name__ == "__main__":
    unittest.main()
