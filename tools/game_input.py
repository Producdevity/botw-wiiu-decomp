#!/usr/bin/env python3
"""Install the optional local WUA reader without extracting game files."""
import argparse
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))
from botw_decomp import wua


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("command", choices=["install-reader"])
    parser.add_argument("--compiler")
    args = parser.parse_args(argv)
    try:
        path = wua.install_reader(ROOT, compiler=args.compiler)
        print(json.dumps({"status": "ready", "reader": str(path)}))
        return 0
    except (OSError, ValueError) as error:
        print(json.dumps({"status": "action_required", "reason": str(error)}))
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
