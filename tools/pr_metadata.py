#!/usr/bin/env python3
"""Validate model and effort metadata in a GitHub pull request event."""

from __future__ import annotations

import json
import re
import sys
from pathlib import Path
from typing import Any


ERROR = (
    "Add a Markdown table to the PR body with Role, Model, and "
    "Reasoning / effort columns, and complete every data row. "
    "Use 'not exposed' for unavailable settings."
)
_SEPARATOR_CELL = re.compile(r":?-{3,}:?")


def _visible_lines(body: str) -> list[str]:
    visible: list[str] = []
    fence_char = ""
    fence_size = 0
    in_comment = False
    for line in body.splitlines():
        if fence_char:
            marker = re.match(r"^ {0,3}(`{3,}|~{3,})", line)
            if marker:
                run = marker.group(1)
                if run[0] == fence_char and len(run) >= fence_size and not line[marker.end():].strip():
                    fence_char = ""
                    fence_size = 0
                    visible.append("")
            continue

        text = []
        rest = line
        while rest:
            if in_comment:
                end = rest.find("-->")
                if end < 0:
                    rest = ""
                else:
                    rest = rest[end + 3:]
                    in_comment = False
            else:
                start = rest.find("<!--")
                if start < 0:
                    text.append(rest)
                    rest = ""
                else:
                    text.append(rest[:start])
                    rest = rest[start + 4:]
                    in_comment = True
        line = "".join(text)
        marker = re.match(r"^ {0,3}(`{3,}|~{3,})", line)
        if marker:
            run = marker.group(1)
            fence_char, fence_size = run[0], len(run)
            visible.append("")
            continue
        visible.append(line)
    return visible

def _cells(line: str) -> list[str] | None:
    line = line.strip()
    if not line:
        return None
    parts: list[str] = []
    has_separator = False
    current: list[str] = []
    for char in line:
        if char == "|":
            backslashes = 0
            for previous in reversed(current):
                if previous != "\\":
                    break
                backslashes += 1
            if backslashes % 2 == 0:
                has_separator = True
                parts.append("".join(current).strip())
                current = []
                continue
        current.append(char)
    if not has_separator:
        return None
    parts.append("".join(current).strip())
    if line.startswith("|"):
        parts = parts[1:]
    if line.endswith("|"):
        backslashes = len(line[:-1]) - len(line[:-1].rstrip("\\"))
        if backslashes % 2 == 0:
            parts = parts[:-1]
    return parts


def _separator(cells: list[str]) -> bool:
    return bool(cells) and all(_SEPARATOR_CELL.fullmatch(cell) for cell in cells)


def _column_indices(headers: list[str]) -> tuple[int, int, int] | None:
    normalized = [" ".join(header.lower().split()) for header in headers]
    role = next((i for i, header in enumerate(normalized) if header == "role"), None)
    model = next((i for i, header in enumerate(normalized) if header == "model"), None)
    effort = next(
        (i for i, header in enumerate(normalized)
         if header in {"reasoning", "effort"} or ("reasoning" in header and "effort" in header)),
        None,
    )
    if role is None or model is None or effort is None:
        return None
    return role, model, effort


def validate_body(body: Any) -> tuple[bool, str]:
    if not isinstance(body, str):
        return False, ERROR

    tables: list[tuple[int, tuple[int, int, int], list[list[str]]]] = []
    lines = _visible_lines(body)
    i = 0
    while i + 1 < len(lines):
        headers = _cells(lines[i])
        divider = _cells(lines[i + 1])
        if headers is None or divider is None or not _separator(divider) or len(headers) != len(divider):
            i += 1
            continue
        indices = _column_indices(headers)
        if indices is None:
            i += 1
            continue
        rows: list[list[str]] = []
        j = i + 2
        while j < len(lines):
            row = _cells(lines[j])
            if row is None:
                break
            rows.append(row)
            j += 1
        tables.append((len(headers), indices, rows))
        i = max(j, i + 2)

    data_rows = [row for _, _, rows in tables for row in rows]
    if not data_rows:
        return False, ERROR

    for width, (role, model, effort), rows in tables:
        for row in rows:
            if len(row) != width:
                return False, ERROR
            if not all(row[index].strip() for index in (role, model, effort)):
                return False, ERROR
    return True, "PR model metadata is complete."


def validate_event(event: Any) -> tuple[bool, str]:
    if not isinstance(event, dict):
        return False, ERROR
    pull_request = event.get("pull_request")
    if not isinstance(pull_request, dict):
        return False, ERROR
    return validate_body(pull_request.get("body"))


def main() -> int:
    if len(sys.argv) != 2:
        print(ERROR, file=sys.stderr)
        return 1
    try:
        event = json.loads(Path(sys.argv[1]).read_text(encoding="utf-8"))
    except (OSError, UnicodeError, json.JSONDecodeError):
        print(ERROR, file=sys.stderr)
        return 1
    ok, message = validate_event(event)
    print(message if ok else f"PR metadata check failed: {message}")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
