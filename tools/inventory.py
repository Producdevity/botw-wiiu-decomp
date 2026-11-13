#!/usr/bin/env python3
"""Write candidate metadata from a locally supplied, hash-pinned RPX."""
import argparse
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "src"))
from botw_decomp import project
from botw_decomp.rpx import load
from botw_decomp.short_inventory import discover_extended


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rpx", type=Path, help="use this RPX instead of the local setup path")
    parser.add_argument("--short-tails", action="store_true", help="include short direct-tail adapters")
    parser.add_argument("--blr-leaves", action="store_true", help="include single-blr leaves without inferring signatures")
    parser.add_argument("--tail-target-policy", choices=("bounded", "direct-call"), default="bounded",
                        help="direct-call also permits independently called entries without a bounded body")
    parser.add_argument("--max-size", type=int, default=64, help="adapter span limit, aligned 4..256 bytes")
    parser.add_argument("--output", type=Path, help="write JSON here instead of stdout")
    args = parser.parse_args(argv)
    try:
        path = (args.rpx or Path(project.local_config()["rpx"])).expanduser().resolve()
        output = args.output.expanduser().resolve() if args.output else None
        if output is not None and (output == path or output.exists() and output.samefile(path)):
            raise ValueError("output must not overwrite the input RPX")
        target = project.read_json(project.ROOT / "config/target.json")
        image = load(path, target["rpx_sha256"])
        rows, summary = discover_extended(
            image, short_tails=args.short_tails, blr_leaves=args.blr_leaves,
            max_size=args.max_size, tail_target_policy=args.tail_target_policy,
        )
        report = {
            "schema_version": 1, "rpx_sha256": image.sha256,
            "scope": "Candidate boundary/binding metadata; not ABI proof or reconstruction acceptance.",
            "options": {"short_tails": args.short_tails, "blr_leaves": args.blr_leaves,
                        "max_size": args.max_size, "tail_target_policy": args.tail_target_policy},
            "summary": summary, "functions": rows,
        }
        if output is not None:
            project.write_json(output, report)
        else:
            print(json.dumps(report, indent=2, sort_keys=True))
        return 0
    except (ValueError, OSError, KeyError, TypeError) as error:
        print(json.dumps({"error": str(error)}), file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
