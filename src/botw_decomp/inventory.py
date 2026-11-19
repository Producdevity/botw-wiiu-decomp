"""Find bounded PowerPC functions from independently evidenced entries."""
import array
from bisect import bisect_left
from collections.abc import Set
import hashlib
import sys

from .espresso import decode
from .import_relocations import IMPORT_PROFILE, MIXED_PROFILE
from .rpx import DATA_PROFILE, Rpx, RpxError, Section, reference_bytes


def signed(value: int, bits: int) -> int:
    return (value ^ (1 << (bits - 1))) - (1 << (bits - 1))


def branch_target(word: int, address: int) -> int:
    if word >> 26 not in (16, 18):
        raise ValueError("expected a direct PowerPC branch")
    bits = 26 if word >> 26 == 18 else 16
    displacement = signed(word & ((1 << bits) - 4), bits)
    return (displacement if word & 2 else address + displacement) & 0xFFFFFFFF


def text_section(image: Rpx) -> Section:
    sections = [s for s in image.sections if s.name == ".text" and s.flags & 4 and s.kind == 1]
    if len(sections) != 1:
        raise ValueError("pilot inventory requires one executable section")
    text = sections[0]
    start, end = text.address, text.address + len(text.data)
    if start % 4 or not text.data or len(text.data) % 4 or end > 1 << 32:
        raise ValueError("pilot inventory requires aligned PowerPC text")
    if not start <= image.entry < end or image.entry % 4:
        raise ValueError("RPX entry must be aligned and inside .text")
    return text


def text_words(text: Section) -> array.array:
    words = array.array("I", text.data)
    if words.itemsize != 4:
        raise ValueError("host unsigned-int width is unsupported")
    if sys.byteorder == "little":
        words.byteswap()
    return words


def relocation_contract(image: Rpx, entry: int, size: int, imports: dict[int, int]) -> dict:
    """Describe a span's original relocations with an existing verifier profile."""
    first = bisect_left(image.sorted_relocation_sites, entry)
    last = bisect_left(image.sorted_relocation_sites, entry + size)
    sites = image.sorted_relocation_sites[first:last]
    if not sites:
        return {}
    if set(imports) - set(sites):
        raise RpxError("import call without an original import relocation")
    if all(site in image.import_branches for site in sites):
        profile, data, linked = IMPORT_PROFILE, (), image.import_references(entry, size)
    elif any(site in image.import_branches for site in sites):
        profile = MIXED_PROFILE
        data, linked = image.mixed_references(entry, size)
    else:
        profile, data, linked = DATA_PROFILE, image.data_references(entry, size), ()
    row = {"original_profile": profile}
    if data:
        row["data_bindings"] = {f"data_{item['destination']:08x}": f"0x{item['destination']:08x}"
                                for item in sorted(data, key=lambda item: item["destination"])}
        row["data_relocations"] = [
            {"offset": item["site"] - entry, "symbol": f"data_{item['destination']:08x}",
             "type": item["type"]} for item in data]
    if linked:
        row["import_relocations"] = [
            {"offset": offset, "symbol": symbol, "library": library, "name": name}
            for offset, symbol, library, name, _target in linked]
        if any(imports.get(entry + offset) != target for offset, _, _, _, target in linked):
            raise RpxError("import call target disagrees with its relocation")
    return row


def discover(
    image: Rpx, *, candidate_entries: Set[int] | None = None,
    entry_fences: Set[int] = frozenset(), original_relocations: bool = False,
) -> list[dict]:
    """Bounded functions; original_relocations also admits spans whose relocations
    all fit the data-address or import-REL24 profiles."""
    text = text_section(image)
    start, end = text.address, text.address + len(text.data)
    words = text_words(text)
    if candidate_entries is not None:
        entry_fences = entry_fences | candidate_entries
    if any(type(address) is not int or address % 4 or not start <= address < end
           for address in entry_fences):
        raise ValueError("inventory entries and fences must be aligned and inside .text")

    entries = {image.entry, *entry_fences}
    direct_entries = {image.entry}
    for i, word in enumerate(words):
        if word >> 26 in (16, 18) and word & 1:
            address = start + i * 4
            if image.has_relocation(address, 4):
                continue
            target = branch_target(word, address)
            if start <= target < end and target % 4 == 0 and target != address + 4:
                direct_entries.add(target)
    entries.update(direct_entries)
    if original_relocations:
        # Relocated spans need stronger boundary evidence: any address taken into
        # .text (virtual tables, function-pointer loads) also fences the walk.
        entries.update(target for target in image.text_address_targets()
                       if start <= target < end and target % 4 == 0)
    candidates = []
    for entry in sorted(direct_entries if candidate_entries is None else candidate_entries):
        seen, pending, calls, imports = set(), [entry], set(), {}
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
                    if original_relocations and address in image.import_branches:
                        imports[address] = image.import_branches[address][2]
                        if not word & 1:
                            break
                        address += 4
                        continue
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
            relocated = original_relocations and image.has_relocation(entry, size)
            contract = relocation_contract(image, entry, size, imports) if relocated else {}
            if imports and not contract:
                continue
            original = image.read(entry, size, **({"profile": contract["original_profile"]}
                                                   if contract else {}))
        except ValueError:
            continue
        if any(call not in entries or entry < call < entry + size for call in calls):
            continue
        category = "calls" if calls or imports else "loops" if loop else "floating-point" if floats else "control-flow" if branches else "integer"
        boundary = ("RPX entry" if entry == image.entry else
                    "direct-call target" if entry in direct_entries else "supplied entry")
        targets = calls | set(imports.values())
        row = {
            "id": f"fn_{entry:08x}", "address": f"0x{entry:08x}", "size": size,
            "sha256": hashlib.sha256(original).hexdigest(), "category": category,
            "boundary": boundary + "; contiguous bounded control flow",
            "status": "unmatched", "source": f"reconstructions/fn_{entry:08x}.cpp",
            "symbol": f"fn_{entry:08x}",
            "bindings": {f"fn_{call:08x}": f"0x{call:08x}" for call in sorted(targets)},
        }
        if contract:
            row["boundary"] += "; original relocations fit " + contract["original_profile"]
            row.update(contract)
            if reference_bytes(image, row) != original:
                raise RpxError("relocated reference does not reproduce its original bytes")
        candidates.append(row)
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
