"""Load public reference metadata and private workstation settings."""
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[2]
FUNCTION_ID = re.compile(r"fn_[0-9a-f]{8}\Z")
HASH = re.compile(r"[0-9a-f]{64}\Z")


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
        result[key] = row
        ranges.append((address, address + size))
    ranges.sort()
    if any(a[1] > b[0] for a, b in zip(ranges, ranges[1:])):
        raise ValueError("overlapping function ranges")
    return result


def local_config(root: Path = ROOT) -> dict:
    path = root / ".local/config.json"
    if not path.is_file():
        raise ValueError("run setup --rpx /path/to/U-King.rpx first")
    return read_json(path)


def write_json(path: Path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n", encoding="utf-8")
