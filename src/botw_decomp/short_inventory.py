"""Opt-in discovery of short direct-tail adapters and single-instruction leaves."""
from __future__ import annotations

import array
from bisect import bisect_right
from collections import Counter
import hashlib
import sys
from typing import Any

from .inventory import branch_target, discover
from .rpx import Rpx


BLR = 0x4E800020
ADAPTER_PRIMARY = frozenset((
    7, 8, 10, 11, 12, 13, 14, 15, 20, 21, 23, 24, 25, 26, 27, 28, 29,
    32, 34, 36, 38, 40, 42, 44,
))
ADAPTER_INTEGER_XO = frozenset((
    24, 26, 28, 40, 60, 104, 124, 266, 316, 444, 536, 792, 824, 922, 954,
))


def _adapter_instruction(word: int) -> bool:
    opcode = word >> 26
    if opcode in ADAPTER_PRIMARY:
        return True
    xo = (word >> 1) & 1023
    if opcode != 31 or xo not in ADAPTER_INTEGER_XO:
        return False
    return xo not in (26, 104, 922, 954) or (word >> 11) & 31 == 0


def _recognizable_entry(word: int) -> bool:
    # Entry-only evidence also accepts mflr r0 or stwu r1,-frame(r1).
    return (word in (BLR, 0x7C0802A6) or _adapter_instruction(word)
            or word >> 16 == 0x9421 and bool(word & 0x8000) and word & 7 == 0)


def discover_extended(
    image: Rpx, *, short_tails: bool = False, blr_leaves: bool = False,
    max_size: int = 64, tail_target_policy: str = "bounded",
) -> tuple[list[dict[str, Any]], dict[str, Any]]:
    """Append opt-in candidates without changing canonical discovery rows.

    The bounded policy requires a baseline or single-blr destination body.
    The direct-call policy also accepts independently called entry addresses;
    that evidence does not establish the destination's complete body or ABI.
    """
    if type(short_tails) is not bool or type(blr_leaves) is not bool:
        raise ValueError("opt-in flags must be bool")
    if type(max_size) is not int or not 4 <= max_size <= 256 or max_size % 4:
        raise ValueError("max_size must be aligned and between 4 and 256")
    if tail_target_policy not in ("bounded", "direct-call"):
        raise ValueError("unknown tail target policy")
    baseline = discover(image)
    if not short_tails and not blr_leaves:
        return baseline, {"enabled": False, "baseline_functions": len(baseline), "additions": 0}

    section, = [s for s in image.sections if s.name == ".text" and s.flags & 4 and s.kind == 1]
    start, end = section.address, section.address + len(section.data)
    words = array.array("I", section.data)
    if words.itemsize != 4:
        raise ValueError("host unsigned-int width is unsupported")
    if sys.byteorder == "little":
        words.byteswap()
    entries = {image.entry}
    calls: dict[int, list[int]] = {}
    incoming: set[int] = set()
    for index, word in enumerate(words):
        if word >> 26 not in (16, 18):
            continue
        address = start + index * 4
        if image.has_relocation(address, 4):
            continue
        target = branch_target(word, address)
        if not start <= target < end or target % 4:
            continue
        incoming.add(target)
        if word & 1 and target != address + 4:
            entries.add(target)
            calls.setdefault(target, []).append(address)

    bounded = {int(row["address"], 16): row for row in baseline}
    ranges = sorted((address, address + row["size"]) for address, row in bounded.items())
    starts = [address for address, _ in ranges]

    def in_bounded_interior(address: int) -> bool:
        index = bisect_right(starts, address) - 1
        return index >= 0 and ranges[index][0] < address < ranges[index][1]

    def eligible_entry(address: int) -> bool:
        return (address in calls and not image.has_relocation(address, 4)
                and not in_bounded_interior(address))

    leaves: set[int] = set()
    rejected: Counter[str] = Counter()
    for entry in sorted(calls):
        if entry in bounded:
            continue
        if not eligible_entry(entry):
            rejected["entry relocation or bounded overlap"] += 1
            continue
        if words[(entry - start) // 4] == BLR:
            leaves.add(entry)

    additions: list[dict[str, Any]] = []
    for entry in sorted(calls):
        if entry in bounded or not eligible_entry(entry):
            continue
        mode = None
        target = None
        if entry in leaves:
            if not blr_leaves:
                continue
            size, mode = 4, "single-blr"
        elif short_tails:
            address = entry
            while address < min(entry + max_size, end):
                if address != entry and (address in entries or address in incoming):
                    rejected["interior direct target"] += 1
                    break
                if image.has_relocation(address, 4):
                    rejected["candidate original relocation"] += 1
                    break
                word = words[(address - start) // 4]
                if word >> 26 == 18 and not word & 1:
                    target = branch_target(word, address)
                    size = address + 4 - entry
                    if entry <= target < entry + size:
                        rejected["self or interior tail"] += 1
                    elif not (eligible_entry(target) and (
                            target in bounded or target in leaves
                            or _recognizable_entry(words[(target - start) // 4]))):
                        rejected["tail lacks independent executable direct-call entry"] += 1
                    elif (tail_target_policy == "bounded"
                          and target not in bounded and target not in leaves):
                        rejected["tail target lacks bounded body"] += 1
                    else:
                        mode = "direct-tail"
                    break
                if not _adapter_instruction(word):
                    rejected["not straight-line integer adapter"] += 1
                    break
                address += 4
            else:
                rejected["span limit or text end"] += 1
        if mode is None:
            continue
        try:
            original = image.read(entry, size)
        except ValueError:
            rejected["original read rejected"] += 1
            continue
        bindings = {} if target is None else {f"fn_{target:08x}": f"0x{target:08x}"}
        target_proof = None
        if target is not None:
            target_proof = ("baseline bounded body" if target in bounded else
                            "single-blr body" if target in leaves else
                            "independent direct-call entry only")
        additions.append({
            "id": f"fn_{entry:08x}", "address": f"0x{entry:08x}", "size": size,
            "sha256": hashlib.sha256(original).hexdigest(),
            "category": "calls" if target is not None else "integer",
            "boundary": "direct-call target; contiguous fully visited " + mode,
            "status": "unmatched", "source": f"reconstructions/fn_{entry:08x}.cpp",
            "symbol": f"fn_{entry:08x}", "bindings": bindings,
            "discovery_evidence": {
                "mode": mode, "entry_callsite": f"0x{calls[entry][0]:08x}",
                "entry_direct_call_count": len(calls[entry]), "max_size": max_size,
                "tail_target_policy": tail_target_policy, "tail_target_proof": target_proof,
                "tail_target_callsite": None if target is None else f"0x{calls[target][0]:08x}",
                "limitations": "Boundary/binding evidence only; no original C++ ABI or return-type inference.",
            },
        })

    all_ranges = sorted((int(row["address"], 16), int(row["address"], 16) + row["size"], row["id"])
                        for row in baseline + additions)
    overlapping: set[str] = set()
    for left, right in zip(all_ranges, all_ranges[1:]):
        if left[1] > right[0]:
            overlapping.update((left[2], right[2]))
    additions = [row for row in additions if row["id"] not in overlapping]
    return baseline + additions, {
        "enabled": True, "baseline_functions": len(baseline), "direct_call_entries": len(calls),
        "additions": len(additions),
        "modes": dict(Counter(row["discovery_evidence"]["mode"] for row in additions)),
        "tail_target_proofs": dict(Counter(row["discovery_evidence"]["tail_target_proof"]
                                           for row in additions if row["bindings"])),
        "rejected": dict(rejected), "overlap_rejected": sorted(overlapping),
    }
