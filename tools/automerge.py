#!/usr/bin/env python3
"""Merge pull requests that only add exact, audited reconstructions.

Eligible changes are new sources for trusted references and purely additive
header changes: new `include/botw/` headers, or edits that keep every existing
line in order. `select` runs with a read-only token. It re-verifies every
eligible PR on top of the current default branch (all published functions when a
header changes) and writes a merge plan. `merge`
runs with write access, compiles nothing, and merges the plan only while the
default branch is still the verified commit.
"""

from __future__ import annotations

import argparse
import base64
import difflib
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import tempfile

import ci
import community
import pr_metadata

SHA = re.compile(r"[0-9a-f]{40}\Z")
SOURCE = re.compile(r"reconstructions/(fn_[0-9a-f]{8})\.cpp\Z")
HEADER = re.compile(r"include/botw/(?:[A-Za-z0-9_.-]+/)*[A-Za-z0-9_.-]+\.h\Z")
REQUIRED_CHECKS = ("verify", "pr-metadata")
MAX_SOURCE_BYTES = 64 * 1024
MAX_PULLS = 10


def declared_functions(body: str) -> list[str]:
    sections = community.SUBMISSION_FUNCTIONS.findall(body)
    if len(sections) != 1:
        return []
    return sorted(line.strip() for line in sections[0].splitlines() if line.strip())


def eligible_sources(files: list[dict], rows: dict[str, dict], published: set[str]) -> dict[str, str] | None:
    """Return {path: blob_sha} when every change adds a new source or touches a project header.

    Header edits are only candidates here; `additive` checks their content later.
    """
    result = {}
    for entry in files:
        name = entry.get("filename")
        if not isinstance(name, str) or not isinstance(entry.get("sha"), str) or not SHA.fullmatch(entry["sha"]):
            return None
        match = SOURCE.fullmatch(name)
        if match is not None:
            if entry.get("status") != "added" or match.group(1) not in rows or name in published:
                return None
        elif not (HEADER.fullmatch(name) and entry.get("status") in ("added", "modified")) or name in published:
            return None
        result[name] = entry["sha"]
    return result or None


def additive(old: bytes | None, new: bytes) -> bool:
    """True when `new` keeps every line of `old` in order and only inserts lines."""
    if old is None:
        return True
    try:
        before, after = old.decode("utf-8").splitlines(), new.decode("utf-8").splitlines()
    except UnicodeDecodeError:
        return False
    matcher = difflib.SequenceMatcher(None, before, after, autojunk=False)
    return all(tag in ("equal", "insert") for tag, *_ in matcher.get_opcodes())


def checks_passed(api: community.GitHub, head: str) -> bool:
    runs = api.call("GET", api.route(f"commits/{head}/check-runs?per_page=100"))
    latest = {}
    for run in (runs or {}).get("check_runs", []):
        name = run.get("name")
        if name in REQUIRED_CHECKS and (name not in latest or run["id"] > latest[name]["id"]):
            latest[name] = run
    return all(latest.get(name, {}).get("conclusion") == "success" for name in REQUIRED_CHECKS)


def read_blob(api: community.GitHub, repository: str, sha: str) -> bytes:
    blob = api.call("GET", f"repos/{repository}/git/blobs/{sha}")
    if (not isinstance(blob, dict) or blob.get("sha") != sha or blob.get("encoding") != "base64"
            or type(blob.get("size")) is not int or not 0 < blob["size"] <= MAX_SOURCE_BYTES):
        raise ValueError("invalid or oversized source blob")
    data = base64.b64decode("".join(blob["content"].splitlines()), validate=True)
    if len(data) != blob["size"]:
        raise ValueError("source blob size mismatch")
    data.decode("utf-8")
    return data


def candidates(api: community.GitHub, rows: dict[str, dict], published: set[str],
               root: Path | None = None) -> list[dict]:
    root = ci.ROOT if root is None else root
    selected, taken = [], set()
    for pull in api.open_pulls():
        if len(selected) == MAX_PULLS:
            break
        head, base = pull.get("head") or {}, pull.get("base") or {}
        if pull.get("draft") or base.get("ref") != "master" or not SHA.fullmatch(head.get("sha", "")):
            continue
        files = api.pages(api.route(f"pulls/{pull['number']}/files"))
        sources = eligible_sources(files, rows, published - set(filter(HEADER.fullmatch, published)) | taken)
        if sources is None:
            continue
        functions = sorted(SOURCE.fullmatch(name).group(1) for name in sources if SOURCE.fullmatch(name))
        body = pull.get("body") or ""
        if (not pr_metadata.validate_body(body)[0]
                or declared_functions(body) not in ((functions,) if functions else ([], ["none"]))):
            continue
        if not checks_passed(api, head["sha"]):
            continue
        repository = (head.get("repo") or {}).get("full_name")
        if not isinstance(repository, str):
            continue
        try:
            contents = {name: read_blob(api, repository, sha) for name, sha in sources.items()}
        except (ValueError, community.QueueError):
            continue
        headers = [name for name in contents if HEADER.fullmatch(name)]
        if not all(additive((root / name).read_bytes() if (root / name).is_file() else None, contents[name])
                   for name in headers):
            continue
        taken.update(contents)
        selected.append({"number": pull["number"], "head": head["sha"], "functions": functions,
                         "contents": contents})
    return selected


def overlay(root: Path, pulls: list[dict]) -> None:
    for pull in pulls:
        pull["replaced"] = []
        for name, data in pull["contents"].items():
            path = root / name
            if path.exists():
                if not HEADER.fullmatch(name):
                    raise ValueError(f"{name} already exists")
                pull["replaced"].append(name)
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data)
    names = [name for pull in pulls for name in pull["contents"]]
    subprocess.run(["git", "-C", str(root), "add", "--", *names], check=True, timeout=120)


def remove(root: Path, pulls: list[dict]) -> None:
    replaced = [name for pull in pulls for name in pull.get("replaced", [])]
    added = [name for pull in pulls for name in pull["contents"] if name not in replaced]
    if added:
        subprocess.run(["git", "-C", str(root), "rm", "-q", "--cached", "--", *added], check=True, timeout=120)
        for name in added:
            (root / name).unlink()
    if replaced:
        subprocess.run(["git", "-C", str(root), "checkout", "-q", "HEAD", "--", *replaced], check=True, timeout=120)


def passes(root: Path, trusted: Path, cxx: str, rows: dict[str, dict], pulls: list[dict]) -> bool:
    overlay(root, pulls)
    try:
        try:
            results = ci.verify_candidate(trusted, root, cxx, rows=rows, changed_only=True)
        except ci.VerificationError as error:
            print(json.dumps({"pulls": [pull["number"] for pull in pulls], "rejected": str(error)}), flush=True)
            return False
        rejected = [result["function"] for result in results if result.get("matched") is not True]
        if rejected:
            print(json.dumps({"pulls": [pull["number"] for pull in pulls], "rejected": rejected[:20]}), flush=True)
            return False
        audit = subprocess.run(
            [sys.executable, str(trusted / "tools/contract_audit.py"), "--root", str(root),
             "--reference-root", str(trusted), "--compiler", cxx, "--strict", "--summary"],
            capture_output=True, text=True, timeout=1800)
        if audit.returncode:
            print(audit.stdout[-4000:], flush=True)
        return audit.returncode == 0
    finally:
        remove(root, pulls)


def select(output: Path, compiler: str) -> dict:
    root = ci.ROOT
    master = subprocess.run(["git", "-C", str(root), "rev-parse", "HEAD"], capture_output=True,
                            text=True, check=True).stdout.strip()
    rows = ci.project.functions(root)
    published = set(ci.tracked_files(root))
    api = community.GitHub(os.environ["GITHUB_REPOSITORY"])
    pulls = candidates(api, rows, published, root)
    cxx = ci.compiler.locate(compiler)
    chosen: list[dict] = []
    if pulls:
        with tempfile.TemporaryDirectory() as directory:
            trusted = Path(directory) / "trusted"
            subprocess.run(["git", "-C", str(root), "worktree", "add", "-q", "--detach", str(trusted), master],
                           check=True, timeout=600)
            try:
                if passes(root, trusted, cxx, rows, pulls):
                    chosen = pulls
                else:
                    for pull in pulls[:3]:
                        if passes(root, trusted, cxx, rows, [pull]):
                            chosen = [pull]
                            break
            finally:
                subprocess.run(["git", "-C", str(root), "worktree", "remove", "--force", str(trusted)],
                               check=False, timeout=600)
    plan = {"base": master, "pulls": [{key: pull[key] for key in ("number", "head", "functions")}
                                      for pull in chosen]}
    output.write_text(json.dumps(plan) + "\n")
    return plan


def merge(plan_path: Path) -> dict:
    plan = json.loads(plan_path.read_text())
    api = community.GitHub(os.environ["GITHUB_REPOSITORY"])
    expected = plan["base"]
    merged = []
    for pull in plan["pulls"]:
        current = api.call("GET", api.route("git/ref/heads/master"))["object"]["sha"]
        if current != expected:
            break
        state = api.call("GET", api.route(f"pulls/{pull['number']}"))
        if state["state"] != "open" or state["head"]["sha"] != pull["head"] or state["base"]["ref"] != "master":
            continue
        result = api.call("PUT", api.route(f"pulls/{pull['number']}/merge"),
                          {"sha": pull["head"], "merge_method": "squash"})
        if result.get("merged") is not True or not SHA.fullmatch(result.get("sha", "")):
            break
        expected = result["sha"]
        merged.append(pull["number"])
        head = state["head"]
        if (head.get("repo") or {}).get("full_name") == api.repository and isinstance(head.get("ref"), str):
            # Merges made with GITHUB_TOKEN skip the repository's delete-branch-on-merge setting.
            try:
                api.call("DELETE", api.route(f"git/refs/heads/{head['ref']}"))
            except community.QueueError:
                pass
    if merged:
        # GITHUB_TOKEN merges do not trigger push workflows; dispatch the post-merge checks.
        api.call("POST", api.route("dispatches"), {"event_type": "automerged"})
    return {"merged": merged}


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest="command", required=True)
    choose = commands.add_parser("select")
    choose.add_argument("--output", type=Path, required=True)
    choose.add_argument("--compiler", default="clang++-18")
    apply = commands.add_parser("merge")
    apply.add_argument("--plan", type=Path, required=True)
    args = parser.parse_args(argv)
    try:
        result = select(args.output, args.compiler) if args.command == "select" else merge(args.plan)
        print(json.dumps(result))
        return 0
    except (ValueError, KeyError, TypeError, OSError, subprocess.SubprocessError, community.QueueError) as error:
        print(f"automerge: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
