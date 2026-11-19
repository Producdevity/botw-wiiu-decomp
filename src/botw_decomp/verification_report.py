"""Summarize exact function matches against the full target text."""

from __future__ import annotations

from decimal import Decimal
import json
from pathlib import Path
import re


def text_size(target: dict, rows: dict) -> int:
    spans = []
    for section in target["text"]:
        size = section["size"]
        if type(size) is not int or size <= 0:
            raise ValueError("invalid target text section size")
        start = int(section["address"], 16)
        if start < 0 or start + size > 1 << 32:
            raise ValueError("invalid target text section range")
        spans.append((start, start + size))
    spans.sort()
    if not spans or any(left[1] > right[0] for left, right in zip(spans, spans[1:])):
        raise ValueError("missing or overlapping target text sections")
    for key, row in rows.items():
        start = int(row["address"], 16)
        if not any(lo <= start and start + row["size"] <= hi for lo, hi in spans):
            raise ValueError(f"trusted reference lies outside target text: {key}")
    return sum(hi - lo for lo, hi in spans)


def exact_percentage(matched_bytes: int, text_bytes: int) -> str:
    if not 0 <= matched_bytes <= text_bytes or text_bytes <= 0:
        raise ValueError("invalid exact coverage totals")
    return f"{Decimal(matched_bytes) / Decimal(text_bytes):.2%}"


def github_summary(report: dict, failures: set[str], matched: set[str],
                   baseline: set[str] | None, base_run: str | None, rows: dict) -> str:
    exact = exact_percentage(report["matched_bytes"], report["text_bytes"])
    lines = [
        "## Exact PowerPC verification",
        "",
        f"Target `{report['target']}` · Base `{report['base_commit']}` · Candidate `{report['commit']}`",
        "",
        f"**{exact} exact .text match** "
        f"({report['matched_bytes']:,} / {report['text_bytes']:,} bytes)",
        "",
        f"{len(matched):,} matched · {len(failures):,} failed",
    ]
    groups = [("Failed checks", failures)]
    if baseline is None and report["base_commit"] != report["commit"]:
        lines.extend(("", "The exact base commit has no confirmed master verification run for this report."))
    elif baseline is not None:
        added, lost = matched - baseline, baseline - matched
        delta = sum(rows[key]["size"] for key in added) - sum(rows[key]["size"] for key in lost)
        lines.extend(("", f"Exact byte delta **{delta:+,}** against master verification run `{base_run}`."))
        groups.extend((("New exact matches", added), ("Lost exact matches", lost)))
    for title, keys in groups:
        if keys:
            ids = ", ".join(f"`{key}`" for key in sorted(keys)[:20])
            remaining = f" and {len(keys) - 20:,} more" if len(keys) > 20 else ""
            lines.extend(("", f"**{title} ({len(keys):,})**", "", ids + remaining))
    return "\n".join(lines) + "\n"


def validate_report(report: dict) -> None:
    metrics = {"matched_bytes", "text_bytes", "matched_functions", "failed_functions"}
    if (set(report) != {"target", "commit", "base_commit", *metrics}
            or not re.fullmatch(r"[a-z0-9-]+", report["target"])
            or not re.fullmatch(r"[a-f0-9]{40}", report["commit"])
            or not re.fullmatch(r"[a-f0-9]{40}", report["base_commit"])
            or any(type(report[key]) is not int or report[key] < 0 for key in metrics)):
        raise ValueError("invalid exact verification report")
    exact_percentage(report["matched_bytes"], report["text_bytes"])


def write_progress(directory: Path, report: dict, commit: str, run_id: str) -> None:
    validate_report(report)
    if (report["commit"] != commit or report["base_commit"] != commit
            or report["failed_functions"] or not report["matched_functions"]
            or not re.fullmatch(r"[1-9][0-9]*", run_id)):
        raise ValueError("progress requires a successful build of the exact master commit")
    label = "Exact .text match"
    value = exact_percentage(report["matched_bytes"], report["text_bytes"])
    badge = (
        f'<svg xmlns="http://www.w3.org/2000/svg" width="169" height="20" role="img" aria-label="{label} {value}">'
        f'<title>{label} {value}</title>'
        '<rect width="169" height="20" rx="3" fill="#50555c"/>'
        '<path fill="#176da7" d="M116 0h50a3 3 0 0 1 3 3v14a3 3 0 0 1-3 3h-50z"/>'
        '<g fill="#fff" text-anchor="middle" font-family="Verdana,sans-serif" font-size="11">'
        f'<text x="58" y="14">{label}</text><text x="142" y="14">{value}</text></g></svg>\n'
    )
    (directory / "exact-text.svg").write_text(badge, encoding="utf-8")
    (directory / "progress.json").write_text(
        json.dumps({"schema_version": 1, "run_id": int(run_id), **report}, indent=2) + "\n",
        encoding="utf-8",
    )
