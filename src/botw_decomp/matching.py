"""Exact function comparison; unsupported dependencies fail closed."""

import hashlib
import struct

from .elf import (ElfError, ElfObject, Relocation, SHF_ALLOC, SHF_EXECINSTR,
                  SHN_ABS, SHN_COMMON, SHN_UNDEF, SHT_PROGBITS, STT_FUNC,
                  Symbol, parse_object)


_WIDTHS = {0: 0, 1: 4, 4: 2, 5: 2, 6: 2, 10: 4, 11: 4, 26: 4}


def _sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def _address(value: int, label: str) -> int:
    if isinstance(value, bool) or not isinstance(value, int) or not 0 <= value <= 0xFFFFFFFF:
        raise ElfError(f"{label} must be an unsigned 32-bit address")
    return value


def _symbol_address(obj: ElfObject, symbol: Symbol, addend: int,
                    selected: Symbol, original_address: int,
                    bindings: dict[str, int]) -> int:
    if symbol.section_index == SHN_COMMON:
        raise ElfError("common-symbol dependencies are unsupported")
    if symbol.section_index == SHN_ABS:
        if symbol.name not in bindings or bindings[symbol.name] != symbol.value:
            raise ElfError("absolute-symbol address disagrees with trusted binding")
    if symbol.section_index not in (SHN_UNDEF, SHN_ABS):
        section = obj.sections[symbol.section_index]
        if section.type != SHT_PROGBITS or not section.flags & SHF_EXECINSTR:
            raise ElfError(f"unverified local data dependency: {symbol.name or section.name}")
        if symbol.section_index == selected.section_index:
            destination = symbol.value + addend
            if selected.value <= destination < selected.value + selected.size:
                return original_address + destination - selected.value
        if symbol.type != STT_FUNC:
            raise ElfError(f"unverified local dependency: {symbol.name or section.name}")
    if not symbol.name or symbol.name not in bindings:
        raise ElfError(f"unresolved dependency: {symbol.name or '<unnamed symbol>'}")
    return _address(bindings[symbol.name] + addend,
                    f"resolved address of {symbol.name}")


def _validate_scope(obj: ElfObject, selected: Symbol) -> None:
    section = obj.sections[selected.section_index]
    for other in obj.sections:
        if other.index != section.index and other.flags & SHF_ALLOC and other.size:
            raise ElfError(f"unverified allocated section: {other.name}")
    for symbol in obj.symbols:
        if symbol.section_index == SHN_COMMON:
            raise ElfError(f"unverified common data: {symbol.name}")
        if (symbol.index != selected.index and symbol.type == STT_FUNC and
                symbol.section_index != SHN_UNDEF):
            raise ElfError(f"unverified additional function: {symbol.name}")
        if symbol.index == selected.index or symbol.section_index != section.index:
            continue
        if symbol.size and (symbol.value < selected.value or
                            symbol.value + symbol.size > selected.value + selected.size):
            raise ElfError(f"symbol extends outside selected function: {symbol.name}")
    padding = (section.data[:selected.value],
               section.data[selected.value + selected.size:])
    for block in padding:
        if len(block) >= max(4, section.alignment) or len(block) % 4:
            raise ElfError("unverified bytes outside selected function")
        if any(word not in (0, 0x60000000) for (word,) in struct.iter_unpack(">I", block)):
            raise ElfError("unverified bytes outside selected function")
    for relocation in obj.relocations:
        if relocation.target_section != section.index or relocation.type == 0:
            continue
        if not selected.value <= relocation.offset < selected.value + selected.size:
            raise ElfError("relocation writes outside selected function")


def _apply(code: bytearray, offset: int, relocation: Relocation,
           destination: int, place: int) -> None:
    kind = relocation.type
    width = _WIDTHS[kind]
    if offset % min(width, 4):
        raise ElfError("misaligned relocation")
    if kind == 1:
        struct.pack_into(">I", code, offset, destination)
    elif kind in (4, 5, 6):
        if kind == 4:
            value = destination & 0xFFFF
        elif kind == 5:
            value = destination >> 16
        else:
            value = ((destination + 0x8000) >> 16) & 0xFFFF
        struct.pack_into(">H", code, offset, value)
    elif kind in (10, 11):
        instruction = struct.unpack_from(">I", code, offset)[0]
        opcode = 18 if kind == 10 else 16
        if instruction >> 26 != opcode or instruction & 2:
            raise ElfError("relative branch relocation has an incompatible instruction")
        displacement = destination - place
        bits, mask = (26, 0x03FFFFFC) if kind == 10 else (16, 0xFFFC)
        if displacement % 4 or not -(1 << (bits - 1)) <= displacement < (1 << (bits - 1)):
            raise ElfError("branch relocation is misaligned or out of range")
        struct.pack_into(">I", code, offset,
                         (instruction & ~mask) | (displacement & mask))
    elif kind == 26:
        value = destination - place
        if not -(1 << 31) <= value < (1 << 31):
            raise ElfError("REL32 relocation is out of range")
        struct.pack_into(">I", code, offset, value & 0xFFFFFFFF)


def _resolve_function(object_bytes: bytes, symbol_name: str, expected_size: int,
                      original_address: int,
                      symbol_bindings: dict[str, int]) -> tuple[dict, bytes | None]:
    result = {"matched": False, "status": "rejected", "reason": ""}
    try:
        if not isinstance(object_bytes, bytes):
            raise ElfError("object input must be bytes")
        result.update(object_sha256=_sha(object_bytes), expected_size=expected_size,
                      symbol=symbol_name)
        if not isinstance(symbol_name, str) or not symbol_name:
            raise ElfError("a nonempty target symbol is required")
        _address(original_address, "original address")
        if (isinstance(expected_size, bool) or not isinstance(expected_size, int) or
                expected_size <= 0 or expected_size % 4 or original_address % 4):
            raise ElfError("PowerPC function address and size must be nonempty and word-aligned")
        if original_address + expected_size > 1 << 32:
            raise ElfError("reference function extends outside the 32-bit address space")
        if not isinstance(symbol_bindings, dict):
            raise ElfError("symbol bindings must be a dictionary")
        for name, address in symbol_bindings.items():
            if not isinstance(name, str) or not name:
                raise ElfError("invalid binding name")
            _address(address, f"binding {name}")
        if symbol_name in symbol_bindings and symbol_bindings[symbol_name] != original_address:
            raise ElfError("target binding disagrees with its original address")
        obj = parse_object(object_bytes)
        candidates = [symbol for symbol in obj.symbols if symbol.name == symbol_name]
        if len(candidates) != 1:
            raise ElfError("target symbol must occur exactly once")
        selected = candidates[0]
        if selected.type != STT_FUNC or not 0 < selected.section_index < len(obj.sections):
            raise ElfError("target must be a defined function symbol")
        section = obj.sections[selected.section_index]
        if (section.type != SHT_PROGBITS or
                section.flags & (SHF_ALLOC | SHF_EXECINSTR) != SHF_ALLOC | SHF_EXECINSTR):
            raise ElfError("target function must be in allocated executable PROGBITS")
        if not selected.size or selected.size % 4 or selected.value % 4:
            raise ElfError("target function has an invalid size or alignment")
        result["actual_size"] = selected.size
        if selected.size != expected_size:
            result.update(status="mismatch", reason="function size differs")
            return result, None
        _validate_scope(obj, selected)
        code = bytearray(section.data[selected.value:selected.value + selected.size])
        occupied = set()
        count = 0
        for relocation in obj.relocations:
            if relocation.target_section != selected.section_index:
                continue
            if relocation.type not in _WIDTHS:
                raise ElfError(f"unsupported relocation type {relocation.type} in target section")
            width = _WIDTHS[relocation.type]
            if relocation.offset + width > section.size:
                raise ElfError("relocation write extends outside its section")
            end = selected.value + selected.size
            if relocation.offset >= end or relocation.offset + width <= selected.value:
                continue
            if relocation.offset < selected.value or relocation.offset + width > end:
                raise ElfError("relocation crosses a function boundary")
            if not width:
                continue
            offset = relocation.offset - selected.value
            covered = set(range(offset, offset + width))
            if occupied.intersection(covered):
                raise ElfError("overlapping relocation writes")
            occupied.update(covered)
            symbol = obj.symbols[relocation.symbol_index]
            destination = _symbol_address(obj, symbol, relocation.addend, selected,
                                          original_address, symbol_bindings)
            _apply(code, offset, relocation, destination, original_address + offset)
            count += 1
        actual = bytes(code)
        result.update(actual_sha256=_sha(actual), relocations=count)
        return result, actual
    except (ElfError, struct.error) as exc:
        result.update(matched=False, status="rejected", reason=str(exc))
    return result, None


def compare_function(object_bytes: bytes, symbol_name: str, expected: bytes,
                     original_address: int,
                     symbol_bindings: dict[str, int]) -> dict:
    if not isinstance(expected, bytes):
        return {"matched": False, "status": "rejected", "reason": "reference input must be bytes"}
    result, actual = _resolve_function(object_bytes, symbol_name, len(expected),
                                       original_address, symbol_bindings)
    result["expected_sha256"] = _sha(expected)
    if actual is not None:
        if actual == expected:
            result.update(matched=True, status="match", reason="exact relocated function bytes")
        else:
            difference = next(index for index, (a, b) in enumerate(zip(actual, expected)) if a != b)
            result.update(status="mismatch", reason="function bytes differ", first_difference=difference)
    return result


def compare_function_hash(object_bytes: bytes, symbol_name: str, expected_sha256: str,
                          expected_size: int, original_address: int,
                          symbol_bindings: dict[str, int]) -> dict:
    if (not isinstance(expected_sha256, str) or len(expected_sha256) != 64 or
            any(char not in "0123456789abcdef" for char in expected_sha256)):
        return {"matched": False, "status": "rejected", "reason": "invalid reference SHA-256"}
    result, actual = _resolve_function(object_bytes, symbol_name, expected_size,
                                       original_address, symbol_bindings)
    result["expected_sha256"] = expected_sha256
    if actual is not None:
        if result["actual_sha256"] == expected_sha256:
            result.update(matched=True, status="match", reason="exact relocated function SHA-256")
        else:
            result.update(status="mismatch", reason="function SHA-256 differs")
    return result
