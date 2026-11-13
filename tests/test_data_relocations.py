"""Synthetic coverage for original Cafe data-address relocations."""

import hashlib
import json
import struct
import tempfile
import unittest
from pathlib import Path

from botw_decomp.elf import parse_object
from botw_decomp.matching import compare_function, compare_function_hash
from botw_decomp.project import functions
from botw_decomp.rpx import DATA_PROFILE, RpxError, parse, reference_bytes
from tests.test_elf import make_object, replace_integer


START = 0x1000
RODATA = 0x2000
BSS = 0x3000
CODE = bytes.fromhex("386000074e800020")


def make_cafe(*, text=None, relocations=(), symbols=None, text_address=START,
              text_size=None, rodata=b"R" * 16, bss_size=16,
              rodata_address=RODATA, bss_address=BSS, bss_flags=3):
    """Serialize a small Cafe RPX with explicit symbols and RELA records."""
    text = bytearray(CODE if text is None else text)
    text_size = len(text) if text_size is None else text_size
    sections = [
        ("", 0, 0, 0, b"", 0, 0, 0, 0),
        (".text", 1, 6, text_address, bytes(text), 0, 0, 4, 0),
        (".rodata", 1, 2, rodata_address, rodata, 0, 0, 4, 0),
        (".bss", 8, bss_flags, bss_address, bytes(bss_size), 0, 0, 4, 0),
    ]
    indices = {"undef": 0, "text": 1, "rodata": 2, "bss": 3,
               "abs": 0xFFF1, "common": 0xFFF2}
    # name -> (value, size, info, section index)
    symbols = {"ro": (rodata_address, 0, 0x11, "rodata"),
               "zero": (bss_address, 0, 0x11, "bss"),
               **(symbols or {})}
    strtab = bytearray(b"\0")
    name_offsets = {"": 0}
    symtab = bytearray(16)
    symbol_indices = {}
    for name, (value, size, info, section) in symbols.items():
        name_offsets[name] = len(strtab)
        strtab.extend(name.encode() + b"\0")
        shndx = indices.get(section, section)
        symbol_indices[name] = len(symtab) // 16
        symtab.extend(struct.pack(">IIIBBH", name_offsets[name], value, size,
                                  info, 0, shndx))
    symtab_index, strtab_index, rela_index = 4, 5, 6
    rela = bytearray()
    for site, kind, name, addend in relocations:
        index = symbol_indices[name]
        rela.extend(struct.pack(">IIi", site, (index << 8) | kind, addend))
    sections.extend([
        (".symtab", 2, 0, 0, bytes(symtab), strtab_index, 1, 4, 16),
        (".strtab", 3, 0, 0, bytes(strtab), 0, 0, 1, 0),
        (".rela.text", 4, 0, 0, bytes(rela), symtab_index, 1, 4, 12),
    ])
    shstr_index = len(sections)
    shstr = bytearray(b"\0")
    name_offsets = {"": 0}
    for section, *_ in sections[1:]:
        name_offsets[section] = len(shstr)
        shstr.extend(section.encode() + b"\0")
    name_offsets[".shstrtab"] = len(shstr)
    shstr.extend(b".shstrtab\0")
    sections.append((".shstrtab", 3, 0, 0, bytes(shstr), 0, 0, 1, 0))
    body = bytearray(52)
    headers = []
    for index, (name, kind, flags, address, content, link, info, alignment, entsize) in enumerate(sections):
        if index == 0:
            headers.append((0,) * 10)
            continue
        body.extend(bytes((-len(body)) % max(1, alignment)))
        offset = len(body)
        body.extend(content)
        size = bss_size if kind == 8 else len(content)
        headers.append((name_offsets[name], kind, flags, address, offset, size,
                        link, info, alignment, entsize))
    body.extend(bytes((-len(body)) % 4))
    shoff = len(body)
    for header in headers:
        body.extend(struct.pack(">10I", *header))
    body[:16] = b"\x7fELF\x01\x02\x01" + bytes(9)
    body[7:16] = b"\xca\xfe" + bytes(7)
    struct.pack_into(">HHIIIIIHHHHHH", body, 16, 0xFE01, 20, 1, text_address,
                     0, shoff, 0, 52, 0, 0, 40, len(sections), shstr_index)
    return bytes(body)


def link_value(kind, destination):
    if kind == 1:
        return destination
    if kind == 4:
        return destination & 0xFFFF
    if kind == 5:
        return destination >> 16
    if kind == 6:
        return ((destination + 0x8000) >> 16) & 0xFFFF
    raise AssertionError(kind)


def encode_original(relocations, text=CODE):
    raw = bytearray(text)
    for site, kind, _name, addend, destination in relocations:
        offset = site - START
        raw[offset:offset + (4 if kind == 1 else 2)] = link_value(kind, destination + addend).to_bytes(
            4 if kind == 1 else 2, "big")
    return bytes(raw)


class DataProfileTests(unittest.TestCase):
    def test_data_profile_preserves_raw_fields_and_allows_cross_anchor_addends(self):
        specs = [(START, 1, "ro", 4, RODATA),
                 (START + 4, 4, "ro", 0x1000, RODATA),
                 (START + 6, 5, "ro", 0, RODATA),
                 (START + 8, 1, "ro_plus4", -4, RODATA + 4)]
        text = encode_original(specs, CODE + bytes(4))
        image = parse(make_cafe(text=text,
                                relocations=[item[:4] for item in specs],
                                symbols={"ro_plus4": (RODATA + 4, 0, 0x11, "rodata")},
                                rodata=b"R" * 16, bss_size=16))
        expected = tuple({"site": site, "type": kind, "destination": destination + addend}
                         for site, kind, _name, addend, destination in specs)
        self.assertEqual(image.data_references(START, len(text)), expected)
        self.assertEqual(image.read(START, len(text), profile=DATA_PROFILE), text)

    def test_default_profile_still_rejects_relocated_function(self):
        image = parse(make_cafe(text=bytes.fromhex("000020004e800020"),
                                relocations=[(START, 1, "ro", 0)]))
        with self.assertRaises(RpxError):
            image.read(START, 8)

    def test_invalid_original_relocations_fail_closed(self):
        cases = {
            "mutated raw field": (bytes.fromhex("000020014e800020"), [(START, 1, "ro", 0)], {}),
            "HA field encoded as HI": (bytes.fromhex("123400004e800020"),
                                       [(START, 6, "ro", 0)], {"rodata_address": 0x12348000}),
            "branch relocation": (bytes.fromhex("480000004e800020"), [(START, 10, "ro", 0)], {}),
            "undefined symbol": (CODE, [(START, 1, "missing", 0)],
                                 {"symbols": {"missing": (0, 0, 0x11, "undef")}}),
            "executable anchor": (CODE, [(START, 1, "code", 0)],
                                  {"symbols": {"code": (START, 0, 0x11, "text")}}),
            "address overflow": (bytes.fromhex("ffffffff4e800020"),
                                 [(START, 1, "ro", 0x20)], {"rodata_address": 0xFFFFFFF0}),
        }
        for label, (text, relocs, options) in cases.items():
            with self.subTest(case=label):
                with self.assertRaises(RpxError):
                    image = parse(make_cafe(text=text, relocations=relocs, **options))
                    image.data_references(START, 8)

    def test_ha_carry_and_tls_destinations(self):
        ha_raw = bytes.fromhex("123500004e800020")
        hi_raw = bytes.fromhex("123400004e800020")
        for kind, raw in ((6, ha_raw), (5, hi_raw)):
            image = parse(make_cafe(text=raw, relocations=[(START, kind, "ro", 0)],
                                    rodata=b"R" * 16, rodata_address=0x12348000))
            self.assertEqual(image.data_references(START, 8),
                             ({"site": START, "type": kind, "destination": 0x12348000},))

        for tls_flag in (0x400, 0x04000000):
            image = parse(make_cafe(text=bytes.fromhex("000030004e800020"),
                                    relocations=[(START, 1, "ro", 0x1000)],
                                    bss_flags=2 | tls_flag))
            with self.subTest(tls_flag=hex(tls_flag)), self.assertRaisesRegex(RpxError, "TLS"):
                image.data_references(START, 8)

    def test_partial_field_gap_and_section_end_reject(self):
        # A 4-byte write at offset four cannot be partially claimed by a 6-byte function.
        partial = parse(make_cafe(text=bytes(8), relocations=[(START + 4, 1, "ro", 0)]))
        with self.assertRaises(RpxError):
            partial.data_references(START, 6)
        # Address 0x2010 is the exclusive end of rodata; BSS starts after a gap.
        for destination in (RODATA + 16, RODATA + 0x100):
            with self.subTest(destination=hex(destination)):
                image = parse(make_cafe(text=destination.to_bytes(4, "big") + CODE[4:],
                                         relocations=[(START, 1, "ro", destination - RODATA)]))
                with self.assertRaises(RpxError):
                    image.data_references(START, 8)
        with self.assertRaises(RpxError):
            parse(make_cafe(text=bytes(4), relocations=[(START + 4, 1, "ro", 0)]))

    def test_reference_bytes_requires_exact_declared_destination_set(self):
        text = bytes.fromhex("000020044e800020")
        image = parse(make_cafe(text=text, relocations=[(START, 1, "ro", 4)]))
        row = {"address": "0x00001000", "size": 8, "original_profile": DATA_PROFILE,
               "data_bindings": {"data_00002004": "0x00002004"},
               "data_relocations": [{"offset": 0, "type": 1, "symbol": "data_00002004"}]}
        self.assertEqual(reference_bytes(image, row), text)
        for bindings in ({}, {"data_00002000": "0x00002000"},
                         {"data_00002004": "0x00002004", "data_00002008": "0x00002008"}):
            with self.subTest(bindings=bindings), self.assertRaises((RpxError, ValueError)):
                reference_bytes(image, {**row, "data_bindings": bindings})
        with self.assertRaises(RpxError):
            reference_bytes(parse(make_cafe(text=CODE)),
                            {"address": "0x00001000", "size": 8,
                             "data_bindings": row["data_bindings"],
                             "data_relocations": row["data_relocations"]})

    def test_symbol_extent_and_signed_underflow_reject(self):
        image = parse(make_cafe(text=bytes.fromhex("000020004e800020"),
                                relocations=[(START, 1, "ro", 0)],
                                symbols={"ro": (RODATA, 17, 0x11, "rodata")}))
        with self.assertRaisesRegex(RpxError, "symbol disagrees"):
            image.data_references(START, 8)
        image = parse(make_cafe(text=bytes.fromhex("ffffffff4e800020"),
                                relocations=[(START, 1, "ro", -1)],
                                rodata_address=0))
        with self.assertRaisesRegex(RpxError, "exceeds 32 bits"):
            image.data_references(START, 8)

    def test_original_field_positions_and_kinds_are_part_of_reference_contract(self):
        text = bytes.fromhex("000020004e800020")
        image = parse(make_cafe(text=text, relocations=[(START, 1, "ro", 0)]))
        row = {"address": "0x00001000", "size": 8, "original_profile": DATA_PROFILE,
               "data_bindings": {"data_00002000": "0x00002000"}}
        for offset, kind in ((4, 1), (0, 4)):
            with self.subTest(offset=offset, kind=kind), self.assertRaisesRegex(RpxError, "original fields"):
                reference_bytes(image, {**row, "data_relocations": [
                    {"offset": offset, "type": kind, "symbol": "data_00002000"}]})

    def test_unknown_profile_rejects(self):
        with self.assertRaises(RpxError):
            parse(make_cafe()).read(START, 8, profile="guess")


class DataBindingMatchingTests(unittest.TestCase):
    def test_object_undefined_object_and_untyped_data_symbols_resolve_exact_bytes(self):
        for info in (0x11, 0x10):
            obj = make_object(bytes(4) + CODE[4:], extra_symbols=[("data_12345678", 0, 0, info, 0, "undef")],
                              relocations=[(0, 1, "data_12345678", 0)])
            expected_code = bytearray(bytes(4) + CODE[4:])
            struct.pack_into(">I", expected_code, 0, 0x12345678)
            bindings = {"data_12345678": 0x12345678}
            relocations = [{"offset": 0, "type": 1, "symbol": "data_12345678"}]
            result = compare_function(obj, "target", bytes(expected_code), START, {},
                                      data_bindings=bindings, data_relocations=relocations)
            self.assertTrue(result["matched"], result)
            self.assertEqual(compare_function_hash(obj, "target", hashlib.sha256(expected_code).hexdigest(),
                                                   8, START, {},
                                                   data_bindings=bindings,
                                                   data_relocations=relocations)["status"], "match")

    def test_data_binding_missing_and_wrong_address(self):
        obj = make_object(bytes(4) + CODE[4:], extra_symbols=[("data_1234567c", 0, 0, 0x11, 0, "undef")],
                          relocations=[(0, 1, "data_1234567c", 0)])
        expected = struct.pack(">I", 0x12345678) + CODE[4:]
        bindings = {"data_1234567c": 0x1234567C}
        relocations = [{"offset": 0, "type": 1, "symbol": "data_1234567c"}]
        self.assertEqual(compare_function(obj, "target", expected, START, {})["status"], "rejected")
        self.assertEqual(compare_function(obj, "target", expected, START, {}, data_bindings=bindings,
                                          data_relocations=relocations)["status"], "mismatch")

    def test_data_bindings_reject_nonundefined_misuse_and_branch_relocations(self):
        cases = [
            (0x12, 0, "undef"),  # FUNC
            (0x16, 0, "undef"),  # TLS
            (0x13, 0, "text"),   # SECTION
            (0x11, 0, "text"),
            (0x11, 0, "abs"),
            (0x11, 0, "common"),
        ]
        for info, value, section in cases:
            obj = make_object(bytes(4) + CODE[4:],
                              extra_symbols=[("data_00002000", value, 0, info, 0, section)],
                              relocations=[(0, 1, "data_00002000", 0)])
            with self.subTest(info=info, section=section):
                self.assertEqual(compare_function(obj, "target", bytes(8), START, {},
                                                  data_bindings={"data_00002000": 0x2000},
                                                  data_relocations=[{"offset": 0, "type": 1,
                                                                     "symbol": "data_00002000"}])["status"], "rejected")
        branch = make_object(bytes.fromhex("480000004e800020"),
                             extra_symbols=[("data_00002000", 0, 0, 0x11, 0, "undef")],
                             relocations=[(0, 10, "data_00002000", 0)])
        result = compare_function(branch, "target", bytes(8), START, {},
                                  data_bindings={"data_00002000": 0x2000},
                                  data_relocations=[{"offset": 0, "type": 1,
                                                     "symbol": "data_00002000"}])
        self.assertEqual(result["status"], "rejected")
        self.assertIn("absolute address", result["reason"])

    def test_TLS_symbol_and_allocated_rodata_are_rejected(self):
        obj = make_object(bytes(4) + CODE[4:], rodata=b"data",
                          extra_symbols=[("data_00002000", 0, 0, 0x11, 0, "undef")],
                          relocations=[(0, 1, "data_00002000", 0)])
        parsed = parse_object(obj)
        rodata = next(s for s in parsed.sections if s.name == ".rodata")
        shoff = struct.unpack_from(">I", obj, 32)[0]
        tls_obj = replace_integer(obj, shoff + rodata.index * 40 + 8, 0x402)
        kwargs = {"data_bindings": {"data_00002000": 0x2000},
                  "data_relocations": [{"offset": 0, "type": 1, "symbol": "data_00002000"}]}
        self.assertEqual(compare_function(tls_obj, "target", bytes(8), START, {}, **kwargs)["status"], "rejected")
        self.assertEqual(compare_function(obj, "target", bytes(8), START, {}, **kwargs)["status"], "rejected")

    def test_compiled_data_fields_must_match_declared_symbol_type_and_address(self):
        name = "data_12348000"
        bindings = {name: 0x12348000}
        expected_field = [{"offset": 2, "type": 6, "symbol": name}]
        # The adjusted high half is unchanged by +1, but the full resolved address is not.
        obj = make_object(bytes.fromhex("386000004e800020"),
                          extra_symbols=[(name, 0, 0, 0x11, 0, "undef")],
                          relocations=[(2, 6, name, 1)])
        result = compare_function(obj, "target", bytes.fromhex("386012354e800020"), START, {},
                                  data_bindings=bindings, data_relocations=expected_field)
        self.assertEqual(result["status"], "rejected", result)

        literal = make_object(bytes.fromhex("123480004e800020"))
        full = {"data_12348000": 0x12348000}
        self.assertEqual(compare_function(literal, "target", bytes.fromhex("123480004e800020"),
                                          START, {}, data_bindings=full,
                                          data_relocations=[{"offset": 0, "type": 1,
                                                             "symbol": "data_12348000"}])["status"],
                         "rejected")

        absolute = make_object(bytes(4) + CODE[4:],
                               extra_symbols=[(name, 0, 0, 0x11, 0, "undef")],
                               relocations=[(0, 1, name, 0)])
        for contract in ([{"offset": 0, "type": 4, "symbol": name}],
                         [{"offset": 4, "type": 1, "symbol": name}],
                         [{"offset": 0, "type": 1, "symbol": name},
                          {"offset": 4, "type": 4, "symbol": name}],
                         []):
            with self.subTest(contract=contract):
                self.assertEqual(compare_function(absolute, "target", bytes(8), START, {},
                                                  data_bindings=bindings,
                                                  data_relocations=contract)["status"], "rejected")


class DataManifestTests(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory()
        self.root = Path(self.directory.name)
        (self.root / "config").mkdir()
        self.row = {"id": "fn_00001000", "address": "0x00001000", "size": 8,
                    "sha256": "0" * 64, "symbol": "fn_00001000",
                    "source": "reconstructions/fn_00001000.cpp", "status": "unmatched"}

    def tearDown(self):
        self.directory.cleanup()

    def write(self, row):
        (self.root / "config/functions.json").write_text(
            json.dumps({"schema_version": 1, "functions": [row]}), encoding="utf-8")

    def test_valid_exact_data_name_and_address(self):
        self.write({**self.row, "original_profile": DATA_PROFILE,
                    "data_bindings": {"data_00002000": "0x00002000"},
                    "data_relocations": [{"offset": 0, "type": 1, "symbol": "data_00002000"}]})
        self.assertEqual(functions(self.root)["fn_00001000"]["data_bindings"],
                         {"data_00002000": "0x00002000"})
        self.write(self.row)
        self.assertEqual(functions(self.root)["fn_00001000"].get("original_profile", "unrelocated"),
                         "unrelocated")

    def test_strict_profile_rejects_data_bindings_and_invalid_rows(self):
        invalid_rows = [
            {**self.row, "data_bindings": {"data_00002000": "0x00002000"}},
            {**self.row, "original_profile": "unknown"},
            {**self.row, "original_profile": DATA_PROFILE,
             "data_bindings": {"data_00002004": "0x00002000"}},
            {**self.row, "original_profile": DATA_PROFILE,
             "data_bindings": {"data_00002000": 0x2000}},
            {**self.row, "original_profile": DATA_PROFILE,
             "data_relocations": [{"offset": 0, "type": 1, "symbol": "data_00002000"}]},
            {**self.row, "original_profile": DATA_PROFILE, "data_relocations": [
                {"offset": False, "type": 1, "symbol": "data_00002000"}]},
            {**self.row, "original_profile": DATA_PROFILE, "data_relocations": [
                {"offset": 0, "type": True, "symbol": "data_00002000"}]},
            {**self.row, "size": True},
        ]
        for row in invalid_rows:
            with self.subTest(row=row):
                self.write(row)
                with self.assertRaises((ValueError, TypeError)):
                    functions(self.root)


if __name__ == "__main__":
    unittest.main()
