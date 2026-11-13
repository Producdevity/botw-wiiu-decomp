"""Strict ELF32 big-endian PowerPC relocatable-object reader."""

from dataclasses import dataclass
import struct


SHT_NULL = 0
SHT_PROGBITS = 1
SHT_SYMTAB = 2
SHT_STRTAB = 3
SHT_RELA = 4
SHT_NOBITS = 8
SHT_REL = 9
SHF_WRITE = 1
SHF_ALLOC = 2
SHF_EXECINSTR = 4
SHN_UNDEF = 0
SHN_ABS = 0xFFF1
SHN_COMMON = 0xFFF2
STT_NOTYPE = 0
STT_OBJECT = 1
STT_FUNC = 2
STT_SECTION = 3


class ElfError(ValueError):
    """The input cannot be verified as a supported relocatable object."""


@dataclass(frozen=True)
class Section:
    index: int
    name: str
    type: int
    flags: int
    address: int
    offset: int
    size: int
    link: int
    info: int
    alignment: int
    entry_size: int
    data: bytes


@dataclass(frozen=True)
class Symbol:
    index: int
    name: str
    value: int
    size: int
    binding: int
    type: int
    other: int
    section_index: int


@dataclass(frozen=True)
class Relocation:
    section_index: int
    target_section: int
    offset: int
    type: int
    symbol_index: int
    addend: int


@dataclass(frozen=True)
class ElfObject:
    sections: tuple[Section, ...]
    symbols: tuple[Symbol, ...]
    relocations: tuple[Relocation, ...]


def _slice(data: bytes, offset: int, size: int, label: str) -> bytes:
    if offset < 0 or size < 0 or offset > len(data) or size > len(data) - offset:
        raise ElfError(f"{label} extends outside the file")
    return data[offset:offset + size]


def _string(table: bytes, offset: int, label: str) -> str:
    if offset >= len(table):
        raise ElfError(f"{label} has an invalid string offset")
    end = table.find(b"\0", offset)
    if end < 0:
        raise ElfError(f"{label} has an unterminated string")
    try:
        return table[offset:end].decode("utf-8")
    except UnicodeDecodeError as exc:
        raise ElfError(f"{label} is not UTF-8") from exc


def parse_object(data: bytes) -> ElfObject:
    if not isinstance(data, bytes):
        raise ElfError("object input must be bytes")
    header = _slice(data, 0, 52, "ELF header")
    ident = header[:16]
    if ident[:7] != b"\x7fELF\x01\x02\x01":
        raise ElfError("expected ELF32 big-endian version 1")
    if ident[7] not in (0, 3) or ident[8:] != bytes(8):
        raise ElfError("unsupported ELF ABI")
    (kind, machine, version, entry, phoff, shoff, flags, ehsize,
     phentsize, phnum, shentsize, shnum, shstrndx) = struct.unpack_from(
        ">HHIIIIIHHHHHH", header, 16
    )
    if kind != 1 or machine != 20 or version != 1:
        raise ElfError("expected a PowerPC ET_REL object")
    if flags not in (0, 0x80000000):
        raise ElfError("unsupported PowerPC ELF flags")
    if entry or phoff or phentsize or phnum:
        raise ElfError("relocatable object contains a program image")
    if ehsize != 52 or shentsize != 40 or not shnum:
        raise ElfError("unsupported ELF header or extended section numbering")
    if shoff < ehsize or shoff % 4 or not 0 < shstrndx < shnum:
        raise ElfError("invalid section table")
    section_table = _slice(data, shoff, shnum * 40, "section table")
    headers = [struct.unpack_from(">10I", section_table, index * 40)
               for index in range(shnum)]
    if headers[0] != (0,) * 10:
        raise ElfError("invalid null section or extended numbering")
    names_header = headers[shstrndx]
    if names_header[1] != SHT_STRTAB:
        raise ElfError("section name table is not a string table")
    names = _slice(data, names_header[4], names_header[5], "section names")
    if not names or names[0] != 0 or names[-1] != 0:
        raise ElfError("invalid section name string table")

    sections = []
    for index, raw in enumerate(headers):
        (name_offset, section_type, section_flags, address, offset, size,
         link, info, alignment, entry_size) = raw
        if alignment and alignment & (alignment - 1):
            raise ElfError(f"section {index} has non-power-of-two alignment")
        if section_flags & 0x800:
            raise ElfError("compressed ELF object sections are unsupported")
        if address:
            raise ElfError("ET_REL section has a nonzero virtual address")
        if section_type == SHT_REL:
            raise ElfError("implicit-addend SHT_REL relocations are unsupported")
        name = _string(names, name_offset, f"section {index}")
        contents = b"" if section_type == SHT_NOBITS else _slice(
            data, offset, size, f"section {index}"
        )
        sections.append(Section(index, name, section_type, section_flags,
                                address, offset, size, link, info, alignment,
                                entry_size, contents))

    symtabs = [section for section in sections if section.type == SHT_SYMTAB]
    if len(symtabs) != 1:
        raise ElfError("expected exactly one symbol table")
    symtab = symtabs[0]
    if symtab.entry_size != 16 or symtab.size % 16 or not symtab.size:
        raise ElfError("invalid symbol table size")
    if not 0 < symtab.link < shnum or sections[symtab.link].type != SHT_STRTAB:
        raise ElfError("symbol table does not link to a string table")
    strings = sections[symtab.link].data
    if not strings or strings[0] != 0 or strings[-1] != 0:
        raise ElfError("invalid symbol string table")
    count = symtab.size // 16
    if not 1 <= symtab.info <= count:
        raise ElfError("invalid symbol table local-symbol boundary")
    if symtab.data[:16] != bytes(16):
        raise ElfError("invalid null symbol")
    symbols = []
    for index in range(count):
        name_offset, value, size, info, other, shndx = struct.unpack_from(
            ">IIIBBH", symtab.data, index * 16
        )
        name = _string(strings, name_offset, f"symbol {index}")
        binding, symbol_type = info >> 4, info & 15
        if (index < symtab.info) != (binding == 0):
            raise ElfError("symbol table local-symbol ordering is invalid")
        if shndx not in (SHN_UNDEF, SHN_ABS, SHN_COMMON):
            if not 0 < shndx < shnum:
                raise ElfError(f"symbol {index} has an unsupported section index")
            section = sections[shndx]
            if value > section.size or size > section.size - value:
                raise ElfError(f"symbol {index} extends outside its section")
        symbols.append(Symbol(index, name, value, size, binding, symbol_type,
                              other, shndx))

    relocations = []
    for section in sections:
        if section.type != SHT_RELA:
            continue
        if section.entry_size != 12 or section.size % 12:
            raise ElfError("invalid relocation table size")
        if section.link != symtab.index:
            raise ElfError("relocation table links to an unsupported symbol table")
        if not 0 < section.info < shnum:
            raise ElfError("relocation table has an invalid target section")
        target = sections[section.info]
        if target.type != SHT_PROGBITS and (section.size or target.flags & SHF_ALLOC):
            raise ElfError("relocation target is not a PROGBITS section")
        for offset in range(0, section.size, 12):
            place, info, addend = struct.unpack_from(">IIi", section.data, offset)
            symbol_index, relocation_type = info >> 8, info & 255
            if symbol_index >= count:
                raise ElfError("relocation has an invalid symbol index")
            if place >= target.size:
                raise ElfError("relocation offset is outside its target section")
            relocations.append(Relocation(section.index, section.info, place,
                                          relocation_type, symbol_index, addend))
    return ElfObject(tuple(sections), tuple(symbols), tuple(relocations))
