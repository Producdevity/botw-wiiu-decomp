#!/usr/bin/env python3
"""Install the optional m2c drafter, or write a draft for one function."""
import argparse
import hashlib
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "src"))
from botw_decomp import draft
from botw_decomp.project import ROOT, functions, local_config, read_json
from botw_decomp.rpx import load, reference_bytes


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest="command", required=True)
    commands.add_parser("install", help="fetch m2c at its pinned commit into .local/tools/")
    commands.add_parser("status", help="report whether the pinned m2c is installed and intact")
    one = commands.add_parser("draft", help="print a draft for FUNCTION without writing a packet")
    one.add_argument("function")
    args = parser.parse_args(argv)
    try:
        if args.command == "install":
            print(json.dumps({"installed": str(draft.install(ROOT)), "commit": draft.M2C_COMMIT}))
        elif args.command == "status":
            draft.verify_install(ROOT)
            print(json.dumps({"installed": True, "commit": draft.M2C_COMMIT}))
        else:
            rows = functions()
            row = rows[args.function]
            image = load(Path(local_config()["rpx"]), read_json(ROOT / "config/target.json")["rpx_sha256"])
            code = reference_bytes(image, row)
            if hashlib.sha256(code).hexdigest() != row["sha256"]:
                raise ValueError("reference mismatch")
            sys.stdout.write(draft.make_draft(ROOT, row, rows, code))
    except (ValueError, KeyError, OSError) as error:
        print(json.dumps({"error": str(error)}), file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
