"""Read a locally supplied Cafe ELF, retaining original section addresses."""
from dataclasses import dataclass
from bisect import bisect_left
import hashlib
from pathlib import Path
import struct
import zlib

from .data_relocations import DATA_PROFILE, contract

_RELOCATION_RECORD = struct.Struct(">IBiIIHBB")


_RELOCATION_WIDTHS = {0: 0, 1: 4, 4: 2, 5: 2, 6: 2, 10: 4, 11: 4,
                      26: 4, 68: 4, 78: 4}


class RpxError(ValueError):
    pass


@dataclass(frozen=True)
class Section:
    index: int
    name: str
    kind: int
    flags: int
    address: int
    size: int
    data: bytes


@dataclass(frozen=True)
class Rpx:
    sha256: str
    entry: int
    sections: tuple[Section, ...]
    relocation_sites: frozenset[int]
    sorted_relocation_sites: tuple[int, ...]
    sorted_relocation_ends: tuple[int, ...]
    relocation_records: bytes = b""

    def has_relocation(self, address: int, size: int) -> bool:
        index = bisect_left(self.sorted_relocation_sites, address)
        return ((index > 0 and self.sorted_relocation_ends[index - 1] > address) or
                (index < len(self.sorted_relocation_sites) and
                 self.sorted_relocation_sites[index] < address + size))

    def _code_section(self, address: int, size: int) -> Section:
        if (type(address) is not int or type(size) is not int or
                size <= 0 or address < 0 or address + size > 0x100000000):
            raise RpxError("invalid function range")
        sections = [s for s in self.sections if s.kind == 1 and s.flags & 6 == 6 and
                    s.address <= address and address + size <= s.address + len(s.data)]
        if len(sections) != 1:
            raise RpxError("function must lie in exactly one executable section")
        return sections[0]

    def _data_section(self, address: int) -> Section:
        sections = [s for s in self.sections if s.kind in (1, 8) and s.flags & 2 and
                    not s.flags & (4 | 0x400 | 0x04000000) and
                    s.address <= address < s.address + s.size]
        if len(sections) != 1:
            raise RpxError("relocation destination must lie in allocated non-TLS data")
        return sections[0]

    def data_references(self, address: int, size: int) -> tuple[dict, ...]:
        section = self._code_section(address, size)
        if len(self.relocation_records) != len(self.sorted_relocation_sites) * _RELOCATION_RECORD.size:
            raise RpxError("original relocation metadata is unavailable")
        first = bisect_left(self.sorted_relocation_sites, address)
        if first and self.sorted_relocation_ends[first - 1] > address:
            first -= 1
        last = bisect_left(self.sorted_relocation_sites, address + size)
        result = []
        for index in range(first, last):
            site, kind, addend, value, symbol_size, shndx, info, other = _RELOCATION_RECORD.unpack_from(
                self.relocation_records, index * _RELOCATION_RECORD.size)
            width = _RELOCATION_WIDTHS[kind]
            if site < address or site + width > address + size:
                raise RpxError("original relocation crosses a function boundary")
            if kind not in (1, 4, 5, 6):
                raise RpxError("unsupported original relocation in data-address profile")
            if not 0 < shndx < len(self.sections) or info >> 4 not in (0, 1, 2) or info & 15 not in (0, 1, 3):
                raise RpxError("original relocation requires a defined data symbol")
            anchor = self.sections[shndx]
            if (self._data_section(value) != anchor or value + symbol_size > anchor.address + anchor.size or
                    other & ~3):
                raise RpxError("original data symbol disagrees with its section")
            destination = value + addend
            if not 0 <= destination <= 0xFFFFFFFF:
                raise RpxError("original relocation address exceeds 32 bits")
            self._data_section(destination)
            expected = (destination if kind == 1 else destination & 0xFFFF if kind == 4
                        else destination >> 16 if kind == 5
                        else ((destination + 0x8000) >> 16) & 0xFFFF)
            offset = site - section.address
            actual = int.from_bytes(section.data[offset:offset + width], "big")
            if actual != expected:
                raise RpxError("original relocation field differs from its link-address value")
            result.append({"site": site, "type": kind, "destination": destination})
        return tuple(result)

    def read(self, address: int, size: int, *, profile: str = "unrelocated") -> bytes:
        if profile not in ("unrelocated", DATA_PROFILE):
            raise RpxError("unsupported original reference profile")
        section = self._code_section(address, size)
        if profile == DATA_PROFILE:
            self.data_references(address, size)
        elif self.has_relocation(address, size):
            raise RpxError("original RPX relocations require a verified canonicalisation profile")
        return section.data[address - section.address:address - section.address + size]


def parse(data: bytes) -> Rpx:
    if not isinstance(data, bytes) or len(data) < 52 or data[:7] != b"\x7fELF\x01\x02\x01":
        raise RpxError("expected ELF32 big-endian RPX")
    if data[7:16] != b"\xca\xfe" + bytes(7):
        raise RpxError("unsupported Cafe ELF ABI")
    fields = struct.unpack_from(">HHIIIIIHHHHHH", data, 16)
    kind, machine, version, entry, programs, table, flags, header_size, program_stride, program_count, stride, count, names = fields
    if machine != 20 or version != 1 or kind != 0xFE01:
        raise RpxError("expected Cafe PowerPC RPX executable")
    if programs or program_stride or program_count or flags:
        raise RpxError("unsupported RPX program headers or flags")
    if header_size != 52 or stride != 40 or not 0 < count <= 4096 or not 0 < names < count:
        raise RpxError("invalid ELF section header metadata")
    if table < 52 or table % 4 or table + count * stride > len(data):
        raise RpxError("truncated ELF section table")
    headers = [struct.unpack_from(">10I", data, table + i * stride) for i in range(count)]
    if headers[0] != (0,) * 10:
        raise RpxError("invalid null section or extended numbering")
    if headers[names][1] != 3:
        raise RpxError("section names must use a string table")
    contents = []
    total = 0
    for header in headers:
        _, typ, flags, address, offset, size, _, _, alignment, _ = header
        if alignment and (alignment & (alignment - 1) or address % alignment):
            raise RpxError("invalid section alignment")
        if typ in (0, 8):
            if typ == 0 and any(header):
                raise RpxError("invalid null section")
            if address + size > 0x100000000:
                raise RpxError("section exceeds the 32-bit address space")
            contents.append(b"")
            continue
        if offset + size > len(data):
            raise RpxError("section extends beyond input")
        block = data[offset:offset + size]
        if flags & 0x08000000:
            if len(block) < 4:
                raise RpxError("truncated compressed section")
            expected = int.from_bytes(block[:4], "big")
            if expected > 128 * 1024 * 1024:
                raise RpxError("section exceeds decompression limit")
            inflater = zlib.decompressobj()
            try:
                block = inflater.decompress(block[4:], expected + 1)
            except zlib.error as exc:
                raise RpxError("invalid compressed section") from exc
            if len(block) != expected or not inflater.eof or inflater.unused_data:
                raise RpxError("compressed section length or stream mismatch")
        total += len(block)
        if total > 512 * 1024 * 1024:
            raise RpxError("RPX exceeds decompression budget")
        contents.append(block)
    names_data = contents[names]
    if not names_data or names_data[0] or names_data[-1]:
        raise RpxError("invalid section name string table")
    sections = []
    for i, (header, block) in enumerate(zip(headers, contents)):
        name, typ, flags, address, _, size, _, _, _, _ = header
        if name >= len(names_data):
            raise RpxError("invalid section name offset")
        end = names_data.find(b"\0", name)
        if end < 0:
            raise RpxError("unterminated section name")
        try:
            label = names_data[name:end].decode("ascii")
        except UnicodeDecodeError as exc:
            raise RpxError("non-ASCII section name") from exc
        sections.append(Section(i, label, typ, flags, address,
                                size if typ == 8 else len(block), block))
        if address + sections[-1].size > 0x100000000:
            raise RpxError("section exceeds the 32-bit address space")
    allocated = sorted((s.address, s.address + s.size) for s in sections if s.flags & 2 and s.size)
    if any(left[1] > right[0] for left, right in zip(allocated, allocated[1:])):
        raise RpxError("overlapping allocated sections")
    relocations = {}
    for header, block in zip(headers, contents):
        _, typ, _, _, _, _, link, target, _, entsize = header
        if typ == 4:
            if entsize != 12 or len(block) % 12 or not 0 < target < count:
                raise RpxError("invalid RPX relocation section")
            if not 0 < link < count or headers[link][1] != 2:
                raise RpxError("relocations must link to a symbol table")
            symbols = contents[link]
            if headers[link][9] != 16 or not symbols or len(symbols) % 16:
                raise RpxError("invalid RPX symbol table")
            destination = sections[target]
            if destination.kind != 1 or not destination.flags & 2:
                raise RpxError("relocations must target allocated PROGBITS")
            for offset in range(0, len(block), 12):
                site, info, addend = struct.unpack_from(">IIi", block, offset)
                kind = info & 0xFF
                if info >> 8 >= len(symbols) // 16:
                    raise RpxError("relocation has an invalid symbol index")
                if kind not in _RELOCATION_WIDTHS:
                    raise RpxError(f"unsupported original RPX relocation type {kind}")
                width = _RELOCATION_WIDTHS[kind]
                if not width:
                    continue
                if site % min(width, 4) or not destination.address <= site or site + width > destination.address + destination.size:
                    raise RpxError("relocation write is outside or misaligned in its target section")
                if site in relocations:
                    raise RpxError("overlapping relocation writes")
                _, value, symbol_size, symbol_info, other, shndx = struct.unpack_from(">IIIBBH", symbols, (info >> 8) * 16)
                relocations[site] = _RELOCATION_RECORD.pack(site, kind, addend, value, symbol_size, shndx, symbol_info, other)
        elif typ == 9:
            raise RpxError("implicit-addend RPX relocations are unsupported")
    sites = tuple(sorted(relocations))
    ends = tuple(site + _RELOCATION_WIDTHS[relocations[site][4]] for site in sites)
    if any(end > site for end, site in zip(ends, sites[1:])):
        raise RpxError("overlapping relocation writes")
    return Rpx(hashlib.sha256(data).hexdigest(), entry, tuple(sections),
               frozenset(sites), sites, ends, b"".join(relocations[site] for site in sites))


def load(path: Path, expected_sha256: str) -> Rpx:
    data = path.read_bytes()
    actual = hashlib.sha256(data).hexdigest()
    if actual != expected_sha256:
        raise RpxError(f"wrong RPX: expected {expected_sha256}, received {actual}")
    return parse(data)


def reference_bytes(image: Rpx, row: dict) -> bytes:
    address, size = int(row["address"], 16), row["size"]
    profile = row.get("original_profile", "unrelocated")
    if profile == "unrelocated":
        if "data_bindings" in row or "data_relocations" in row:
            raise RpxError("data bindings require the data-address profile")
        return image.read(address, size)
    data = image.read(address, size, profile=profile)
    bindings = {name: int(value, 16) for name, value in row.get("data_bindings", {}).items()}
    try:
        expected = contract(size, bindings, row.get("data_relocations", []))
    except ValueError as exc:
        raise RpxError(str(exc)) from exc
    actual = tuple(sorted((item["site"] - address, item["type"], f"data_{item['destination']:08x}",
                           item["destination"]) for item in image.data_references(address, size)))
    if actual != expected:
        raise RpxError("trusted data relocation contract disagrees with original fields")
    return data
