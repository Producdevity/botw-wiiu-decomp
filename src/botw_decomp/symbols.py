"""Validate proposed semantic names without changing stable function identities."""
import json
from pathlib import Path
import re
import unicodedata

from . import project

NAME = re.compile(r"[A-Za-z_][A-Za-z_0-9]*(?:::[A-Za-z_][A-Za-z_0-9]*)*\Z")
KEYWORDS = set("""alignas alignof and and_eq asm auto bitand bitor bool break case
catch char char16_t char32_t class compl const constexpr const_cast continue
decltype default delete do double dynamic_cast else enum explicit export extern
false float for friend goto if inline int long mutable namespace new noexcept not
not_eq nullptr operator or or_eq private protected public register reinterpret_cast
return short signed sizeof static static_assert static_cast struct switch template
this thread_local throw true try typedef typeid typename union unsigned using
virtual void volatile wchar_t while xor xor_eq""".split())
FIELDS = {"function", "name", "kind", "status", "evidence", "rationale"}


def _text(value, field):
    if not isinstance(value, str) or not value.strip():
        raise ValueError(f"{field} must be nonempty text")
    if any(unicodedata.category(char).startswith("C") for char in value):
        raise ValueError(f"{field} contains unsafe control characters")
    return value


def validate(catalog, functions):
    if not isinstance(catalog, dict) or set(catalog) != {"schema_version", "functions"}:
        raise ValueError("symbol catalog requires only schema_version and functions")
    if type(catalog["schema_version"]) is not int or catalog["schema_version"] != 1:
        raise ValueError("unsupported symbol catalog schema_version")
    if not isinstance(catalog["functions"], list):
        raise ValueError("symbol catalog functions must be a list")
    result = {}
    for index, row in enumerate(catalog["functions"]):
        label = f"symbols.functions[{index}]"
        if not isinstance(row, dict) or set(row) != FIELDS:
            raise ValueError(f"{label} requires exactly {', '.join(sorted(FIELDS))}")
        function = _text(row["function"], f"{label}.function")
        if not project.FUNCTION_ID.fullmatch(function) or function not in functions:
            raise ValueError(f"{label}: unknown function {function!r}")
        if function in result:
            raise ValueError(f"duplicate symbol function: {function}")
        name = _text(row["name"], f"{label}.name")
        if not NAME.fullmatch(name) or any(part in KEYWORDS for part in name.split("::")):
            raise ValueError(f"{label}.name must be a namespace-qualified C++ identifier")
        if row["kind"] not in ("descriptive", "original"):
            raise ValueError(f"{label}.kind must be descriptive or original")
        if row["status"] not in ("proposed", "reviewed"):
            raise ValueError(f"{label}.status must be proposed or reviewed")
        evidence = row["evidence"]
        if not isinstance(evidence, list) or not evidence:
            raise ValueError(f"{label}.evidence must be a nonempty list of text")
        for item in evidence:
            _text(item, f"{label}.evidence")
        _text(row["rationale"], f"{label}.rationale")
        result[function] = row
    return result


def _unique_object(pairs):
    result = {}
    for key, value in pairs:
        if key in result:
            raise ValueError(f"duplicate JSON field: {key}")
        result[key] = value
    return result


def load(root: Path = project.ROOT):
    path = root / "config/symbols.json"
    catalog = json.loads(path.read_text(encoding="utf-8"), object_pairs_hook=_unique_object)
    return validate(catalog, project.functions(root))
