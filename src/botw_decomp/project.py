"""Load public reference metadata and private workstation settings."""
import json
from pathlib import Path
import re

from .data_relocations import DATA_PROFILE, contract

ROOT = Path(__file__).resolve().parents[2]
FUNCTION_ID = re.compile(r"fn_[0-9a-f]{8}\Z")
HASH = re.compile(r"[0-9a-f]{64}\Z")
SOURCE_PRIMITIVES = (
    "void", "bool", "char", "signed char", "unsigned char", "short",
    "unsigned short", "int", "unsigned int", "long", "unsigned long",
    "long long", "unsigned long long", "float", "double", "long double",
)
SOURCE_TYPE = re.compile(
    r"(?:(?:const |volatile |const volatile )?(?:"
    + "|".join(re.escape(name) for name in SOURCE_PRIMITIVES)
    + r"|struct [A-Za-z_][A-Za-z0-9_]*) \*|"
    + "|".join(re.escape(name) for name in SOURCE_PRIMITIVES)
    + r")\Z"
)


def validate_source_contract(value):
    if (not isinstance(value, dict)
            or set(value) != {"return_type", "parameter_types", "variadic"}
            or type(value["variadic"]) is not bool
            or not isinstance(value["parameter_types"], list)
            or len(value["parameter_types"]) > 32):
        raise ValueError("invalid source_contract schema")
    for position, spelling in enumerate([value["return_type"], *value["parameter_types"]]):
        if (not isinstance(spelling, str) or len(spelling) > 128
                or not SOURCE_TYPE.fullmatch(spelling)
                or (position and spelling == "void")):
            raise ValueError("invalid or unsupported source_contract type")


def read_json(path: Path):
    return json.loads(path.read_text(encoding="utf-8"))


def functions(root: Path = ROOT) -> dict[str, dict]:
    manifest = read_json(root / "config/functions.json")
    if manifest.get("schema_version") != 1:
        raise ValueError("unsupported function manifest schema")
    result = {}
    ranges = []
    for row in manifest["functions"]:
        key = row["id"]
        if not FUNCTION_ID.fullmatch(key) or key in result:
            raise ValueError("invalid or duplicate function identifier")
        address, size = int(row["address"], 16), row["size"]
        if key != f"fn_{address:08x}" or address % 4 or not isinstance(size, int) or size <= 0 or size % 4:
            raise ValueError(f"invalid address or size: {key}")
        if address + size > 0x100000000 or not HASH.fullmatch(row["sha256"]):
            raise ValueError(f"invalid range or hash: {key}")
        if row["symbol"] != key or row["source"] != f"reconstructions/{key}.cpp":
            raise ValueError(f"invalid source/symbol convention: {key}")
        if row["status"] not in ("matched", "unmatched"):
            raise ValueError(f"invalid status: {key}")
        if "source_contract" in row:
            validate_source_contract(row["source_contract"])
        if row.get("compiler_profile", "clang-ppc") not in (
                "clang-ppc", "ghs-5.3.22-speed", "ghs-5.3.22-general",
                "ghs-5.3.22-space", "ghs-5.3.22-auto",
                "ghs-5.3.22-speed-notailrecursion-nopipeline",
                "ghs-5.3.22-speed-nounroll", "ghs-5.3.22-speed-noconstprop"):
            raise ValueError(f"invalid compiler profile: {key}")
        for name, value in row.get("bindings", {}).items():
            number = int(value, 16)
            if not FUNCTION_ID.fullmatch(name) or name != f"fn_{number:08x}" or number % 4:
                raise ValueError(f"invalid external binding: {key}")
        profile = row.get("original_profile", "unrelocated")
        if profile not in ("unrelocated", DATA_PROFILE):
            raise ValueError(f"invalid original profile: {key}")
        data_bindings = row.get("data_bindings", {})
        if not isinstance(data_bindings, dict) or (data_bindings and profile != DATA_PROFILE):
            raise ValueError(f"invalid data bindings: {key}")
        for name, value in data_bindings.items():
            if (not isinstance(name, str) or not isinstance(value, str) or
                    not re.fullmatch(r"0x[0-9a-f]{8}", value) or
                    name != f"data_{int(value, 16):08x}"):
                raise ValueError(f"invalid data binding: {key}")
        relocations = row.get("data_relocations", [])
        if ("data_bindings" in row or "data_relocations" in row) and profile != DATA_PROFILE:
            raise ValueError(f"data contract requires the data-address profile: {key}")
        if profile == DATA_PROFILE and "data_relocations" not in row:
            raise ValueError(f"missing data relocation contract: {key}")
        contract(size, {name: int(value, 16) for name, value in data_bindings.items()}, relocations)
        result[key] = row
        ranges.append((address, address + size))
    ranges.sort()
    if any(a[1] > b[0] for a, b in zip(ranges, ranges[1:])):
        raise ValueError("overlapping function ranges")
    for row in result.values():
        compilation_members(row, result)
    return result


def compilation_members(row: dict, rows: dict[str, dict]) -> list[dict]:
    selected, pending = {}, [row]
    while pending:
        member = pending.pop()
        key = member["id"]
        if key in selected:
            continue
        selected[key] = member
        if len(selected) > 8:
            raise ValueError("supporting compilation exceeds eight functions")
        dependencies = member.get("compile_with", [])
        if (not isinstance(dependencies, list) or
                any(not isinstance(name, str) or not FUNCTION_ID.fullmatch(name) or
                    name == key or name not in rows for name in dependencies) or
                len(set(dependencies)) != len(dependencies)):
            raise ValueError(f"invalid supporting compilation references: {key}")
        pending.extend(rows[name] for name in dependencies)
    return [selected[key] for key in sorted(selected)]


def local_config(root: Path = ROOT) -> dict:
    path = root / ".local/config.json"
    if not path.is_file():
        raise ValueError("run setup --rpx /path/to/U-King.rpx first")
    return read_json(path)


def write_json(path: Path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n", encoding="utf-8")
