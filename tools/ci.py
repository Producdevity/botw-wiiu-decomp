#!/usr/bin/env python3
"""Verify candidate sources using this checkout's trusted reference and tools."""

from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))

from botw_decomp import cli, compiler, project, verification_report


class VerificationError(ValueError):
    pass


def tracked_files(root: Path) -> dict[str, tuple[str, str]]:
    result = subprocess.run(
        ["git", "-C", str(root), "ls-files", "--stage", "-z"],
        capture_output=True, check=True, timeout=30,
    )
    files = {}
    for entry in result.stdout.split(b"\0"):
        if not entry:
            continue
        metadata, raw_path = entry.split(b"\t", 1)
        mode, _object_id, stage = metadata.decode("ascii").split()
        name = raw_path.decode("utf-8")
        parts = PurePosixPath(name).parts
        if not parts or PurePosixPath(name).is_absolute() or any(p in (".", "..") for p in parts):
            raise VerificationError(f"Unsafe tracked path: {name!r}")
        if mode not in ("100644", "100755") or stage != "0":
            raise VerificationError(f"Only regular, resolved tracked files are accepted: {name}")
        path = root
        for part in parts:
            path /= part
            if path.is_symlink():
                raise VerificationError(f"Symlinks are not accepted: {name}")
        if not path.is_file():
            raise VerificationError(f"Tracked file is missing: {name}")
        files[name] = (mode, hashlib.sha256(path.read_bytes()).hexdigest())
    if not files:
        raise VerificationError("The checkout has no tracked files; stage the initial repository before checking it")
    return files


def is_header(name: str) -> bool:
    return bool(re.fullmatch(r"include/botw/(?:[A-Za-z0-9_.-]+/)*[A-Za-z0-9_.-]+\.h", name))


def is_document(name: str) -> bool:
    return name in ("README.md", "CONTRIBUTING.md", "CODE_OF_CONDUCT.md", "candidates/README.md") or (
        name.startswith("docs/") and name.endswith(".md")
    )


def inspect_candidate(trusted: Path, candidate: Path, rows: dict[str, dict]) -> list[dict]:
    base_files, head_files = tracked_files(trusted), tracked_files(candidate)
    sources = {row["source"]: row for row in rows.values()}
    for name in sorted(base_files.keys() | head_files.keys()):
        if name.startswith("reconstructions/") and name not in sources:
            raise VerificationError(f"Reconstruction has no trusted reference: {name}")
        if name.startswith("include/") and not is_header(name):
            raise VerificationError(f"Project headers must be include/botw/*.h: {name}")
        if name in sources and name in base_files and name not in head_files:
            raise VerificationError(f"An existing reconstruction cannot be deleted: {name}")
        if base_files.get(name) == head_files.get(name):
            continue
        if name not in sources and not is_header(name) and not is_document(name):
            raise VerificationError(
                f"Maintainer-only verification change: {name}. "
                "Submit reference, tooling, test and workflow changes separately for maintainer review."
            )
    for directory in ("reconstructions", "include"):
        top = candidate / directory
        if top.is_symlink():
            raise VerificationError(f"Symlinks are not accepted: {directory}")
        if top.exists() and not top.is_dir():
            raise VerificationError(f"Expected a directory: {directory}")
        for current, directories, filenames in os.walk(top, followlinks=False):
            for leaf in directories + filenames:
                path = Path(current) / leaf
                name = path.relative_to(candidate).as_posix()
                if path.is_symlink():
                    raise VerificationError(f"Symlinks are not accepted: {name}")
                if path.is_file() and name not in head_files:
                    raise VerificationError(f"Untracked compiler input is not accepted: {name}")
    selected = []
    for name, row in sorted(sources.items()):
        if name in head_files:
            selected.append(row)
        elif row["status"] == "matched":
            raise VerificationError(f"A matched reference is missing its reconstruction: {name}")
    if not selected:
        raise VerificationError("No reconstructions were selected; an empty verification cannot pass")
    return selected


def changed_functions(trusted: Path, candidate: Path, rows: dict[str, dict], selected: list[dict]) -> list[dict]:
    """Rows whose compiler inputs differ from the trusted base; any header change selects everything."""
    base_files, head_files = tracked_files(trusted), tracked_files(candidate)
    changed = {name for name in base_files.keys() | head_files.keys() if base_files.get(name) != head_files.get(name)}
    if any(name.startswith("include/") for name in changed):
        return selected
    return [row for row in selected
            if any(member["source"] in changed for member in project.compilation_members(row, rows))]


def verify_candidate(trusted: Path, candidate: Path, cxx: str, *, rows: dict | None = None,
                     changed_only: bool = False) -> list[dict]:
    rows = project.functions(trusted) if rows is None else rows
    selected = inspect_candidate(trusted, candidate, rows)
    if changed_only:
        selected = changed_functions(trusted, candidate, rows, selected)
    def verify(row):
        return cli.verify(row, cxx, root=candidate, image=None, references=rows)

    with ThreadPoolExecutor(max_workers=min(os.cpu_count() or 1, 4)) as workers:
        return list(workers.map(verify, selected))


def git_output(root: Path, *args: str) -> str:
    return subprocess.run(["git", "-C", str(root), *args], check=True, capture_output=True,
                          text=True, timeout=30).stdout


def write_changed_summary(results: list[dict], rows: dict) -> None:
    summary_path = os.environ.get("GITHUB_STEP_SUMMARY")
    if not summary_path:
        return
    matched = sorted(result["function"] for result in results if result.get("matched") is True)
    failed = sorted(result["function"] for result in results if result.get("matched") is not True)
    lines = ["## Exact PowerPC verification (changed functions)", "",
             f"{len(matched):,} matched ({sum(rows[key]['size'] for key in matched):,} bytes) · {len(failed):,} failed", ""]
    for title, keys in (("Failed", failed), ("Matched", matched)):
        if keys:
            lines.append(f"**{title}:** " + ", ".join(f"`{key}`" for key in keys[:50])
                         + (f" and {len(keys) - 50:,} more" if len(keys) > 50 else ""))
    if not results:
        lines.append("No reconstruction or header changed; nothing needed compilation.")
    with open(summary_path, "a", encoding="utf-8") as summary:
        summary.write("\n".join(lines) + "\n")


def write_github_report(candidate: Path, rows: dict, target: dict, results: list[dict],
                        base_run: str | None) -> None:
    summary_path = os.environ.get("GITHUB_STEP_SUMMARY")
    output_path = os.environ.get("GITHUB_OUTPUT")
    if not (summary_path or output_path):
        return
    matched = {result["function"] for result in results if result.get("matched") is True}
    failures = {result["function"] for result in results if result.get("matched") is not True}
    if len(matched) + len(failures) != len(results) or matched & failures:
        raise VerificationError("duplicate verification results")
    report = {
        "target": target["id"],
        "base_commit": git_output(ROOT, "rev-parse", "HEAD").strip(),
        "commit": git_output(candidate, "rev-parse", "HEAD").strip(),
        "text_bytes": verification_report.text_size(target, rows),
        "matched_bytes": sum(rows[key]["size"] for key in matched),
        "matched_functions": len(matched),
        "failed_functions": len(failures),
    }
    verification_report.validate_report(report)
    if summary_path:
        baseline = None
        if base_run:
            names = set(git_output(ROOT, "ls-files", "-z", "--", "reconstructions/").split("\0"))
            baseline = {key for key, row in rows.items() if row["source"] in names}
        with open(summary_path, "a", encoding="utf-8") as summary:
            summary.write(verification_report.github_summary(report, failures, matched, baseline, base_run, rows))
    if output_path and not failures:
        with open(output_path, "a", encoding="utf-8") as output:
            output.write("report=" + json.dumps(report, separators=(",", ":")) + "\n")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--candidate", required=True, type=Path)
    parser.add_argument("--compiler", default="clang++-18")
    parser.add_argument("--base-run", help="Successful master workflow run for the exact trusted base")
    parser.add_argument("--changed-only", action="store_true",
                        help="compile only functions whose sources changed; headers changes still rebuild everything")
    args = parser.parse_args(argv)
    try:
        if args.base_run and not re.fullmatch(r"[1-9][0-9]*", args.base_run):
            raise VerificationError("invalid trusted base run ID")
        candidate = args.candidate.resolve(strict=True)
        cxx = compiler.locate(args.compiler)
        print(json.dumps({"compiler": compiler.version(cxx)}), flush=True)
        rows = project.functions(ROOT)
        target = project.read_json(ROOT / "config/target.json")
        results = verify_candidate(ROOT, candidate, cxx, rows=rows, changed_only=args.changed_only)
        for result in results:
            print(json.dumps(result, sort_keys=True), flush=True)
        failed = [result for result in results if result.get("matched") is not True]
        print(json.dumps({"status": "failed" if failed else "passed", "checked": len(results),
                          "matched": len(results) - len(failed), "failed": len(failed)}))
        if args.changed_only:
            write_changed_summary(results, rows)
        else:
            write_github_report(candidate, rows, target, results, args.base_run)
        return 1 if failed else 0
    except (ValueError, OSError, KeyError, subprocess.SubprocessError) as error:
        print(f"ci: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
