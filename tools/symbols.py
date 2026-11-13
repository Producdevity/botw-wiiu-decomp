#!/usr/bin/env python3
"""Inspect semantic-name evidence; validation does not establish factual truth."""
import argparse
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "src"))
from botw_decomp import project, symbols


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=project.ROOT)
    commands = parser.add_subparsers(dest="command", required=True)
    listing = commands.add_parser("list", help="List names with stable IDs and review status")
    listing.add_argument("--function")
    commands.add_parser("check", help="Check catalog consistency, not naming truth")
    args = parser.parse_args(argv)
    try:
        records = symbols.load(args.root)
        if args.command == "check":
            output = {"consistent": True, "functions": len(records),
                      "scope": "catalog consistency; naming claims require evidence review"}
        elif args.function:
            if args.function not in project.functions(args.root):
                raise ValueError(f"unknown function: {args.function}")
            output = [records[args.function]] if args.function in records else []
        else:
            output = [records[key] for key in sorted(records)]
        print(json.dumps(output, indent=2))
        return 0
    except (ValueError, OSError, KeyError, TypeError) as error:
        print(json.dumps({"error": str(error)}), file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
