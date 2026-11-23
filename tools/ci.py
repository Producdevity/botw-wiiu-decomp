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


def select_candidate(trusted: Path, candidate: Path, rows: dict, changed_only: bool) -> list[dict]:
    selected = inspect_candidate(trusted, candidate, rows)
    return changed_functions(trusted, candidate, rows, selected) if changed_only else selected


def parse_shard(value: str) -> tuple[int, int]:
    match = re.fullmatch(r"([0-9]+)/([1-9][0-9]*)", value)
    if not match or int(match[1]) >= int(match[2]):
        raise VerificationError(f"invalid shard {value!r}; expected INDEX/COUNT with INDEX < COUNT")
    return int(match[1]), int(match[2])


def verify_candidate(trusted: Path, candidate: Path, cxx: str, *, rows: dict | None = None,
                     changed_only: bool = False, shard: tuple[int, int] = (0, 1)) -> list[dict]:
    rows = project.functions(trusted) if rows is None else rows
    index, count = shard
    selected = select_candidate(trusted, candidate, rows, changed_only)[index::count]

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


def write_shard_results(path: Path, trusted: Path, candidate: Path, shard: tuple[int, int],
                        results: list[dict]) -> None:
    path.write_text(json.dumps({
        "shard": shard[0],
        "shards": shard[1],
        "base_commit": git_output(trusted, "rev-parse", "HEAD").strip(),
        "commit": git_output(candidate, "rev-parse", "HEAD").strip(),
        "results": [{"function": result["function"], "matched": result.get("matched") is True}
                    for result in results],
    }, separators=(",", ":")), encoding="utf-8")


def combine_shard_results(directory: Path, trusted: Path, candidate: Path, rows: dict, count: int,
                          changed_only: bool) -> list[dict]:
    """Accept shard results only when they cover this run's selection exactly once."""
    base_commit = git_output(trusted, "rev-parse", "HEAD").strip()
    commit = git_output(candidate, "rev-parse", "HEAD").strip()
    files = sorted(directory.glob("*.json"))
    if len(files) != count:
        raise VerificationError(f"expected {count} shard result files, found {len(files)}")
    seen_shards, results = set(), []
    for path in files:
        shard = json.loads(path.read_text(encoding="utf-8"))
        if (shard.get("shards") != count or shard.get("shard") in seen_shards
                or shard.get("shard") not in range(count)):
            raise VerificationError(f"invalid or duplicate shard in {path.name}")
        if shard.get("base_commit") != base_commit or shard.get("commit") != commit:
            raise VerificationError(f"{path.name} was produced for a different commit")
        seen_shards.add(shard["shard"])
        results.extend(shard["results"])
    expected = [row["id"] for row in select_candidate(trusted, candidate, rows, changed_only)]
    functions = [result["function"] for result in results]
    if len(functions) != len(set(functions)) or set(functions) != set(expected):
        raise VerificationError("shard results do not cover the selected functions exactly once")
    return results


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--candidate", required=True, type=Path)
    parser.add_argument("--compiler", default="clang++-18")
    parser.add_argument("--base-run", help="Successful master workflow run for the exact trusted base")
    parser.add_argument("--changed-only", action="store_true",
                        help="compile only functions whose sources changed; headers changes still rebuild everything")
    parser.add_argument("--shard", help="verify only every COUNT-th selected function starting at INDEX (INDEX/COUNT)")
    parser.add_argument("--results", type=Path, help="with --shard, write this shard's results to a file")
    parser.add_argument("--combine", type=Path,
                        help="report from the shard result files in this directory instead of compiling")
    parser.add_argument("--shards", type=int, help="with --combine, the number of shard result files expected")
    args = parser.parse_args(argv)
    try:
        if args.base_run and not re.fullmatch(r"[1-9][0-9]*", args.base_run):
            raise VerificationError("invalid trusted base run ID")
        if args.combine and (args.shard or args.results or not args.shards or args.shards < 1):
            raise VerificationError("--combine needs --shards and excludes --shard and --results")
        if bool(args.shard) != bool(args.results):
            raise VerificationError("--shard and --results are used together")
        candidate = args.candidate.resolve(strict=True)
        rows = project.functions(ROOT)
        target = project.read_json(ROOT / "config/target.json")
        if args.combine:
            results = combine_shard_results(args.combine, ROOT, candidate, rows, args.shards, args.changed_only)
        else:
            shard = parse_shard(args.shard) if args.shard else (0, 1)
            cxx = compiler.locate(args.compiler)
            print(json.dumps({"compiler": compiler.version(cxx)}), flush=True)
            results = verify_candidate(ROOT, candidate, cxx, rows=rows, changed_only=args.changed_only,
                                       shard=shard)
            for result in results:
                print(json.dumps(result, sort_keys=True), flush=True)
            if args.results:
                write_shard_results(args.results, ROOT, candidate, shard, results)
        failed = [result for result in results if result.get("matched") is not True]
        print(json.dumps({"status": "failed" if failed else "passed", "checked": len(results),
                          "matched": len(results) - len(failed), "failed": len(failed)}))
        if not args.results:
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
