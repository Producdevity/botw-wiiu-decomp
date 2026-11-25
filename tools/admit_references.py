#!/usr/bin/env python3
"""Admit discovered inventory rows as trusted references (maintainer tool)."""

from __future__ import annotations

import argparse
import bisect
import json
from pathlib import Path
import re
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))

from botw_decomp import project

COPIED = ("address", "bindings", "boundary", "category", "id", "sha256", "size", "source", "symbol")
RELOCATION_CONTRACT = ("code_relocations", "data_bindings", "data_relocations", "import_relocations",
                       "original_profile")
BATCH = re.compile(r"[a-z0-9][a-z0-9-]{2,63}\Z")


def _interior(ranges: list[tuple[int, int]], starts: list[int], address: int) -> bool:
    index = bisect.bisect_right(starts, address) - 1
    return index >= 0 and ranges[index][0] < address < ranges[index][1]


def admit(root: Path, inventory: dict, batch: str) -> list[str]:
    if not BATCH.fullmatch(batch):
        raise ValueError("batch ids use lowercase letters, digits and hyphens")
    target = project.read_json(root / "config/target.json")
    if inventory.get("rpx_sha256") != target["rpx_sha256"]:
        raise ValueError("inventory was not generated from the pinned executable")
    manifest = project.read_manifest(root)
    batches = project.read_json(root / "config/batches.json")
    if any(item["id"] == batch for item in batches["batches"]):
        raise ValueError(f"batch already exists: {batch}")
    rows = manifest["functions"]
    ranges = sorted((int(row["address"], 16), int(row["address"], 16) + row["size"]) for row in rows)
    starts = [start for start, _ in ranges]
    destinations = sorted(int(item["symbol"][3:], 16) for row in rows for item in row.get("code_relocations", []))
    added = []
    for candidate in sorted(inventory["functions"], key=lambda item: int(item["address"], 16)):
        if (candidate.get("status") != "unmatched"
                or set(candidate) - {*COPIED, *RELOCATION_CONTRACT, "status", "discovery_evidence"}):
            continue
        start = int(candidate["address"], 16)
        end = start + candidate["size"]
        index = bisect.bisect_left(starts, end)
        if index and ranges[index - 1][1] > start:
            continue
        # A code-address destination must stay a function entry, never a body interior.
        own = [int(item["symbol"][3:], 16) for item in candidate.get("code_relocations", [])]
        if bisect.bisect_right(destinations, start) != bisect.bisect_left(destinations, end):
            continue
        if any(_interior(ranges, starts, destination) for destination in own):
            continue
        row = {key: candidate[key] for key in COPIED}
        row.update((key, candidate[key]) for key in RELOCATION_CONTRACT if key in candidate)
        row.update(status="unmatched", compiler_profile="ghs-5.3.22-auto")
        position = bisect.bisect_left(starts, start)
        starts.insert(position, start)
        ranges.insert(position, (start, end))
        for destination in own:
            bisect.insort(destinations, destination)
        rows.append(row)
        added.append(row["id"])
    if not added:
        return []
    rows.sort(key=lambda item: int(item["address"], 16))
    batches["batches"].append({"id": batch, "functions": added})
    with tempfile.TemporaryDirectory(prefix="botw-admit-") as staging:
        project.write_manifest(Path(staging), manifest)
        project.functions(Path(staging))
    project.write_manifest(root, manifest)
    project.write_json(root / "config/batches.json", batches)
    return added


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("inventory", type=Path)
    parser.add_argument("--batch", required=True)
    parser.add_argument("--root", type=Path, default=ROOT)
    args = parser.parse_args(argv)
    try:
        added = admit(args.root, project.read_json(args.inventory), args.batch)
        print(json.dumps({"admitted": len(added), "batch": args.batch}))
        return 0
    except (ValueError, KeyError, OSError) as error:
        print(f"admit_references: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
