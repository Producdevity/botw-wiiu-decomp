"""Bounded operand annotations for LLVM's ordinary PowerPC disassembly."""


def annotation(word: int) -> str | None:
    """Describe a supported condition or shift without replacing LLVM's text."""
    if type(word) is not int or not 0 <= word <= 0xFFFFFFFF:
        raise ValueError("instruction must be an unsigned 32-bit word")
    op = word >> 26
    bo, bi = (word >> 21) & 31, (word >> 16) & 31
    if op in (16, 19):
        if bo not in (4, 12):
            return None
        if op == 19 and (((word >> 1) & 1023) != 16 or word & 0xF801):
            return None
        bit = ("lt", "gt", "eq", "so-or-un")[bi % 4]
        sense = "set" if bo == 12 else "clear"
        return f"branch if cr{bi // 4}.{bit} is {sense}"
    if op != 31:
        return None
    xo = (word >> 1) & 1023
    if xo not in (24, 536, 792, 824):
        return None
    source, destination, count = (word >> 21) & 31, (word >> 16) & 31, (word >> 11) & 31
    count_text = f"immediate {count}" if xo == 824 else f"register r{count}"
    return f"shift destination r{destination}, value r{source}, count {count_text}"
