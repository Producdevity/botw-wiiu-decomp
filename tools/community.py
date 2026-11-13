#!/usr/bin/env python3
"""Coordinate source reconstruction through GitHub Issues."""

from __future__ import annotations

import argparse
import base64
import datetime as dt
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import time
from urllib.parse import quote


REPO = "Producdevity/botw-wiiu-decomp"
ROOT = Path(__file__).resolve().parents[1]
LEASE_HOURS = 6
MAX_CLAIMS = 8
MAX_REMOTE_MANIFEST_BYTES = 100_000_000
BOT_ID = 41898282
FUNCTION = re.compile(r"fn_[0-9a-f]{8}\Z")
RECORD = re.compile(r"<!-- botw-claim-v1 (\{[^\n]*\}) -->")
SUBMISSION_FUNCTIONS = re.compile(r"^## Functions[ \t]*\r?\n(.*?)(?=^#{1,6}[ \t]+|\Z)", re.MULTILINE | re.DOTALL)
BLOCKER_FUNCTIONS = re.compile(r"^### Functions\s*\n(.*?)(?=^### |\Z)", re.MULTILINE | re.DOTALL)
REQUEST = re.compile(r"^### Function\s*\n\s*(fn_[0-9a-f]{8})\s*$", re.MULTILINE)
LABELS = {
    "claim-request": "d4c5f9",
    "claim-active": "0e8a16",
    "claim-rejected": "b60205",
    "claim-expired": "fbca04",
    "claim-complete": "0075ca",
}


class QueueError(ValueError):
    pass


def timestamp(value: str) -> dt.datetime:
    if not isinstance(value, str):
        raise QueueError("Claim timestamps must be strings")
    parsed = dt.datetime.fromisoformat(value.replace("Z", "+00:00"))
    if parsed.tzinfo is None:
        raise QueueError("Claim timestamps require a timezone")
    return parsed.astimezone(dt.timezone.utc)


def iso(value: dt.datetime) -> str:
    return value.astimezone(dt.timezone.utc).isoformat(timespec="seconds").replace("+00:00", "Z")


def parse_functions(value, completed_sources: set[str] | None = None) -> dict[str, dict]:
    rows = value.get("functions") if isinstance(value, dict) else value
    if not isinstance(rows, list):
        raise QueueError("Function manifest must contain a list")
    result = {}
    for row in rows:
        if not isinstance(row, dict):
            raise QueueError("Function entries must be objects")
        key = row.get("id", "")
        if not isinstance(key, str) or not FUNCTION.fullmatch(key) or key in result:
            raise QueueError("Invalid or duplicate function id")
        if row.get("status") not in ("unmatched", "matched"):
            raise QueueError(f"Unsupported status for {key}")
        row = dict(row)
        if "size" in row and (type(row["size"]) is not int or row["size"] <= 0):
            raise QueueError(f"Invalid function size for {key}")
        if "category" in row and not isinstance(row["category"], str):
            raise QueueError(f"Invalid function category for {key}")
        if "priority" in row and type(row["priority"]) is not int:
            raise QueueError(f"Invalid function priority for {key}")
        if completed_sources is not None:
            row["status"] = "unmatched"
        if "source" in row:
            if row["source"] != f"reconstructions/{key}.cpp":
                raise QueueError(f"Invalid source path for {key}")
            if completed_sources is not None:
                row["status"] = "matched" if row["source"] in completed_sources else "unmatched"
        result[key] = row
    return result


def read_functions(path: Path, root: Path | None = None) -> dict[str, dict]:
    root = root or path.resolve().parents[1]
    result = parse_functions(json.loads(path.read_text()))
    for row in result.values():
        if "source" not in row:
            row["status"] = "unmatched"
            continue
        source = root / row["source"]
        if (root / "reconstructions").is_symlink() or source.is_symlink():
            raise QueueError("Reconstruction symlinks are not accepted")
        row["status"] = "matched" if source.is_file() else "unmatched"
    return result


def remote_functions(api: GitHub) -> dict[str, dict]:
    metadata = api.call("GET", api.route(""))
    branch = metadata.get("default_branch") if isinstance(metadata, dict) else None
    if not isinstance(branch, str) or not branch:
        raise QueueError("Repository has no default branch")
    commit = api.call("GET", api.route(f"commits/{quote(branch, safe='')}"))
    detail = commit.get("commit") if isinstance(commit, dict) else None
    tree_detail = detail.get("tree") if isinstance(detail, dict) else None
    commit_sha = commit.get("sha") if isinstance(commit, dict) else None
    tree_sha = tree_detail.get("sha") if isinstance(tree_detail, dict) else None
    if (not isinstance(commit_sha, str) or not re.fullmatch(r"[0-9a-f]{40}", commit_sha)
            or not isinstance(tree_sha, str) or not re.fullmatch(r"[0-9a-f]{40}", tree_sha)):
        raise QueueError("Invalid default-branch commit or tree")
    tree = api.call("GET", api.route(f"git/trees/{tree_sha}?recursive=1"))
    if not isinstance(tree, dict) or tree.get("truncated") is not False or not isinstance(tree.get("tree"), list):
        raise QueueError("Remote source tree is incomplete")
    completed = set()
    manifest_entry = None
    for entry in tree["tree"]:
        if not isinstance(entry, dict) or not isinstance(entry.get("path"), str):
            raise QueueError("Invalid remote source tree entry")
        path = entry["path"]
        if path == "config/functions.json":
            if manifest_entry is not None:
                raise QueueError("Duplicate remote function manifest")
            manifest_entry = entry
        if path == "reconstructions" or path.startswith("reconstructions/"):
            if entry.get("type") == "tree" and entry.get("mode") == "040000":
                continue
            if entry.get("type") != "blob" or entry.get("mode") not in ("100644", "100755"):
                raise QueueError("Remote reconstructions must be regular files")
            completed.add(path)
    if (manifest_entry is None or manifest_entry.get("type") != "blob"
            or manifest_entry.get("mode") not in ("100644", "100755")):
        raise QueueError("Remote manifest must be a regular file")
    blob_sha = manifest_entry.get("sha")
    size = manifest_entry.get("size")
    if (not isinstance(blob_sha, str) or not re.fullmatch(r"[0-9a-f]{40}", blob_sha)
            or type(size) is not int or not 0 < size <= MAX_REMOTE_MANIFEST_BYTES):
        raise QueueError("Invalid remote function manifest metadata")
    # The Contents API omits base64 content for files larger than 1 MB.
    manifest = api.call("GET", api.route(f"git/blobs/{blob_sha}"))
    if (not isinstance(manifest, dict) or manifest.get("sha") != blob_sha
            or manifest.get("encoding") != "base64" or type(manifest.get("size")) is not int
            or manifest["size"] != size or not isinstance(manifest.get("content"), str)):
        raise QueueError("Invalid remote function manifest blob")
    try:
        encoded = "".join(manifest["content"].splitlines())
        if len(encoded) != 4 * ((size + 2) // 3):
            raise QueueError("Invalid remote function manifest length")
        decoded = base64.b64decode(encoded, validate=True)
        if len(decoded) != size:
            raise QueueError("Invalid remote function manifest length")
        value = json.loads(decoded)
    except (ValueError, TypeError) as error:
        raise QueueError("Invalid remote function manifest") from error
    api.snapshot = {"default_branch": branch, "commit": commit_sha}
    return parse_functions(value, completed)


def requested_function(issue: dict) -> str:
    body = issue.get("body") or ""
    matches = REQUEST.findall(body)
    if len(matches) != 1:
        raise QueueError("Request exactly one function under a '### Function' field")
    return matches[0]


def claim_record(issue: dict, comments: list[dict]) -> dict | None:
    records = []
    for comment in comments:
        author = comment.get("user", {})
        if author.get("id") != BOT_ID or author.get("login") != "github-actions[bot]":
            continue
        matches = RECORD.findall(comment.get("body") or "")
        for raw in matches:
            try:
                record = json.loads(raw)
                required = {"function", "owner", "issue", "issued_at", "expires_at"}
                if set(record) != required:
                    raise QueueError("Invalid claim record fields")
                if not FUNCTION.fullmatch(record["function"]):
                    raise QueueError("Invalid claim function")
                if record["owner"] != issue["user"]["login"] or record["issue"] != issue["number"]:
                    raise QueueError("Claim owner or issue changed")
                issued = timestamp(record["issued_at"])
                expires = timestamp(record["expires_at"])
                if not dt.timedelta(0) < expires - issued <= dt.timedelta(hours=LEASE_HOURS):
                    raise QueueError("Invalid claim lease")
                records.append(record)
            except (KeyError, TypeError, ValueError) as error:
                raise QueueError("Malformed authoritative claim record") from error
    if len(records) > 1:
        raise QueueError("Multiple authoritative claim records")
    return records[0] if records else None


def is_request(issue: dict) -> bool:
    return "pull_request" not in issue and (
        issue.get("title", "").startswith("Claim:")
        or any(label["name"] in LABELS for label in issue.get("labels", []))
    )


class GitHub:
    def __init__(self, repository: str):
        if not re.fullmatch(r"[A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+", repository):
            raise QueueError("Expected GitHub owner/repository")
        self.repository = repository

    def call(self, method: str, path: str, payload: dict | None = None):
        command = ["gh", "api", "--method", method, path]
        if payload is not None:
            command += ["--input", "-"]
        environment = os.environ.copy()
        environment.pop("CLICOLOR_FORCE", None)
        environment.pop("GH_FORCE_TTY", None)
        environment.update(CLICOLOR="0", NO_COLOR="1")
        response = subprocess.run(
            command, input=json.dumps(payload) if payload is not None else None,
            text=True, capture_output=True, check=False, timeout=30, env=environment,
        )
        if response.returncode:
            raise QueueError(response.stderr.strip() or "GitHub request failed")
        try:
            return json.loads(response.stdout) if response.stdout.strip() else None
        except json.JSONDecodeError as error:
            raise QueueError("GitHub returned invalid JSON") from error

    def pages(self, path: str) -> list[dict]:
        result = []
        separator = "&" if "?" in path else "?"
        for page in range(1, 101):
            batch = self.call("GET", f"{path}{separator}per_page=100&page={page}")
            if not isinstance(batch, list):
                raise QueueError("Expected a list from GitHub")
            result.extend(batch)
            if len(batch) < 100:
                return result
        raise QueueError("Queue exceeds the 10,000-entry safety bound")

    def route(self, suffix: str) -> str:
        return f"repos/{self.repository}/{suffix}".rstrip("/")

    def open_issues(self) -> list[dict]:
        return [issue for issue in self.pages(self.route("issues?state=open&sort=created&direction=asc"))
                if "pull_request" not in issue]

    def issues(self) -> list[dict]:
        return [issue for issue in self.open_issues() if is_request(issue)]

    def open_pulls(self) -> list[dict]:
        return self.pages(self.route("pulls?state=open&sort=created&direction=asc"))

    def comments(self, issue: dict) -> list[dict]:
        return self.pages(self.route(f"issues/{issue['number']}/comments"))

    def comment(self, issue: dict, text: str):
        return self.call("POST", self.route(f"issues/{issue['number']}/comments"), {"body": text})

    def update(self, issue: dict, label: str, close: bool = False):
        labels = [item["name"] for item in issue.get("labels", []) if item["name"] not in LABELS]
        payload = {"labels": labels + [label]}
        if close:
            payload.update(state="closed", state_reason="completed" if label == "claim-complete" else "not_planned")
        return self.call("PATCH", self.route(f"issues/{issue['number']}"), payload)

    def ensure_labels(self):
        existing = {item["name"] for item in self.pages(self.route("labels"))}
        for name, color in LABELS.items():
            if name not in existing:
                self.call("POST", self.route("labels"), {"name": name, "color": color})


def accepted_record(issue: dict, comments: list[dict], now: dt.datetime,
                    functions: dict[str, dict] | None = None) -> dict | None:
    record = claim_record(issue, comments)
    if record is None or issue["state"] != "open":
        return None
    if requested_function(issue) != record["function"]:
        raise QueueError("The request changed after acceptance")
    if timestamp(record["issued_at"]) > now:
        raise QueueError("Claim issue time is in the future")
    if timestamp(record["expires_at"]) <= now:
        return None
    if functions is not None and functions.get(record["function"], {}).get("status") != "unmatched":
        return None
    return record


def active_claims(api: GitHub, now: dt.datetime,
                  functions: dict[str, dict] | None = None,
                  issues: list[dict] | None = None) -> dict[str, dict]:
    claims = {}
    for issue in sorted(api.issues() if issues is None else issues, key=lambda row: row["number"]):
        if not is_request(issue):
            continue
        record = accepted_record(issue, api.comments(issue), now, functions)
        if record:
            if record["function"] in claims:
                raise QueueError("Duplicate active claims require maintainer reconciliation")
            claims[record["function"]] = record
    return claims


def reconcile(api: GitHub, functions: dict[str, dict], now: dt.datetime) -> dict:
    api.ensure_labels()
    issues = sorted(api.issues(), key=lambda item: item["number"])
    accepted, pending, counts, summary = {}, [], {}, {"accepted": 0, "closed": 0}

    def close(issue: dict, reason: str, label="claim-rejected"):
        api.comment(issue, reason)
        api.update(issue, label, close=True)
        summary["closed"] += 1

    for issue in issues:
        try:
            record = claim_record(issue, api.comments(issue))
            if record is None:
                pending.append(issue)
                continue
            key = record["function"]
            if requested_function(issue) != key:
                raise QueueError("The requested function changed after acceptance; open a new claim")
            if key not in functions:
                raise QueueError("Function is absent from the current manifest")
            if functions[key]["status"] == "matched":
                close(issue, "This function is already matched in the default branch.", "claim-complete")
                continue
            if timestamp(record["expires_at"]) <= now:
                close(issue, "The claim expired. Your partial work can be kept in a draft PR; claim again to continue.", "claim-expired")
                continue
            if timestamp(record["issued_at"]) > now:
                raise QueueError("Claim issue time is in the future")
            if key in accepted:
                raise QueueError("An earlier issue already holds this function")
            accepted[key] = record
            counts[record["owner"]] = counts.get(record["owner"], 0) + 1
            api.update(issue, "claim-active")
        except QueueError as error:
            close(issue, str(error))

    for stale_issue in pending:
        issue = api.call("GET", api.route(f"issues/{stale_issue['number']}"))
        if issue["state"] != "open":
            continue
        try:
            key = requested_function(issue)
            owner = issue["user"]["login"]
            if key not in functions or functions[key]["status"] != "unmatched":
                raise QueueError("The function is unknown or already matched")
            if key in accepted:
                raise QueueError(f"Already reserved in issue #{accepted[key]['issue']} until {accepted[key]['expires_at']}")
            if counts.get(owner, 0) >= MAX_CLAIMS:
                raise QueueError(f"Release or finish an existing claim before reserving more than {MAX_CLAIMS} functions")
            record = {"function": key, "owner": owner, "issue": issue["number"],
                      "issued_at": iso(now), "expires_at": iso(now + dt.timedelta(hours=LEASE_HOURS))}
            api.comment(issue, f"Reserved for @{owner} until {record['expires_at']}. Close this issue to release it.\n\n"
                        f"<!-- botw-claim-v1 {json.dumps(record, sort_keys=True)} -->")
            accepted[key] = record
            counts[owner] = counts.get(owner, 0) + 1
            api.update(issue, "claim-active")
            summary["accepted"] += 1
        except QueueError as error:
            close(issue, str(error))
    return summary


def reported_blockers(issues: list[dict], functions: dict[str, dict]) -> dict[str, list[dict]]:
    blockers = {}
    for issue in sorted(issues, key=lambda row: row["number"]):
        if (issue.get("state") != "open" or "pull_request" in issue
                or not any(label["name"] == "blocker" for label in issue.get("labels", []))):
            continue
        fields = BLOCKER_FUNCTIONS.findall(issue.get("body") or "")
        if len(fields) != 1:
            continue
        for key in sorted(set(fields[0].split())):
            if key in functions:
                blockers.setdefault(key, []).append({"issue": issue["number"], "url": issue.get("html_url")})
    return blockers


def reported_submissions(pulls: list[dict], functions: dict[str, dict]) -> dict[str, list[dict]]:
    submissions = {}
    for pull in sorted(pulls, key=lambda row: row["number"]):
        if pull.get("state") != "open":
            continue
        fields = SUBMISSION_FUNCTIONS.findall(pull.get("body") or "")
        if len(fields) != 1:
            continue
        keys = {line.strip() for line in fields[0].splitlines() if FUNCTION.fullmatch(line.strip())}
        for key in sorted(keys & functions.keys()):
            submissions.setdefault(key, []).append({"number": pull["number"], "url": pull["html_url"], "draft": pull["draft"]})
    return submissions


def task_list(functions: dict[str, dict], claims: dict[str, dict], blockers: dict[str, list[dict]],
              minimum: int = 0, maximum: int | None = None, categories: list[str] | None = None,
              submissions: dict[str, list[dict]] | None = None) -> list[dict]:
    submissions = submissions or {}
    available = [dict(row, **({"blocker_issues": blockers[key]} if key in blockers else {}),
                      **({"submission_prs": submissions[key]} if key in submissions else {}))
                 for key, row in functions.items()
                 if row["status"] == "unmatched" and key not in claims
                 and minimum <= row.get("size", 0)
                 and (maximum is None or row.get("size", 0) <= maximum)
                 and (not categories or row.get("category") in categories)]
    return sorted(available, key=lambda row: (bool(row.get("submission_prs")), -row.get("priority", 0), row.get("size", 0), row["id"]))


def queue_summary(api: GitHub, functions: dict[str, dict], claims: dict[str, dict],
                  blockers: dict[str, list[dict]], submissions: dict[str, list[dict]] | None = None) -> dict:
    submissions = submissions or {}
    implemented = [row for row in functions.values() if row["status"] == "matched"]
    categories = {}
    for row in functions.values():
        category = categories.setdefault(row.get("category", "unclassified"),
                                         {"reference_functions": 0, "implemented_functions": 0, "available_functions": 0})
        category["reference_functions"] += 1
        category["implemented_functions"] += row["status"] == "matched"
        category["available_functions"] += row["status"] == "unmatched" and row["id"] not in claims
    return {"scope": "Published reference functions only; not whole-game completion",
            "snapshot": api.snapshot, "implementation_basis": "Regular reconstruction source present in the pinned default-branch tree; exact-byte CI results are separate",
            "reference_functions": len(functions),
            "reference_bytes": sum(row.get("size", 0) for row in functions.values()),
            "implemented_functions": len(implemented),
            "implemented_bytes": sum(row.get("size", 0) for row in implemented),
            "available_functions": len(task_list(functions, claims, {})), "claimed_functions": len(claims),
            "reported_blocked_functions": len(blockers),
            "blockers_are_advisory": True, "blockers": blockers,
            "reported_submission_functions": len(submissions),
            "reported_submission_prs": len({pull["number"] for pulls in submissions.values() for pull in pulls}),
            "submissions_are_advisory": True, "submission_prs": submissions,
            "categories": dict(sorted(categories.items()))}


def request_status(api: GitHub, number: int, functions: dict[str, dict], now: dt.datetime) -> dict:
    issue = api.call("GET", api.route(f"issues/{number}"))
    if not is_request(issue):
        raise QueueError("This issue is not a function claim")
    comments = api.comments(issue)
    record = accepted_record(issue, comments, now, functions)
    authoritative = claim_record(issue, comments)
    if record:
        state = "active"
    elif authoritative and functions.get(authoritative["function"], {}).get("status") == "matched":
        state = "complete"
    elif authoritative and timestamp(authoritative["expires_at"]) <= now:
        state = "expired"
    elif issue["state"] == "closed":
        state = "rejected" if any(label["name"] == "claim-rejected" for label in issue.get("labels", [])) else "closed"
    else:
        state = "pending"
    result = {"issue": number, "state": state, "issue_state": issue["state"],
              "accepted": record is not None, "claim": record}
    if state == "pending":
        result["next"] = f"python3 tools/community.py status {number} --wait 120"
    return result


def wait_for_request(api: GitHub, number: int, functions: dict[str, dict], seconds: int) -> dict:
    deadline = time.monotonic() + seconds
    result = request_status(api, number, functions, dt.datetime.now(dt.timezone.utc))
    while result["state"] == "pending":
        remaining = deadline - time.monotonic()
        if remaining <= 0:
            return result
        time.sleep(min(5, remaining))
        if time.monotonic() >= deadline:
            return result
        result = request_status(api, number, functions, dt.datetime.now(dt.timezone.utc))
    return result


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", default=REPO)
    parser.add_argument("--manifest", type=Path, default=ROOT / "config/functions.json",
                        help="Trusted default-branch checkout manifest for reconcile only")
    commands = parser.add_subparsers(dest="command", required=True)
    commands.add_parser("summary", help="Summarize published references and advisory blocker issues")
    listing = commands.add_parser("list", help="List available tasks")
    listing.add_argument("--limit", type=int, default=10)
    claim = commands.add_parser("claim", help="Request a six-hour reservation")
    claim.add_argument("function", nargs="?")
    for command in (listing, claim):
        command.add_argument("--min-size", type=int, default=0, help="Minimum original code bytes")
        command.add_argument("--max-size", type=int, help="Maximum original code bytes")
        command.add_argument("--category", action="append", help="Category to include; repeat for several")
    status = commands.add_parser("status", help="Show accepted claims, or one request")
    status.add_argument("issue", type=int, nargs="?")
    for command in (claim, status):
        command.add_argument("--wait", type=int, default=0, help="Poll acceptance for at most 0-600 seconds")
    release = commands.add_parser("release", help="Release your own claim")
    release.add_argument("issue", type=int)
    commands.add_parser("reconcile", help="Maintainer workflow: process all open requests")
    args = parser.parse_args(argv)
    try:
        if hasattr(args, "wait") and not 0 <= args.wait <= 600:
            raise QueueError("--wait must be between 0 and 600 seconds")
        if args.command == "status" and args.wait and not args.issue:
            raise QueueError("--wait requires a claim issue number")
        if hasattr(args, "min_size") and (args.min_size < 0 or (args.max_size is not None and args.max_size < args.min_size)):
            raise QueueError("Size filters require 0 <= min-size <= max-size")
        api = GitHub(args.repo)
        now = dt.datetime.now(dt.timezone.utc)
        functions = (read_functions(args.manifest) if args.command == "reconcile"
                     else {} if args.command == "release" else remote_functions(api))
        if args.command == "reconcile":
            result = reconcile(api, functions, now)
        elif args.command == "status" and args.issue:
            result = wait_for_request(api, args.issue, functions, args.wait)
        elif args.command == "release":
            issue = api.call("GET", api.route(f"issues/{args.issue}"))
            user = api.call("GET", "user")["login"]
            if issue["user"]["login"] != user or not is_request(issue):
                raise QueueError("You can release only your own claim issues")
            result = api.call("PATCH", api.route(f"issues/{args.issue}"), {"state": "closed", "state_reason": "not_planned"})
            result = {"issue": result["number"], "state": result["state"]}
        else:
            issues = api.open_issues()
            claims = active_claims(api, now, functions, issues)
            if args.command == "status":
                result = list(claims.values())
            else:
                blockers = reported_blockers(issues, functions)
                submissions = reported_submissions(api.open_pulls(), functions)
                if args.command == "summary":
                    result = queue_summary(api, functions, claims, blockers, submissions)
                else:
                    available = task_list(functions, claims, blockers, args.min_size, args.max_size, args.category, submissions)
                    if args.command == "list":
                        result = available[:max(0, args.limit)]
                    else:
                        key = args.function or (available[0]["id"] if available else None)
                        if key not in {row["id"] for row in available}:
                            raise QueueError("No available task with that id and filters")
                        created = api.call("POST", api.route("issues"), {
                            "title": f"Claim: {key}", "body": f"### Function\n\n{key}\n",
                        })
                        result = {"issue": created["number"], "url": created["html_url"], "accepted": False,
                                  "state": "pending", "next": f"python3 tools/community.py status {created['number']} --wait 120"}
                        if args.wait:
                            result = {**wait_for_request(api, created["number"], functions, args.wait), "url": created["html_url"]}
        print(json.dumps(result, indent=2))
        return 0
    except (QueueError, OSError, json.JSONDecodeError, subprocess.TimeoutExpired) as error:
        print(json.dumps({"error": str(error), "command": args.command}), file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
