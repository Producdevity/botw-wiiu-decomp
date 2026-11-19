"""Trusted metadata for original Cafe function-import REL24 branches."""
import re


IMPORT_PROFILE = "cafe-import-rel24-v1"
MIXED_PROFILE = "cafe-data-import-rel24-v1"
NAME = re.compile(r"[A-Za-z_][A-Za-z_0-9]*\Z")
THUNK = re.compile(r"fn_[0-9a-f]{8}\Z")


def import_contract(size, bindings, records):
    """Validate and normalize original relative branch fields to import thunks."""
    if not isinstance(records, list):
        raise ValueError("invalid import relocation list")
    result = []
    seen = set()
    for record in records:
        if (not isinstance(record, dict) or set(record) !=
                {"offset", "symbol", "library", "name"}):
            raise ValueError("invalid import relocation fields")
        offset, symbol, library, name = (
            record[key] for key in ("offset", "symbol", "library", "name")
        )
        if (type(offset) is not int or offset % 4 or not 0 <= offset <= size - 4
                or offset in seen):
            raise ValueError("invalid or duplicate import relocation offset")
        if (not isinstance(symbol, str) or not THUNK.fullmatch(symbol)
                or symbol not in bindings or bindings[symbol] != int(symbol[3:], 16)
                or bindings[symbol] % 4):
            raise ValueError("import relocation requires a bound thunk address")
        if not all(isinstance(value, str) and NAME.fullmatch(value) for value in (library, name)):
            raise ValueError("invalid import library or function name")
        seen.add(offset)
        result.append((offset, symbol, library, name, bindings[symbol]))
    return tuple(sorted(result))
