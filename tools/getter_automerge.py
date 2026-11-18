#!/usr/bin/env python3
"""Classify reviewed getter additions and merge verified PRs."""

import argparse
import datetime as dt
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import time

import ci
import community
import pr_metadata


SHA = re.compile(r"[0-9a-f]{40}")
BATCH = "global-word-loads"


def getter_source(row: dict) -> bytes | None:
    key = row["id"]
    bindings = row.get("data_bindings", {})
    if (row["size"] != 12 or row.get("original_profile") != "cafe-data-address-v1"
            or len(bindings) != 1 or row.get("bindings") or row.get("compile_with")):
        return None
    symbol, = bindings
    if row.get("data_relocations") != [
        {"offset": 2, "symbol": symbol, "type": 6},
        {"offset": 6, "symbol": symbol, "type": 4},
    ]:
        return None
    contract = row.get("source_contract", {})
    if contract.get("parameter_types") != [] or contract.get("variadic") is not False:
        return None
    result = contract["return_type"]
    opaque = f"Opaque_{key.removeprefix('fn_')}"
    if result == f"struct {opaque} *":
        declaration = f"struct {opaque};\n"
        result = f"{opaque}*"
    elif result in ("int", "unsigned int"):
        declaration = ""
    else:
        return None
    return (declaration + f'extern "C" {{ extern {result} {symbol}; }}\n'
            f'extern "C" {result} {key}(void) {{ return {symbol}; }}\n').encode("ascii")


def reviewed_getters(root: Path) -> dict[str, dict]:
    batches = ci.project.read_json(root / "config/batches.json")["batches"]
    batch, = (item["functions"] for item in batches if item["id"] == BATCH)
    rows = ci.project.functions(root)
    return {rows[key]["source"]: rows[key] for key in batch}


def classify(trusted: Path, candidate: Path) -> list[str]:
    base_files = ci.tracked_files(trusted)
    head_files = ci.tracked_files(candidate)
    changes = {name for name in base_files.keys() | head_files.keys()
               if base_files.get(name) != head_files.get(name)}
    reviewed = reviewed_getters(trusted)
    selected = []
    for name in sorted(changes):
        if name in base_files or name not in reviewed or head_files[name][0] != "100644":
            return []
        row = reviewed[name]
        if (candidate / name).read_bytes() != getter_source(row):
            return []
        selected.append(row["id"])
    return selected


def declared_functions(body: str) -> list[str]:
    sections = community.SUBMISSION_FUNCTIONS.findall(body)
    if len(sections) != 1:
        return []
    return sorted(line.strip() for line in sections[0].splitlines() if line.strip())


def merge_verified(api: community.GitHub, event: dict, functions: list[str],
                   *, wait=time.sleep) -> dict:
    original = event["pull_request"]
    number = original["number"]
    base, head = original["base"]["sha"], original["head"]["sha"]
    repository = event["repository"]
    if (type(number) is not int or number <= 0 or not SHA.fullmatch(base) or not SHA.fullmatch(head)
            or repository["full_name"] != api.repository or repository["default_branch"] != "master"
            or not functions or len(set(functions)) != len(functions)
            or not all(community.FUNCTION.fullmatch(key) for key in functions)):
        raise ValueError("invalid verified getter PR inputs")
    route = api.route(f"pulls/{number}")
    for attempt in range(7):
        current = api.call("GET", route)
        if (current["state"] != "open" or current["draft"] or current["head"]["sha"] != head
                or current["base"]["ref"] != "master" or current["base"]["sha"] != base
                or current["base"]["repo"]["full_name"] != api.repository):
            return {"merged": False, "reason": "PR or base changed after verification"}
        allowed = current["mergeable_state"] in ("clean", "unstable") and current["mergeable"] is True
        if allowed:
            break
        if current["mergeable_state"] not in ("blocked", "unknown") or attempt == 6:
            return {"merged": False, "reason": "GitHub has not cleared the PR for merge"}
        wait(5)

    body = current.get("body") or ""
    if not pr_metadata.validate_body(body)[0] or declared_functions(body) != sorted(functions):
        return {"merged": False, "reason": "PR metadata or function list does not match"}
    claims = community.active_claims(api, dt.datetime.now(dt.timezone.utc))
    owner = current["user"]["login"]
    if any(claims.get(key, {}).get("owner") != owner for key in functions):
        return {"merged": False, "reason": "Each getter needs an active claim by the PR author"}
    result = api.call("PUT", route + "/merge", {"sha": head, "merge_method": "merge"})
    if result["merged"] is not True or not SHA.fullmatch(result["sha"]):
        raise ValueError("GitHub did not confirm the getter merge")
    # GITHUB_TOKEN merges do not trigger the regular push workflows.
    api.call("POST", api.route("dispatches"), {"event_type": "getter_merged"})
    return {"merged": True, "sha": result["sha"]}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    command = parser.add_mutually_exclusive_group(required=True)
    command.add_argument("--candidate", type=Path)
    command.add_argument("--print-function")
    command.add_argument("--merge-event", type=Path)
    parser.add_argument("--functions", nargs="*", default=[])
    args = parser.parse_args()
    try:
        if args.candidate is not None:
            print("functions=" + " ".join(classify(ci.ROOT, args.candidate)))
        elif args.print_function is not None:
            row = reviewed_getters(ci.ROOT).get(f"reconstructions/{args.print_function}.cpp")
            source = getter_source(row) if row is not None else None
            if source is None:
                raise ValueError("function is outside the reviewed getter pattern")
            sys.stdout.buffer.write(source)
        else:
            event = ci.project.read_json(args.merge_event)
            api = community.GitHub(os.environ["GITHUB_REPOSITORY"])
            print(json.dumps(merge_verified(api, event, args.functions)))
        return 0
    except (ValueError, KeyError, TypeError, OSError, subprocess.SubprocessError) as error:
        print(f"getter auto-merge: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
