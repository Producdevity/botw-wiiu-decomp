"""Private investigation context; never an input to reference acceptance."""

import hashlib
from pathlib import Path

from .disassembly import disassemble
from .project import write_json
from .rpx import Rpx, RpxError


PREVIEW_LIMIT = 256


def _text_section(image: Rpx, address: int, size: int):
    if (type(address) is not int or address < 0 or address % 4 or
            type(size) is not int or size <= 0 or size % 4 or address + size > 1 << 32):
        raise RpxError("invalid aligned preview address or size")
    sections = [s for s in image.sections if s.name == ".text" and s.kind == 1 and
                s.flags & 6 == 6 and s.address <= address and address + size <= s.address + len(s.data)]
    if len(sections) != 1:
        raise RpxError("callee is not in exactly one executable .text section; imports and other sections are not code previews")
    section = sections[0]
    end = section.address + len(section.data)
    if section.address < 0 or section.address % 4 or end > 1 << 32 or len(section.data) % 4:
        raise RpxError("invalid aligned .text range")
    if any(s is not section and s.flags & 2 and
           s.address < address + size and address < s.address + s.size
           for s in image.sections):
        raise RpxError("preview overlaps another allocated section")
    return section


def preview_bytes(image: Rpx, address: int, limit: int = PREVIEW_LIMIT) -> tuple[bytes, list[dict]]:
    """Read unchanged .text bytes for an explicitly unverified boundary preview."""
    if type(limit) is not int or not 0 < limit <= PREVIEW_LIMIT or limit % 4:
        raise RpxError("invalid aligned preview limit")
    section = _text_section(image, address, 4)
    size = min(limit, section.address + len(section.data) - address)
    _text_section(image, address, size)
    relocations = [{"address": f"0x{site:08x}", "width": stop - site}
                   for site, stop in zip(image.sorted_relocation_sites, image.sorted_relocation_ends)
                   if site < address + size and stop > address]
    offset = address - section.address
    return section.data[offset:offset + size], relocations


def _source(root: Path, path: str) -> dict:
    return {"source": path, "source_exists": (root / path).is_file()}


def _reference(root: Path, row: dict) -> dict:
    return {"id": row["id"], "address": row["address"], "size": row["size"],
            **_source(root, row["source"])}


def write_context(root: Path, path: Path, row: dict, rows: dict[str, dict], image: Rpx) -> dict:
    callers = [_reference(root, other) for other in rows.values()
               if int(row["address"], 16) in
               (int(value, 16) for value in other.get("bindings", {}).values())]
    callees = []
    previews = path / "callees"
    previews.mkdir(parents=True, exist_ok=True)
    for symbol, value in sorted(row.get("bindings", {}).items()):
        address = int(value, 16)
        known = rows.get(symbol)
        item = ({**_reference(root, known), "manifest_known": True} if known else
                {"id": symbol, "address": value, "manifest_known": False,
                 **_source(root, f"reconstructions/{symbol}.cpp")})
        preview_path = previews / f"{symbol}.txt"
        # Never leave a prior successful preview beside a newly skipped entry.
        preview_path.unlink(missing_ok=True)
        try:
            if known:
                _text_section(image, address, known["size"])
                data = image.read(address, known["size"])
                if hashlib.sha256(data).hexdigest() != known["sha256"]:
                    raise ValueError("callee manifest hash disagrees with supplied RPX")
                label = "VERIFIED_MANIFEST_SPAN"
                relocations = []
            else:
                limit = PREVIEW_LIMIT
                for other in rows.values():
                    start = int(other["address"], 16)
                    if start < address < start + other["size"]:
                        raise ValueError("callee address is inside an existing manifest span")
                    if address < start:
                        limit = min(limit, start - address)
                data, relocations = preview_bytes(image, address, limit)
                label = "UNVERIFIED_BOUNDARY"
            header = [f"PRIVATE AGENT CONTEXT: {label}",
                      "Not acceptance evidence. Names and types remain inferred.",
                      f"Original bytes at 0x{address:08x}, {len(data)} bytes; no relocation applied or masked."]
            if label == "UNVERIFIED_BOUNDARY":
                header.append("At most 256 bytes; may include adjacent code or stop inside a function.")
            for relocation in relocations:
                header.append(f"ORIGINAL_RPX_RELOCATION {relocation['address']} width={relocation['width']}; raw instruction fields may be unresolved.")
            preview_path.write_text("\n".join(header) + "\n\n" + disassemble(data, address, symbol), encoding="utf-8")
            item.update({"preview": str(preview_path.relative_to(path)), "preview_label": label,
                         "preview_size": len(data), "original_relocations": relocations})
        except (ValueError, OSError) as exc:
            item["preview_skipped"] = str(exc)
        callees.append(item)
    result = {"schema_version": 1, "function": row["id"],
              "private": "Do not publish this context or any packet bytes/disassembly.",
              "scope": "Manifest bindings only; callers/callees are incomplete. Context is agent input, not machine proof. Names and types remain inferred.",
              "source": _source(root, row["source"]),
              "shared_headers": [str(p.relative_to(root)) for p in sorted((root / "include/botw").rglob("*.h")) if p.is_file()],
              "callers": sorted(callers, key=lambda item: item["id"]), "callees": callees}
    write_json(path / "context.json", result)
    return result
