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
from urllib.parse import quote


REPO = "Producdevity/botw-wiiu-decomp"
ROOT = Path(__file__).resolve().parents[1]
LEASE_HOURS = 6
MAX_CLAIMS = 8
MAX_REMOTE_MANIFEST_BYTES = 100_000_000
BOT_ID = 41898282
FUNCTION = re.compile(r"fn_[0-9a-f]{8}\Z")
RECORD = re.compile(r"<!-- botw-claim-v1 (\{[^\n]*\}) -->")
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
        if "source" in row:
            if row["source"] != f"reconstructions/{key}.cpp":
                raise QueueError(f"Invalid source path for {key}")
            if row["source"] in (completed_sources or set()):
                row["status"] = "matched"
        result[key] = row
    return result


def read_functions(path: Path, root: Path | None = None) -> dict[str, dict]:
    root = root or path.resolve().parents[1]
    result = parse_functions(json.loads(path.read_text()))
    for row in result.values():
        if "source" not in row:
            continue
        source = root / row["source"]
        if (root / "reconstructions").is_symlink() or source.is_symlink():
            raise QueueError("Reconstruction symlinks are not accepted")
        if source.is_file():
            row["status"] = "matched"
    return result


def remote_functions(api: GitHub) -> dict[str, dict]:
    metadata = api.call("GET", api.route(""))
    branch = metadata.get("default_branch")
    if not isinstance(branch, str) or not branch:
        raise QueueError("Repository has no default branch")
    commit = api.call("GET", api.route(f"commits/{quote(branch, safe='')}"))
    commit_sha = commit.get("sha", "")
    tree_sha = commit.get("commit", {}).get("tree", {}).get("sha", "")
    if not re.fullmatch(r"[0-9a-f]{40}", commit_sha) or not re.fullmatch(r"[0-9a-f]{40}", tree_sha):
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
        return json.loads(response.stdout) if response.stdout.strip() else None

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

    def issues(self) -> list[dict]:
        return [issue for issue in self.pages(self.route("issues?state=open&sort=created&direction=asc"))
                if is_request(issue)]

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
                  functions: dict[str, dict] | None = None) -> dict[str, dict]:
    claims = {}
    for issue in api.issues():
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


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", default=REPO)
    parser.add_argument("--manifest", type=Path, default=ROOT / "config/functions.json",
                        help="Trusted local manifest for reconcile only")
    commands = parser.add_subparsers(dest="command", required=True)
    listing = commands.add_parser("list", help="List available tasks")
    listing.add_argument("--limit", type=int, default=10)
    claim = commands.add_parser("claim", help="Request a six-hour reservation")
    claim.add_argument("function", nargs="?")
    status = commands.add_parser("status", help="Show accepted claims, or one request")
    status.add_argument("issue", type=int, nargs="?")
    release = commands.add_parser("release", help="Release your own claim")
    release.add_argument("issue", type=int)
    commands.add_parser("reconcile", help="Maintainer workflow: process all open requests")
    args = parser.parse_args(argv)
    try:
        api = GitHub(args.repo)
        now = dt.datetime.now(dt.timezone.utc)
        functions = (read_functions(args.manifest) if args.command == "reconcile"
                     else {} if args.command == "release" else remote_functions(api))
        if args.command == "reconcile":
            result = reconcile(api, functions, now)
        elif args.command == "status" and args.issue:
            issue = api.call("GET", api.route(f"issues/{args.issue}"))
            record = accepted_record(issue, api.comments(issue), now, functions)
            result = {"issue": args.issue, "state": issue["state"],
                      "accepted": record is not None, "claim": record}
        elif args.command == "release":
            issue = api.call("GET", api.route(f"issues/{args.issue}"))
            user = api.call("GET", "user")["login"]
            if issue["user"]["login"] != user or not is_request(issue):
                raise QueueError("You can release only your own claim issues")
            result = api.call("PATCH", api.route(f"issues/{args.issue}"), {"state": "closed", "state_reason": "not_planned"})
            result = {"issue": result["number"], "state": result["state"]}
        else:
            claims = active_claims(api, now, functions)
            if args.command == "status":
                result = list(claims.values())
            else:
                available = [row for key, row in functions.items()
                             if row["status"] == "unmatched" and key not in claims]
                available.sort(key=lambda row: (-row.get("priority", 0), row.get("size", 0), row["id"]))
                if args.command == "list":
                    result = available[:max(0, args.limit)]
                else:
                    key = args.function or (available[0]["id"] if available else None)
                    if key not in {row["id"] for row in available}:
                        raise QueueError("No available task with that id")
                    created = api.call("POST", api.route("issues"), {
                        "title": f"Claim: {key}", "body": f"### Function\n\n{key}\n",
                    })
                    result = {"issue": created["number"], "url": created["html_url"],
                              "state": "pending", "next": f"python3 tools/community.py status {created['number']}"}
        print(json.dumps(result, indent=2))
        return 0
    except (QueueError, OSError, json.JSONDecodeError, subprocess.TimeoutExpired) as error:
        print(f"community: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
