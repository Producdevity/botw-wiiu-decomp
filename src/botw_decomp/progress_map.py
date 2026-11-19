"""Render exact coverage as a treemap of inferred source units in .text."""

from __future__ import annotations

from bisect import bisect_right
from pathlib import Path

from . import units as unit_data

REGION = 1 << 20
BLOCK = 1 << 15
WIDTH, HEIGHT, LEGEND = 1000, 500, 36
OUTLINE_AREA = 9
STATES = (
    ("matched", "#2ea043", "Matched"),
    ("admitted", "#1f6feb", "Ready to reconstruct"),
    ("excluded", "#30363d", "Not yet admitted"),
)


def _worst(row: list[float], side: float) -> float:
    total = sum(row)
    return max(max(row) * side * side / (total * total), total * total / (side * side * min(row)))


def squarify(sizes: list[int], x: float, y: float, w: float, h: float) -> list[tuple[float, float, float, float]]:
    """Squarified treemap (Bruls et al.); sizes must be positive, rectangles keep input order."""
    if not sizes or any(size <= 0 for size in sizes) or w <= 0 or h <= 0:
        raise ValueError("treemap needs positive sizes and area")
    scale = w * h / sum(sizes)
    areas = [size * scale for size in sizes]
    rects, index = [], 0
    while index < len(areas):
        side = min(w, h)
        row = [areas[index]]
        index += 1
        while index < len(areas) and _worst(row + [areas[index]], side) <= _worst(row, side):
            row.append(areas[index])
            index += 1
        span = sum(row) / side
        offset = 0.0
        for area in row:
            if w >= h:
                rects.append((x, y + offset, span, area / span))
            else:
                rects.append((x + offset, y, area / span, span))
            offset += area / span
        if w >= h:
            x, w = x + span, w - span
        else:
            y, h = y + span, h - span
    return rects


def tiles(target: dict, units: list[dict]) -> list[tuple[int, int]]:
    """Inferred source units, with 32 KiB blocks for .text that no unit covers."""
    spans = sorted((int(unit["start"], 16), int(unit["end"], 16)) for unit in units)
    result = []

    def blocks(cursor: int, stop: int) -> None:
        while cursor < stop:
            end = min(stop, cursor - cursor % BLOCK + BLOCK)
            result.append((cursor, end))
            cursor = end

    for section in target["text"]:
        cursor = int(section["address"], 16)
        stop = cursor + section["size"]
        for start, end in spans:
            if end <= int(section["address"], 16) or start >= stop:
                continue
            if start < cursor or end > stop:
                raise ValueError("units overlap or leave .text")
            blocks(cursor, start)
            result.append((start, end))
            cursor = end
        blocks(cursor, stop)
    return result


def tile_states(target: dict, rows: dict, published: set[str],
                units: list[dict] = ()) -> dict[int, dict[str, int]]:
    """Bytes per tile of .text in each state, keyed by tile start."""
    layout = tiles(target, list(units))
    starts = [start for start, _ in layout]
    states = {start: {name: 0 for name, _, _ in STATES} for start in starts}

    def add(start: int, end: int, state: str, sign: int = 1) -> None:
        index = bisect_right(starts, start) - 1
        while start < end:
            if index < 0 or index >= len(layout) or not layout[index][0] <= start < layout[index][1]:
                raise ValueError("references lie outside .text")
            stop = min(end, layout[index][1])
            states[layout[index][0]][state] += sign * (stop - start)
            start, index = stop, index + 1

    for tile_start, tile_end in layout:
        add(tile_start, tile_end, "excluded")
    previous = 0
    for key, row in sorted(rows.items(), key=lambda item: int(item[1]["address"], 16)):
        start = int(row["address"], 16)
        if start < previous:
            raise ValueError(f"references overlap: {key}")
        previous = start + row["size"]
        add(start, previous, "matched" if key in published else "admitted")
        add(start, previous, "excluded", -1)
    return states


def _box(x: float, y: float, w: float, h: float) -> str:
    return "M%.1f %.1fh%.1fv%.1fh%.1fz" % (x, y, w, h, -w)


def render(target: dict, rows: dict, published: set[str], units: list[dict] = ()) -> str:
    states = tile_states(target, rows, published, units)
    totals = {name: sum(counts[name] for counts in states.values()) for name, _, _ in STATES}
    whole = sum(totals.values())
    regions: dict[int, list[int]] = {}
    for tile in sorted(states):
        regions.setdefault(tile - tile % REGION, []).append(tile)
    names = sorted(regions)
    parts = [f'<svg xmlns="http://www.w3.org/2000/svg" width="{WIDTH}" height="{HEIGHT + LEGEND}" '
             f'viewBox="0 0 {WIDTH} {HEIGHT + LEGEND}" role="img" aria-label="Exact coverage map">',
             f'<title>Exact coverage by inferred source unit</title>',
             f'<rect width="{WIDTH}" height="{HEIGHT + LEGEND}" fill="#0d1117"/>']
    fills = {name: [] for name, _, _ in STATES}
    tile_outlines, region_outlines = [], []
    region_sizes = [sum(sum(states[t].values()) for t in regions[name]) for name in names]
    for name, (rx, ry, rw, rh) in zip(names, squarify(region_sizes, 0, 0, WIDTH, HEIGHT)):
        members = regions[name]
        sizes = [sum(states[tile].values()) for tile in members]
        for tile, (bx, by, bw, bh) in zip(members, squarify(sizes, rx + 1, ry + 1, rw - 2, rh - 2)):
            counts = sorted(((count, state) for state, count in states[tile].items() if count),
                            key=lambda item: -item[0])
            for (_, state), rect in zip(counts, squarify([count for count, _ in counts], bx, by, bw, bh)):
                fills[state].append(_box(*rect))
            if bw * bh >= OUTLINE_AREA:
                tile_outlines.append(_box(bx, by, bw, bh))
        region_outlines.append(_box(rx, ry, rw, rh))
    for state, color, _ in STATES:
        if fills[state]:
            parts.append(f'<path fill="{color}" d="{"".join(fills[state])}"/>')
    parts.append(f'<path fill="none" stroke="#0d1117" stroke-width="0.6" d="{"".join(tile_outlines)}"/>')
    parts.append(f'<path fill="none" stroke="#0d1117" stroke-width="2" d="{"".join(region_outlines)}"/>')
    x = 8
    parts.append('<g font-family="-apple-system,Segoe UI,Helvetica,Arial,sans-serif" font-size="13" fill="#e6edf3">')
    for state, color, label in STATES:
        text = f"{label} {totals[state] / whole:.2%}"
        parts.append(f'<rect x="{x}" y="{HEIGHT + 12}" width="12" height="12" rx="2" fill="{color}"/>'
                     f'<text x="{x + 18}" y="{HEIGHT + 23}">{text}</text>')
        x += 18 + 8 * len(text) + 24
    parts.append("</g></svg>\n")
    return "".join(parts)


def write_map(directory: Path, target: dict, rows: dict, root: Path) -> None:
    published = {key for key, row in rows.items() if (root / row["source"]).is_file()}
    units = unit_data.read(root, target)
    (directory / "progress-map.svg").write_text(render(target, rows, published, units), encoding="utf-8")
