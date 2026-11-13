#!/usr/bin/env python3
"""Diagnose temporary-register differences; never accept a reconstruction."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "src"))
from botw_decomp import compiler, matching, project
from botw_decomp.register_proof import report
from botw_decomp.rpx import load


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("function")
    parser.add_argument("--source", type=Path, required=True)
    args = parser.parse_args(argv)
    try:
        rows = project.functions()
        if args.function not in rows:
            raise ValueError("unknown function")
        row = rows[args.function]
        settings = project.local_config()
        target = project.read_json(project.ROOT / "config/target.json")
        image = load(Path(settings["rpx"]), target["rpx_sha256"])
        address = int(row["address"], 16)
        original = image.read(address, row["size"])
        if hashlib.sha256(original).hexdigest() != row["sha256"]:
            raise ValueError("reference manifest disagrees with supplied RPX")
        bindings = {name: int(value, 16) for name, value in row.get("bindings", {}).items()}
        results = []
        for profile in compiler.profiles(row):
            item = {"compiler_profile": profile}
            try:
                obj = compiler.compile_source(settings["compiler"], args.source,
                                              project.ROOT / "include", profile)
                resolved, candidate = matching._resolve_function(
                    obj, row["symbol"], row["size"], address, bindings)
                if candidate is None:
                    item.update(equivalent=False, reason=resolved["reason"])
                else:
                    item.update(report(original, candidate))
            except (ValueError, OSError, subprocess.TimeoutExpired) as error:
                item.update(equivalent=False, reason=str(error))
            results.append(item)
        print(json.dumps({
            "report_only": True, "function": row["id"],
            "rpx_sha256": image.sha256, "original_sha256": row["sha256"],
            "source_sha256": hashlib.sha256(args.source.read_bytes()).hexdigest(),
            "scope": "Specified register-allocation model only; not an acceptance result. See docs/register-diagnostics.md.",
            "results": results,
        }, indent=2, sort_keys=True))
        return 0
    except (ValueError, OSError) as error:
        print(json.dumps({"report_only": True, "error": str(error)}), file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
