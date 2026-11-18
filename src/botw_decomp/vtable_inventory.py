"""Discover local function candidates from a checked GHS vtable pattern."""
from __future__ import annotations

from bisect import bisect_left, bisect_right
from collections import Counter, defaultdict
from collections.abc import Iterable
from dataclasses import dataclass
import struct

from .inventory import branch_target, discover, signed, text_section, text_words
from .rpx import Rpx, Section, _RELOCATION_RECORD


@dataclass(frozen=True)
class Materialization:
    high: int
    low: int
    store: int
    base_register: int
    linked_displacement: int


def _ranges(rows: Iterable[dict], *, interior_only: bool = False) -> tuple[list[int], list[int]]:
    starts: list[int] = []
    ends: list[int] = []
    for start, end in sorted((int(row["address"], 16), int(row["address"], 16) + row["size"])
                             for row in rows):
        if interior_only:
            start += 4
        if start >= end:
            continue
        if ends and start <= ends[-1]:
            ends[-1] = max(ends[-1], end)
        else:
            starts.append(start)
            ends.append(end)
    return starts, ends


def _overlaps(start: int, end: int, ranges: tuple[list[int], list[int]]) -> bool:
    starts, ends = ranges
    index = bisect_right(ends, start)
    return index < len(starts) and starts[index] < end


def _allocated_data(section: Section) -> bool:
    return section.kind == 1 and section.flags & 2 and not section.flags & (4 | 0x400 | 0x04000000)


def _references(
    image: Rpx, text: Section, rodata: Section, interiors: tuple[list[int], list[int]],
) -> tuple[dict[int, int], set[int], dict[int, list[int]], dict[int, list[int]]]:
    starts, ends = image.sorted_relocation_sites, image.sorted_relocation_ends
    if len(starts) != len(ends) or len(image.relocation_records) != len(starts) * _RELOCATION_RECORD.size:
        raise ValueError("original relocation metadata is unavailable")

    text_end = text.address + text.size
    data_sections = sorted((s for s in image.sections if _allocated_data(s) and s.size),
                           key=lambda section: section.address)
    data_starts = [section.address for section in data_sections]
    # The pinned GHS link uses the .syscall section symbol as its code-segment base.
    code_bases = {s.index: s.address for s in image.sections if s == text or
                  s.name == ".syscall" and s.kind == 1 and s.flags & 6 == 6
                  and s.address + s.size <= text.address}
    slots: dict[int, int] = {}
    fences: set[int] = set()
    highs: dict[int, list[int]] = defaultdict(list)
    lows: dict[int, list[int]] = defaultdict(list)
    for expected_start, expected_end, record in zip(
            starts, ends, _RELOCATION_RECORD.iter_unpack(image.relocation_records)):
        site, kind, addend, value, symbol_size, section, info, other = record
        if site != expected_start:
            raise ValueError("original relocation metadata has inconsistent sites")
        target = value + addend
        if kind == 1 and text.address <= target < text_end and not target % 4:
            section_symbol = info & 15 == 3 and not symbol_size and value == code_bases.get(section)
            function_symbol = (info & 15 == 2 and section == text.index and not addend
                               and target + symbol_size <= text_end)
            if (not (section_symbol or function_symbol) or info >> 4 not in (0, 1, 2)
                    or other & ~3 or site % 4 or expected_end != site + 4):
                continue
            index = bisect_right(data_starts, site) - 1
            if index < 0:
                continue
            owner = data_sections[index]
            offset = site - owner.address
            if (offset + 4 > len(owner.data) or struct.unpack_from(">I", owner.data, offset)[0] != target
                    or _overlaps(target, target + 4, interiors)):
                continue
            fences.add(target)
            if owner == rodata:
                slots[site] = target
        elif (kind in (4, 6) and section == rodata.index and text.address <= site < text_end
              and site % 4 == 2 and expected_end == site + 2 and not target % 4
              and rodata.address <= target < rodata.address + rodata.size
              and rodata.address <= value < rodata.address + rodata.size
              and value + symbol_size <= rodata.address + rodata.size
              and info >> 4 in (0, 1, 2) and info & 15 in (0, 1, 3) and not other & ~3
              and (info & 15 != 3 or value == rodata.address and not symbol_size)):
            (highs if kind == 6 else lows)[target].append(site)
    return slots, fences, highs, lows


def _rt(word: int) -> int:
    return (word >> 21) & 31


def _ra(word: int) -> int:
    return (word >> 16) & 31


def _preserves_register(word: int, register: int) -> bool:
    op = word >> 26
    if op in (10, 11, 36, 38, 44, 48, 50, 52, 54, 56, 59, 60, 63):
        return True
    if op in (7, 8, 12, 13, 14, 15, 32, 34, 40, 42):
        return _rt(word) != register
    if op in (20, 21, 23, 24, 25, 26, 27, 28, 29, 37, 39, 45, 49, 51, 53, 55, 57, 61):
        return _ra(word) != register
    if op == 31:
        xo = (word >> 1) & 1023
        if xo in (0, 32):
            return True
        if xo in (24, 26, 28, 60, 124, 316, 444, 536, 792, 824, 922, 954):
            return _ra(word) != register
        if xo in (40, 104, 266, 339, 467):
            return _rt(word) != register
    return False


def _stable_opcode(image: Rpx, address: int, word: int) -> bool:
    return not image.has_relocation(address, 4 if word >> 26 == 31 else 2)


def _stored_pointer(
    image: Rpx, words, start: int, high: int, low: int, target: int,
) -> Materialization | None:
    high_index = (high - start) // 4
    low_index = (low - start) // 4
    high_word = words[high_index]
    low_word = words[low_index]
    high_register = _rt(high_word)
    if not (high_word >> 26 == 15 and not _ra(high_word)
            and high_word & 0xFFFF == ((target + 0x8000) >> 16) & 0xFFFF
            and (low_word >> 26 == 12 or low_word >> 26 == 14 and high_register)
            and _ra(low_word) == high_register and low_word & 0xFFFF == target & 0xFFFF):
        return None
    if any(not _preserves_register(words[index], high_register)
           or not _stable_opcode(image, start + index * 4, words[index])
           for index in range(high_index + 1, low_index)):
        return None
    carrier = _rt(low_word)
    for index in range(low_index + 1, min(low_index + 20, len(words))):
        address = start + index * 4
        word = words[index]
        if not _stable_opcode(image, address, word):
            break
        op = word >> 26
        if op in (36, 37) and _rt(word) == carrier and _ra(word) not in (0, 2, 13, carrier):
            return Materialization(high, low, address, _ra(word), signed(word & 0xFFFF, 16))
        if op == 31 and (word >> 1) & 1023 == 444 and _rt(word) == carrier == (word >> 11) & 31:
            carrier = _ra(word)
        elif not _preserves_register(word, carrier):
            break
    return None


def _materializations(
    image: Rpx, text: Section, words, slots, highs, lows,
) -> dict[int, Materialization]:
    roots = {}
    for target in sorted(highs.keys() & lows.keys()):
        if target + 12 not in slots:
            continue
        low_sites = lows[target]
        for high in highs[target]:
            first = bisect_left(low_sites, high + 4)
            last = bisect_right(low_sites, high + 92)
            for low in low_sites[first:last]:
                proof = _stored_pointer(image, words, text.address, high, low, target)
                if proof is not None:
                    roots[target] = proof
                    break
            if target in roots:
                break
    return roots


def _table_members(image: Rpx, rodata: Section, roots, slots) -> tuple[dict[int, list[dict]], int]:
    members: dict[int, list[dict]] = defaultdict(list)
    tables = 0
    for root, materialization in roots.items():
        offset = root - rodata.address
        if rodata.data[offset:offset + 12] != bytes(12) or image.has_relocation(root, 12):
            continue
        table_slots = []
        slot = root + 12
        while slot in slots and slot - 4 not in roots:
            adjustment = slot - rodata.address - 4
            if rodata.data[adjustment:adjustment + 4] != bytes(4) or image.has_relocation(slot - 4, 4):
                break
            table_slots.append(slot)
            slot += 8
        if len(table_slots) < 2:
            continue
        tables += 1
        for slot in table_slots:
            members[slots[slot]].append({
                "table": f"0x{root:08x}", "slot": f"0x{slot:08x}",
                "ha_relocation": f"0x{materialization.high:08x}",
                "lo_relocation": f"0x{materialization.low:08x}",
                "store": f"0x{materialization.store:08x}",
                "store_base_register": materialization.base_register,
                "store_linked_displacement": materialization.linked_displacement,
            })
    return members, tables


def _terminal(word: int) -> bool:
    return (not word & 1 and (word >> 26 == 18 or (
        word >> 26 == 19 and (word >> 1) & 1023 in (16, 528) and (word >> 21) & 20 == 20
        and not word & 0xE000
    )))


def _externally_entered(words, text_start: int, code_starts: list[int], code_ends: list[int]) -> set[int]:
    entered = set()
    for index, word in enumerate(words):
        if word >> 26 not in (16, 18):
            continue
        address = text_start + index * 4
        target = branch_target(word, address)
        candidate = bisect_right(code_starts, target) - 1
        if candidate >= 0:
            start, end = code_starts[candidate], code_ends[candidate]
            if start < target < end and not start <= address < end:
                entered.add(start)
    return entered


def discover_vtables(
    image: Rpx, baseline: list[dict], *, admitted: Iterable[dict] = (),
) -> tuple[list[dict], dict]:
    """Return supplemental candidate rows and evidence counts from the supplied RPX."""
    text = text_section(image)
    rodata_sections = [s for s in image.sections if s.name == ".rodata" and _allocated_data(s)]
    if len(rodata_sections) != 1:
        raise ValueError("vtable inventory requires one allocated .rodata section")
    rodata = rodata_sections[0]
    if text.flags & 6 != 6 or text.size != len(text.data) or rodata.size != len(rodata.data):
        raise ValueError("vtable inventory requires executable text and initialized .rodata")

    words = text_words(text)
    slots, fences, highs, lows = _references(image, text, rodata, _ranges(baseline, interior_only=True))
    roots = _materializations(image, text, words, slots, highs, lows)
    members, tables = _table_members(image, rodata, roots, slots)

    protected = _ranges([*baseline, *admitted])
    targets = set()
    rejected: Counter[str] = Counter()
    for address in members:
        if address == image.entry or _overlaps(address, address + 4, protected):
            rejected["known entry or body"] += 1
        elif (address == text.address or image.has_relocation(address - 4, 4)
              or not _terminal(words[(address - text.address) // 4 - 1])):
            rejected["no preceding unrelocated terminal"] += 1
        else:
            targets.add(address)

    bounded = discover(image, candidate_entries=targets, entry_fences=fences) if targets else []
    rejected["incomplete or relocated control flow"] = len(targets) - len(bounded)
    spans = [(int(row["address"], 16), row) for row in bounded
             if not _overlaps(int(row["address"], 16), int(row["address"], 16) + row["size"], protected)]
    rejected["known body overlap"] = len(bounded) - len(spans)
    starts = [address for address, _ in spans]
    ends = [address + row["size"] for address, row in spans]
    if any(end > start for end, start in zip(ends, starts[1:])):
        raise ValueError("vtable inventory found overlapping candidate bodies")
    entered = _externally_entered(words, text.address, starts, ends) if spans else set()
    rejected["external branch into interior"] = len(entered)

    additions = []
    for address, row in spans:
        if address in entered:
            continue
        row["boundary"] = "stored vtable pattern target; contiguous bounded control flow"
        row["discovery_evidence"] = {"mode": "stored-vtable-pattern", "memberships": members[address]}
        additions.append(row)
    return additions, {
        "linked_rodata_slots": len(slots), "linked_code_pointer_targets": len(fences),
        "stored_table_roots": len(roots), "tables": tables, "table_targets": len(members),
        "additions": len(additions), "bytes": sum(row["size"] for row in additions),
        "rejected": dict(rejected),
    }
