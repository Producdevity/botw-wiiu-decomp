"""Infer and read source-file (translation unit) ranges in .text.

GHS emits one static initializer per translation unit that needs dynamic
initialization and links .text and .rodata in the same unit order. The RPX keeps
the initializer table as a strictly increasing run of absolute code pointers.
Each unit is laid out as [functions][initializer][out-of-line inline and template
copies], and the copies' .rodata sits just below the unit's main .rodata. So the
cut after initializer k is where .text references to .rodata first rise above
the highest .rodata address that initializer k itself references.
"""
from bisect import bisect_left, bisect_right
import re
import statistics
import struct
from pathlib import Path

from .project import read_json

UNITS_FILE = "config/units.json"
UNIT_ID = re.compile(r"unit_[0-9a-f]{8}\Z")
ADDRESS = re.compile(r"0x[0-9a-f]{8}\Z")
CONFIDENCE = ("high", "medium", "low")
EVIDENCE = ("text-end", "forced", "rodata", "rodata+calls", "calls")
MIN_TABLE = 64
NEAR = 0x20000
OWN_SPREAD = 0x4000
_RECORD = struct.Struct(">IBiIIHBB")
_BLR = 0x4E800020


def _relocations(image):
    for index in range(len(image.sorted_relocation_sites)):
        site, kind, addend, value, *_ = _RECORD.unpack_from(image.relocation_records, index * _RECORD.size)
        yield site, kind, (value + addend) & 0xFFFFFFFF


def _section(image, name):
    sections = [s for s in image.sections if s.name == name]
    if len(sections) != 1:
        raise ValueError(f"expected one {name} section")
    return sections[0]


def initializer_table(image, minimum: int = MIN_TABLE) -> tuple[int, list[int]]:
    """Longest run of consecutive ADDR32 code pointers outside .text that strictly increases."""
    text = _section(image, ".text")
    start, end = text.address, text.address + text.size
    best, run = [], []
    for site, kind, destination in _relocations(image):
        inside = kind == 1 and start <= destination < end and not start <= site < end
        if inside and run and site == run[-1][0] + 4 and destination > run[-1][1]:
            run.append((site, destination))
            continue
        if len(run) > len(best):
            best = run
        run = [(site, destination)] if inside else []
    if len(run) > len(best):
        best = run
    if len(best) < minimum:
        raise ValueError("no static-initializer table found")
    return best[0][0], [destination for _, destination in best]


def _words(text) -> tuple[int, ...]:
    return struct.unpack(f">{text.size // 4}I", text.data)


def _branch_targets(words, base, end) -> tuple[list[int], list[tuple[int, int]]]:
    targets, calls = set(), []
    for index, word in enumerate(words):
        if word >> 26 == 18 and not word & 2:
            displacement = word & 0x3FFFFFC
            if displacement & 0x2000000:
                displacement -= 0x4000000
            target = base + 4 * index + displacement
            if base <= target < end and word & 1:
                targets.add(target)
                calls.append((base + 4 * index, target))
    return sorted(targets), calls


def infer(image, extra_starts=(), minimum: int = MIN_TABLE) -> list[dict]:
    """Return units ordered by address; every unit holds exactly one initializer."""
    text = _section(image, ".text")
    rodata = _section(image, ".rodata")
    base, limit = text.address, text.address + text.size
    words = _words(text)
    table, initializers = initializer_table(image, minimum)
    table_end = table + 4 * len(initializers)
    ends = []
    for entry in initializers:
        address = entry
        while words[(address - base) // 4] != _BLR:
            address += 4
        ends.append(address + 4)
    targets, calls = _branch_targets(words, base, limit)
    starts = set(targets) | set(initializers) | {a for a in extra_starts if base <= a < limit}
    references = []
    for site, kind, destination in _relocations(image):
        if kind in (1, 4) and base <= destination < limit:
            starts.add(destination)
        elif (base <= site < limit and kind in (1, 4, 6)
              and rodata.address <= destination < rodata.address + rodata.size
              and not table <= destination < table_end):
            references.append((site, destination))
    starts = sorted(starts)
    references.sort()
    sites = [site for site, _ in references]
    edges = sorted((min(a, b), max(a, b)) for a, b in calls)
    edge_lows = [low for low, _ in edges]

    def crossings(low: int, high: int, cut: int) -> int:
        index, count = bisect_left(edge_lows, low), 0
        while index < len(edges) and edges[index][0] < cut:
            if cut <= edges[index][1] < high:
                count += 1
            index += 1
        return count

    boundaries = []
    for k in range(len(initializers) - 1):
        following = initializers[k + 1]
        own = [d for _, d in references[bisect_left(sites, initializers[k]):bisect_left(sites, ends[k])]]
        gap = references[bisect_left(sites, ends[k]):bisect_left(sites, following)]
        if own:
            middle = statistics.median(own)
            own = [d for d in own if abs(d - middle) < OWN_SPREAD] or own
            threshold = max(own)
            gap = [(s, d) for s, d in gap if abs(d - threshold) < NEAR]
        errors = None
        low, high = ends[k], following
        if own and gap:
            count = len(gap)
            above = [0] * (count + 1)
            for i, (_, d) in enumerate(gap):
                above[i + 1] = above[i] + (d > threshold)
            below = [0] * (count + 1)
            for i in range(count - 1, -1, -1):
                below[i] = below[i + 1] + (gap[i][1] <= threshold)
            errors, split = min((above[j] + below[j], j) for j in range(count + 1))
            low = gap[split - 1][0] + 1 if split else ends[k]
            high = gap[split][0] if split < count else following
        candidates = starts[bisect_left(starts, low):bisect_right(starts, high)] or [high]
        boundaries.append({"low": low, "high": high, "candidates": candidates,
                           "errors": errors, "references": len(gap) if own else 0})
    for k, boundary in enumerate(boundaries):
        lower = boundaries[k - 1]["candidates"][0] if k else base
        upper = boundaries[k + 1]["high"] if k + 1 < len(boundaries) else limit
        scored = [(crossings(lower, upper, c), c) for c in boundary["candidates"]]
        boundary["cut"] = min(scored)[1]
        boundary["confidence"], boundary["evidence"] = _grade(boundary)
    units, start = [], base
    for k, entry in enumerate(initializers):
        if k + 1 < len(initializers):
            boundary = boundaries[k]
            end = boundary["cut"]
        else:
            boundary = {"confidence": "high", "evidence": "text-end", "candidates": [limit]}
            end = limit
        unit = {"id": f"unit_{entry:08x}", "start": f"0x{start:08x}", "end": f"0x{end:08x}",
                "initializer": f"0x{entry:08x}", "end_confidence": boundary["confidence"],
                "end_evidence": boundary["evidence"]}
        if len(boundary["candidates"]) > 1:
            unit["end_window"] = [f"0x{boundary['candidates'][0]:08x}", f"0x{boundary['candidates'][-1]:08x}"]
        units.append(unit)
        start = end
    for previous, unit in zip([None, *units], units):
        grades = [unit["end_confidence"]] + ([previous["end_confidence"]] if previous else [])
        unit["confidence"] = max(grades, key=CONFIDENCE.index)
    return units


def _grade(boundary: dict) -> tuple[str, str]:
    single = len(boundary["candidates"]) == 1
    if boundary["errors"] is None:
        if single and boundary["high"] == boundary["low"]:
            return "high", "forced"
        return "low", "calls"
    evidence = "rodata" if single else "rodata+calls"
    if boundary["errors"] == 0 and boundary["references"] >= 2 and single:
        return "high", evidence
    if boundary["errors"] <= max(1, boundary["references"] // 8):
        return "medium", evidence
    return "low", evidence


def name_units(image, units: list[dict]) -> None:
    """List the .cpp paths embedded in .rodata whose every reference lies in one unit."""
    rodata = _section(image, ".rodata")
    paths = {}
    for match in re.finditer(rb"[\x20-\x7e]{1,255}?\.cpp\0", rodata.data):
        start = rodata.data.rfind(b"\0", 0, match.end() - 1) + 1
        text = rodata.data[start:match.end() - 1].decode("ascii")
        if re.fullmatch(r"[A-Za-z0-9_:\\/.\- ]+\.cpp", text):
            paths[rodata.address + start] = text
    starts = [int(unit["start"], 16) for unit in units]
    found = {}
    for site, kind, destination in _relocations(image):
        if destination in paths and kind in (4, 6):
            index = bisect_right(starts, site) - 1
            if index >= 0 and site < int(units[index]["end"], 16):
                found.setdefault(destination, set()).add(index)
    files = {}
    for address, indices in sorted(found.items()):
        if len(indices) == 1:
            files.setdefault(indices.pop(), {}).setdefault(normalize_path(paths[address]), address)
    for index, entries in files.items():
        units[index]["files"] = [{"path": path, "string": f"0x{address:08x}"}
                                 for path, address in sorted(entries.items())]


def normalize_path(path: str) -> str:
    path = path.replace("\\", "/")
    marker = "/trunk/"
    if marker in path:
        path = path[path.index(marker) + len(marker):]
    while path.startswith("../") or path.startswith("./"):
        path = path[path.index("/") + 1:]
    return path.replace("/./", "/")


def validate(document: dict, target: dict) -> list[dict]:
    if document.get("schema_version") != 1 or document.get("target") != target["id"]:
        raise ValueError("unsupported units file")
    sections = [(int(s["address"], 16), int(s["address"], 16) + s["size"]) for s in target["text"]]
    units, previous = document["units"], 0
    required = {"id", "start", "end", "initializer", "confidence", "end_confidence", "end_evidence"}
    optional = {"end_window", "files"}
    for unit in units:
        if not required <= set(unit) <= required | optional:
            raise ValueError(f"invalid unit fields: {unit.get('id')}")
        if not all(ADDRESS.fullmatch(unit[key]) for key in ("start", "end", "initializer")):
            raise ValueError(f"invalid unit address: {unit['id']}")
        start, end, entry = (int(unit[key], 16) for key in ("start", "end", "initializer"))
        if unit["id"] != f"unit_{entry:08x}" or not start <= entry < end or start < previous:
            raise ValueError(f"unit out of order or without its initializer: {unit['id']}")
        if not any(low <= start and end <= high for low, high in sections):
            raise ValueError(f"unit outside .text: {unit['id']}")
        if (unit["confidence"] not in CONFIDENCE or unit["end_confidence"] not in CONFIDENCE
                or unit["end_evidence"] not in EVIDENCE):
            raise ValueError(f"invalid unit confidence or evidence: {unit['id']}")
        if "end_window" in unit:
            low, high = (int(value, 16) for value in unit["end_window"])
            if not low <= end <= high or low == high:
                raise ValueError(f"unit end outside its window: {unit['id']}")
        for entry in unit.get("files", []):
            if (set(entry) != {"path", "string"} or not isinstance(entry["path"], str)
                    or not entry["path"].endswith(".cpp") or not ADDRESS.fullmatch(entry["string"])):
                raise ValueError(f"invalid unit file: {unit['id']}")
        previous = end
    return units


def read(root: Path, target: dict) -> list[dict]:
    path = root / UNITS_FILE
    return validate(read_json(path), target) if path.is_file() else []


def coverage(units: list[dict], target: dict) -> dict[str, int]:
    """Bytes of .text per unit confidence, plus bytes with no unit."""
    total = sum(section["size"] for section in target["text"])
    result = {name: 0 for name in CONFIDENCE}
    for unit in units:
        result[unit["confidence"]] += int(unit["end"], 16) - int(unit["start"], 16)
    result["none"] = total - sum(result.values())
    return result
