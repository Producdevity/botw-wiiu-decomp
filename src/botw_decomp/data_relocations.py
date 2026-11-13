"""Validate trusted per-field dependencies on original data addresses."""
DATA_PROFILE = "cafe-data-address-v1"
WIDTHS = {1: 4, 4: 2, 5: 2, 6: 2}


def contract(size: int, bindings: dict, relocations: list) -> tuple[tuple, ...]:
    if type(size) is not int or size <= 0 or not isinstance(bindings, dict) or not isinstance(relocations, list):
        raise ValueError("invalid data relocation contract")
    for name, value in bindings.items():
        if (not isinstance(name, str) or type(value) is not int or
                not 0 <= value <= 0xFFFFFFFF or name != f"data_{value:08x}"):
            raise ValueError("invalid data binding")
    result, occupied, used = [], set(), set()
    for item in relocations:
        if not isinstance(item, dict) or set(item) != {"offset", "type", "symbol"}:
            raise ValueError("invalid data relocation entry")
        offset, kind, name = item["offset"], item["type"], item["symbol"]
        if (type(offset) is not int or type(kind) is not int or kind not in WIDTHS or
                not isinstance(name, str) or name not in bindings):
            raise ValueError("invalid data relocation field or symbol")
        width = WIDTHS[kind]
        if offset < 0 or offset % min(width, 4) or offset + width > size:
            raise ValueError("data relocation field is outside or misaligned in its function")
        field = set(range(offset, offset + width))
        if occupied.intersection(field):
            raise ValueError("overlapping data relocation fields")
        occupied.update(field)
        used.add(name)
        result.append((offset, kind, name, bindings[name]))
    if used != set(bindings):
        raise ValueError("unused trusted data binding")
    return tuple(sorted(result))
