import struct
import unittest

from botw_decomp.elf import ElfError, parse_object


def make_object(code=b"\x38\x60\x00\x07\x4e\x80\x00\x20", *,
                relocations=(), extra_symbols=(), rodata=None,
                symbol_size=None, symbol_value=0, target_type=2, text_flags=6,
                text_alignment=4, metadata=False):
    """Build synthetic ELF fixtures; no bytes originate from a game."""
    sections = [("", 0, 0, b"", 0, 0, 0, 0),
                (".text", 1, text_flags, code, 0, 0, text_alignment, 0)]
    indices = {"undef": 0, "text": 1, "abs": 0xFFF1, "common": 0xFFF2}
    if rodata is not None:
        indices["rodata"] = len(sections)
        sections.append((".rodata", 1, 2, rodata, 0, 0, 4, 0))
    if metadata:
        metadata_index = len(sections)
        sections.append((".ghsinfo", 7, 0, bytes(8), 0, 0, 1, 0))
    symtab_index, strtab_index = len(sections), len(sections) + 1
    symbols = [("", 0, 0, 0, 0, "undef")]
    symbols += [s for s in extra_symbols if s[3] >> 4 == 0]
    first_global = len(symbols)
    symbols += [("target", symbol_value, len(code) if symbol_size is None else symbol_size,
                 0x10 | target_type, 0, "text")]
    symbols += [s for s in extra_symbols if s[3] >> 4 != 0]
    strings = bytearray(b"\0")
    names = {"": 0}
    table = bytearray()
    symbol_indices = {}
    for index, (name, value, size, info, other, section) in enumerate(symbols):
        if name not in names:
            names[name] = len(strings)
            strings.extend(name.encode() + b"\0")
        table.extend(struct.pack(">IIIBBH", names[name], value, size, info, other,
                                 indices.get(section, section) if isinstance(section, str) else section))
        symbol_indices[name] = index
    sections.append((".symtab", 2, 0, bytes(table), strtab_index, first_global, 4, 16))
    sections.append((".strtab", 3, 0, bytes(strings), 0, 0, 1, 0))
    if relocations:
        relocs = b"".join(struct.pack(">IIi", offset, (symbol_indices[name] << 8) | kind, addend)
                          for offset, kind, name, addend in relocations)
        sections.append((".rela.text", 4, 0, relocs, symtab_index, 1, 4, 12))
    if metadata:
        sections.append((".rela.ghsinfo", 4, 0, b"", symtab_index, metadata_index, 4, 12))
    shstrndx = len(sections)
    sections.append((".shstrtab", 3, 0, b"", 0, 0, 1, 0))
    section_names = bytearray(b"\0")
    name_offsets = {"": 0}
    for name, *_ in sections[1:]:
        name_offsets[name] = len(section_names)
        section_names.extend(name.encode() + b"\0")
    sections[-1] = (".shstrtab", 3, 0, bytes(section_names), 0, 0, 1, 0)
    body = bytearray(52)
    headers = []
    for index, (name, kind, flags, content, link, info, alignment, entry_size) in enumerate(sections):
        if not index:
            headers.append((0,) * 10)
            continue
        body.extend(bytes((-len(body)) % max(1, alignment)))
        offset = len(body)
        body.extend(content)
        headers.append((name_offsets[name], kind, flags, 0, offset, len(content),
                        link, info, alignment, entry_size))
    body.extend(bytes((-len(body)) % 4))
    shoff = len(body)
    for header in headers:
        body.extend(struct.pack(">10I", *header))
    body[:16] = b"\x7fELF\x01\x02\x01" + bytes(9)
    struct.pack_into(">HHIIIIIHHHHHH", body, 16, 1, 20, 1, 0, 0, shoff, 0,
                     52, 0, 0, 40, len(sections), shstrndx)
    return bytes(body)


def replace_integer(data, offset, value, fmt=">I"):
    patched = bytearray(data)
    struct.pack_into(fmt, patched, offset, value)
    return bytes(patched)


def section_field(data, name, field_offset, value):
    obj = parse_object(data)
    section = next(s for s in obj.sections if s.name == name)
    shoff = struct.unpack_from(">I", data, 32)[0]
    return replace_integer(data, shoff + section.index * 40 + field_offset, value)


class ElfTests(unittest.TestCase):
    def test_empty_relocation_table_for_nonallocated_ghs_metadata(self):
        obj = parse_object(make_object(metadata=True))
        self.assertEqual(next(s for s in obj.sections if s.name == ".ghsinfo").type, 7)
        self.assertEqual(obj.relocations, ())

    def test_reads_function_and_relocation(self):
        raw = make_object(relocations=[(0, 1, "outside", 4)],
                          extra_symbols=[("outside", 0, 0, 0x10, 0, "undef")])
        obj = parse_object(raw)
        self.assertEqual(obj.symbols[1].name, "target")
        self.assertEqual(obj.symbols[1].size, 8)
        self.assertEqual(obj.relocations[0].addend, 4)
        self.assertEqual(obj.relocations[0].target_section, 1)

    def test_rejects_wrong_class_endian_machine_type_and_version(self):
        raw = make_object()
        mutations = [(4, 2, ">B"), (5, 1, ">B"), (6, 2, ">B"),
                     (16, 2, ">H"), (18, 21, ">H"), (20, 2, ">I"),
                     (36, 1, ">I"), (40, 64, ">H"), (46, 64, ">H")]
        for offset, value, fmt in mutations:
            with self.subTest(offset=offset), self.assertRaises(ElfError):
                parse_object(replace_integer(raw, offset, value, fmt))

    def test_rejects_truncated_files(self):
        raw = make_object()
        for size in (0, 16, 51, len(raw) - 1):
            with self.subTest(size=size), self.assertRaises(ElfError):
                parse_object(raw[:size])

    def test_rejects_extended_numbering(self):
        with self.assertRaises(ElfError):
            parse_object(replace_integer(make_object(), 48, 0, ">H"))

    def test_rejects_invalid_section_bounds_and_alignment(self):
        raw = make_object()
        for field, value in ((16, 0xFFFFFFFF), (20, 0xFFFFFFFF), (32, 3), (12, 4)):
            with self.subTest(field=field), self.assertRaises(ElfError):
                parse_object(section_field(raw, ".text", field, value))

    def test_rejects_malformed_symbol_tables(self):
        raw = make_object()
        for field, value in ((20, 17), (24, 1), (28, 0), (28, 100), (36, 0)):
            with self.subTest(field=field), self.assertRaises(ElfError):
                parse_object(section_field(raw, ".symtab", field, value))

    def test_rejects_invalid_symbol_name_and_section(self):
        raw = make_object()
        symtab = next(s for s in parse_object(raw).sections if s.name == ".symtab")
        for offset, value, fmt in ((16, 999, ">I"), (30, 0xFFFF, ">H")):
            with self.subTest(offset=offset), self.assertRaises(ElfError):
                parse_object(replace_integer(raw, symtab.offset + offset, value, fmt))

    def test_rejects_symbol_outside_section(self):
        with self.assertRaises(ElfError):
            parse_object(make_object(symbol_size=12))

    def test_rejects_invalid_relocation_metadata(self):
        raw = make_object(relocations=[(0, 1, "target", 0)])
        for field, value in ((4, 9), (20, 11), (24, 1), (28, 99), (36, 0)):
            with self.subTest(field=field), self.assertRaises(ElfError):
                parse_object(section_field(raw, ".rela.text", field, value))

    def test_rejects_out_of_bounds_relocation_and_symbol(self):
        raw = make_object(relocations=[(0, 1, "target", 0)])
        rela = next(s for s in parse_object(raw).sections if s.name == ".rela.text")
        for offset, value in ((0, 8), (4, (100 << 8) | 1)):
            with self.subTest(offset=offset), self.assertRaises(ElfError):
                parse_object(replace_integer(raw, rela.offset + offset, value))


if __name__ == "__main__":
    unittest.main()
