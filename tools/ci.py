#!/usr/bin/env python3
"""Verify candidate sources using this checkout's trusted reference and tools."""

from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))

from botw_decomp import cli, compiler, project


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
    return name in ("README.md", "CONTRIBUTING.md", "CODE_OF_CONDUCT.md") or (
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


def verify_candidate(trusted: Path, candidate: Path, cxx: str) -> list[dict]:
    rows = project.functions(trusted)
    selected = inspect_candidate(trusted, candidate, rows)
    results = [cli.verify(row, cxx, root=candidate, image=None, references=rows) for row in selected]
    return results


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--candidate", required=True, type=Path)
    parser.add_argument("--compiler", default="clang++-18")
    args = parser.parse_args(argv)
    try:
        candidate = args.candidate.resolve(strict=True)
        cxx = compiler.locate(args.compiler)
        print(json.dumps({"compiler": compiler.version(cxx)}), flush=True)
        results = verify_candidate(ROOT, candidate, cxx)
        for result in results:
            print(json.dumps(result, sort_keys=True), flush=True)
        failed = [result for result in results if result.get("matched") is not True]
        print(json.dumps({"status": "failed" if failed else "passed", "checked": len(results),
                          "matched": len(results) - len(failed), "failed": len(failed)}))
        return 1 if failed else 0
    except (ValueError, OSError, KeyError, subprocess.SubprocessError) as error:
        print(f"ci: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
