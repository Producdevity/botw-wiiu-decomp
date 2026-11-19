#!/usr/bin/env python3
"""Prepare this checkout for contributing in one command.

Runs every setup step that needs no decision from the user, then reports what is
left. Safe to rerun: completed steps are skipped.
"""

from __future__ import annotations

import argparse
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import preflight  # noqa: E402

UPSTREAM = "Producdevity/botw-wiiu-decomp"
AUTOMATIC = ("wua_reader", "ghs", "configuration")
NEXT = "python3 tools/community.py list --prepared --max-size 128"


def run(command: list[str], timeout: int = 1800) -> subprocess.CompletedProcess:
    return subprocess.run(command, cwd=ROOT, capture_output=True, text=True, timeout=timeout)


def push_access() -> bool | None:
    try:
        result = run(["gh", "api", f"repos/{UPSTREAM}", "--jq", ".permissions.push"], timeout=30)
    except (OSError, subprocess.TimeoutExpired):
        return None
    return {"true": True, "false": False}.get(result.stdout.strip()) if result.returncode == 0 else None


def prepare(game: Path | None, assess=preflight.assess, execute=run) -> dict:
    done = []
    for _ in range(len(AUTOMATIC) + 1):
        result = assess(ROOT, game)
        step = next((a for a in result["actions"] if a["id"] in AUTOMATIC and a.get("command")), None)
        if step is None:
            break
        completed = execute(step["command"])
        if completed.returncode != 0:
            detail = (completed.stderr or completed.stdout).strip().splitlines()[-1:] or ["no output"]
            return {"status": "action_required", "done": done,
                    "actions": [{"id": step["id"], "actor": "agent", "command": step["command"],
                                 "detail": f"Automatic step failed: {detail[0]}"}]}
        done.append(step["id"])
    if result["actions"]:
        return {"status": "action_required", "done": done, "actions": result["actions"],
                "hint": "Resolve these actions, then rerun python3 tools/start.py"}
    doctor = execute(["python3", "tools/decomp.py", "doctor"])
    if doctor.returncode != 0:
        return {"status": "action_required", "done": done,
                "actions": [{"id": "doctor", "actor": "agent", "detail": doctor.stdout.strip() or doctor.stderr.strip()}]}
    done.append("doctor")
    report = {"status": "ready", "done": done, "next": NEXT}
    access = push_access()
    if access is False:
        report["fork"] = f"No push access to {UPSTREAM}: run gh repo fork {UPSTREAM} --remote and push branches to your fork"
    return report


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--game", "--rpx", dest="game", metavar="PATH", type=Path,
                        help="Your own USA v208 dump folder, .wua archive or U-King.rpx; optional after setup")
    args = parser.parse_args(argv)
    result = prepare(args.game)
    print(json.dumps(result, indent=2))
    return 0 if result["status"] == "ready" else 1


if __name__ == "__main__":
    raise SystemExit(main())
