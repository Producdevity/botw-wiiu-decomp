"""Render exact coverage as a treemap of .text address ranges."""

from __future__ import annotations

from pathlib import Path

REGION = 1 << 20
BLOCK = 1 << 15
WIDTH, HEIGHT, LEGEND = 1000, 500, 36
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


def block_states(target: dict, rows: dict, published: set[str]) -> dict[int, dict[str, int]]:
    """Bytes per 32 KiB block of .text in each state."""
    blocks: dict[int, dict[str, int]] = {}

    def add(start: int, end: int, state: str, sign: int = 1) -> None:
        while start < end:
            block = start - start % BLOCK
            stop = min(end, block + BLOCK)
            counts = blocks.setdefault(block, {name: 0 for name, _, _ in STATES})
            counts[state] += sign * (stop - start)
            start = stop

    for section in target["text"]:
        start = int(section["address"], 16)
        add(start, start + section["size"], "excluded")
    previous = 0
    for key, row in sorted(rows.items(), key=lambda item: int(item[1]["address"], 16)):
        start = int(row["address"], 16)
        if start < previous:
            raise ValueError(f"references overlap: {key}")
        previous = start + row["size"]
        add(start, previous, "matched" if key in published else "admitted")
        add(start, previous, "excluded", -1)
    if any(count < 0 for counts in blocks.values() for count in counts.values()):
        raise ValueError("references lie outside .text")
    return blocks


def render(target: dict, rows: dict, published: set[str]) -> str:
    blocks = block_states(target, rows, published)
    totals = {name: sum(counts[name] for counts in blocks.values()) for name, _, _ in STATES}
    whole = sum(totals.values())
    regions: dict[int, list[int]] = {}
    for block in sorted(blocks):
        regions.setdefault(block - block % REGION, []).append(block)
    names = sorted(regions)
    parts = [f'<svg xmlns="http://www.w3.org/2000/svg" width="{WIDTH}" height="{HEIGHT + LEGEND}" '
             f'viewBox="0 0 {WIDTH} {HEIGHT + LEGEND}" role="img" aria-label="Exact coverage map">',
             f'<title>Exact coverage by .text address range</title>',
             f'<rect width="{WIDTH}" height="{HEIGHT + LEGEND}" fill="#0d1117"/>']
    fill = {name: color for name, color, _ in STATES}
    region_sizes = [sum(sum(blocks[b].values()) for b in regions[name]) for name in names]
    for name, (rx, ry, rw, rh) in zip(names, squarify(region_sizes, 0, 0, WIDTH, HEIGHT)):
        members = regions[name]
        sizes = [sum(blocks[block].values()) for block in members]
        for block, (bx, by, bw, bh) in zip(members, squarify(sizes, rx + 1, ry + 1, rw - 2, rh - 2)):
            states = [(count, state) for state, count in blocks[block].items() if count]
            states.sort(key=lambda item: -item[0])
            for (_, state), rect in zip(states, squarify([count for count, _ in states], bx, by, bw, bh)):
                parts.append('<rect x="%.1f" y="%.1f" width="%.1f" height="%.1f" fill="%s"/>'
                             % (*rect, fill[state]))
            parts.append('<rect x="%.1f" y="%.1f" width="%.1f" height="%.1f" fill="none" stroke="#0d1117" '
                         'stroke-width="0.6"/>' % (bx, by, bw, bh))
        parts.append('<rect x="%.1f" y="%.1f" width="%.1f" height="%.1f" fill="none" stroke="#0d1117" '
                     'stroke-width="2"/>' % (rx, ry, rw, rh))
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
    (directory / "progress-map.svg").write_text(render(target, rows, published), encoding="utf-8")
