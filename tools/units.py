#!/usr/bin/env python3
"""Infer source-file ranges from the local RPX and write config/units.json."""
import argparse
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))

from botw_decomp import project, rpx, units  # noqa: E402


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--check", action="store_true", help="fail if config/units.json differs")
    args = parser.parse_args()
    target = project.read_json(ROOT / "config/target.json")
    image = rpx.load(Path(project.local_config(ROOT)["rpx"]), target["rpx_sha256"])
    rows = project.functions(ROOT)
    inferred = units.infer(image, [int(row["address"], 16) for row in rows.values()])
    units.name_units(image, inferred)
    document = {"schema_version": 1, "target": target["id"], "units": inferred}
    units.validate(document, target)
    text = "{\n" + "".join(
        f'  "{key}": {json.dumps(document[key])},\n' for key in ("schema_version", "target")
    ) + '  "units": [\n' + ",\n".join(
        "    " + json.dumps(unit, sort_keys=True) for unit in inferred) + "\n  ]\n}\n"
    path = ROOT / units.UNITS_FILE
    totals = units.coverage(inferred, target)
    whole = sum(totals.values())
    summary = {"units": len(inferred), "with files": sum("files" in unit for unit in inferred),
               "several files": sum(len(unit.get("files", ())) > 1 for unit in inferred),
               "bytes": {key: f"{value} ({value / whole:.1%})" for key, value in totals.items()}}
    print(json.dumps(summary, indent=2))
    if args.check:
        if not path.is_file() or path.read_text(encoding="utf-8") != text:
            print(f"{units.UNITS_FILE} is out of date", file=sys.stderr)
            return 1
        return 0
    path.write_text(text, encoding="utf-8")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
