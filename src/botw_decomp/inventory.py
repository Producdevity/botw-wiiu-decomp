"""Find bounded direct-call targets for a small reconstruction pilot."""
import array
import hashlib
import sys

from .espresso import decode
from .rpx import Rpx


def signed(value: int, bits: int) -> int:
    return (value ^ (1 << (bits - 1))) - (1 << (bits - 1))


def branch_target(word: int, address: int) -> int:
    if word >> 26 not in (16, 18):
        raise ValueError("expected a direct PowerPC branch")
    bits = 26 if word >> 26 == 18 else 16
    displacement = signed(word & ((1 << bits) - 4), bits)
    return (displacement if word & 2 else address + displacement) & 0xFFFFFFFF


def discover(image: Rpx) -> list[dict]:
    sections = [s for s in image.sections if s.name == ".text" and s.flags & 4 and s.kind == 1]
    if len(sections) != 1:
        raise ValueError("pilot inventory requires one executable section")
    text = sections[0]
    start, end = text.address, text.address + len(text.data)
    if start % 4 or not text.data or len(text.data) % 4 or end > 1 << 32:
        raise ValueError("pilot inventory requires aligned PowerPC text")
    if not start <= image.entry < end or image.entry % 4:
        raise ValueError("RPX entry must be aligned and inside .text")
    words = array.array("I", text.data)
    if words.itemsize != 4:
        raise ValueError("host unsigned-int width is unsupported")
    if sys.byteorder == "little":
        words.byteswap()
    entries = {image.entry}
    for i, word in enumerate(words):
        if word >> 26 in (16, 18) and word & 1:
            address = start + i * 4
            if image.has_relocation(address, 4):
                continue
            target = branch_target(word, address)
            if start <= target < end and target % 4 == 0 and target != address + 4:
                entries.add(target)
    candidates = []
    for entry in sorted(entries):
        seen, pending, calls = set(), [entry], set()
        branches = floats = 0
        loop = False
        valid = True
        while pending and valid:
            address = pending.pop()
            while address not in seen:
                if not entry <= address < min(entry + 4096, end):
                    valid = False
                    break
                if address != entry and address in entries:
                    valid = False
                    break
                seen.add(address)
                word = words[(address - start) // 4]
                op = word >> 26
                if word == 0 or op in (0, 1, 2, 3, 17):
                    valid = False
                    break
                espresso = decode(word) if op in (4, 56, 57, 60, 61) else None
                floats += (op in (48, 49, 50, 51, 52, 53, 54, 55, 59, 63)
                           or (espresso is not None and espresso.floating_point))
                if op in (16, 18):
                    target = branch_target(word, address)
                    if word & 1:
                        if target == address + 4:
                            valid = False
                            break
                        calls.add(target)
                    else:
                        branches += 1
                        loop |= target <= address
                        if target in entries and target != entry:
                            valid = False
                            break
                        pending.append(target)
                        if op == 18 or ((word >> 21) & 20) == 20:
                            break
                elif op == 19:
                    xo = (word >> 1) & 1023
                    if xo not in (0, 16, 33, 129, 150, 193, 225, 257, 289, 417, 449, 528):
                        valid = False
                        break
                    if xo in (16, 528):
                        if word & 1:
                            valid = False
                            break
                        if xo == 528:
                            valid = False
                            break
                        if ((word >> 21) & 20) == 20:
                            break
                        branches += 1
                address += 4
        if not valid or not seen:
            continue
        size = max(seen) + 4 - entry
        if size < 8 or len(seen) * 4 != size:
            continue
        try:
            original = image.read(entry, size)
        except ValueError:
            continue
        if any(call not in entries or entry < call < entry + size for call in calls):
            continue
        category = "calls" if calls else "loops" if loop else "floating-point" if floats else "control-flow" if branches else "integer"
        candidates.append({
            "id": f"fn_{entry:08x}", "address": f"0x{entry:08x}", "size": size,
            "sha256": hashlib.sha256(original).hexdigest(), "category": category,
            "boundary": ("RPX entry" if entry == image.entry else "direct-call target") + "; contiguous bounded control flow",
            "status": "unmatched", "source": f"reconstructions/fn_{entry:08x}.cpp",
            "symbol": f"fn_{entry:08x}",
            "bindings": {f"fn_{call:08x}": f"0x{call:08x}" for call in sorted(calls)},
        })
    return candidates


def select_pilot(candidates: list[dict], per_category: int = 20) -> list[dict]:
    if type(per_category) is not int or per_category <= 0:
        raise ValueError("per_category must be a positive integer")
    selected = []
    for category in ("integer", "floating-point", "loops", "control-flow", "calls"):
        pool = sorted((f for f in candidates if f["category"] == category),
                      key=lambda f: (f["size"], f["address"]))
        # Spread the pilot across the binary instead of harvesting adjacent templates.
        used_pages = set()
        for item in pool:
            page = int(item["address"], 16) >> 12
            if page in used_pages:
                continue
            selected.append(item)
            used_pages.add(page)
            if len(used_pages) == per_category:
                break
    return sorted(selected, key=lambda f: f["address"])
