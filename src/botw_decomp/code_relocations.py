"""Trusted per-field dependencies on original code addresses, and profile composition."""
import re

from .data_relocations import DATA_PROFILE
from .import_relocations import IMPORT_PROFILE, MIXED_PROFILE


CODE_PROFILE = "cafe-code-address-v1"
DATA_CODE_PROFILE = "cafe-data-code-address-v1"
CODE_IMPORT_PROFILE = "cafe-code-import-rel24-v1"
DATA_CODE_IMPORT_PROFILE = "cafe-data-code-import-rel24-v1"
PROFILES = {
    "unrelocated": frozenset(),
    DATA_PROFILE: frozenset({"data"}),
    IMPORT_PROFILE: frozenset({"import"}),
    MIXED_PROFILE: frozenset({"data", "import"}),
    CODE_PROFILE: frozenset({"code"}),
    DATA_CODE_PROFILE: frozenset({"data", "code"}),
    CODE_IMPORT_PROFILE: frozenset({"code", "import"}),
    DATA_CODE_IMPORT_PROFILE: frozenset({"data", "code", "import"}),
}
COMPONENT_ORDER = ("data", "code", "import")
WIDTHS = {1: 4, 4: 2, 5: 2, 6: 2}
FUNCTION = re.compile(r"fn_[0-9a-f]{8}\Z")


def profile_name(components) -> str:
    wanted = frozenset(components)
    for name, parts in PROFILES.items():
        if parts == wanted:
            return name
    raise ValueError("no original relocation profile covers these components")


def code_contract(size: int, bindings: dict, relocations: list) -> tuple[tuple, ...]:
    """Validate and normalize absolute fields that hold the address of a bound function."""
    if type(size) is not int or size <= 0 or not isinstance(bindings, dict) or not isinstance(relocations, list):
        raise ValueError("invalid code relocation contract")
    result, occupied = [], set()
    for item in relocations:
        if not isinstance(item, dict) or set(item) != {"offset", "type", "symbol"}:
            raise ValueError("invalid code relocation entry")
        offset, kind, name = item["offset"], item["type"], item["symbol"]
        if (type(offset) is not int or type(kind) is not int or kind not in WIDTHS or
                not isinstance(name, str) or not FUNCTION.fullmatch(name)):
            raise ValueError("invalid code relocation field or symbol")
        destination = int(name[3:], 16)
        if bindings.get(name) != destination or destination % 4:
            raise ValueError("code relocation requires a bound aligned function address")
        width = WIDTHS[kind]
        if offset < 0 or offset % min(width, 4) or offset + width > size:
            raise ValueError("code relocation field is outside or misaligned in its function")
        field = set(range(offset, offset + width))
        if occupied.intersection(field):
            raise ValueError("overlapping code relocation fields")
        occupied.update(field)
        result.append((offset, kind, name, destination))
    return tuple(sorted(result))
