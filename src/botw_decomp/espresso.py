"""Small Espresso decoding overlay; does not rewrite instruction bytes."""

from dataclasses import dataclass


_PSQ = {56: "psq_l", 57: "psq_lu", 60: "psq_st", 61: "psq_stu"}


@dataclass(frozen=True)
class Instruction:
    text: str
    floating_point: bool


def decode(word: int) -> Instruction | None:
    """Return an Espresso override, or None for LLVM's ordinary PPC path.

    Opcode 4 is deliberately unsupported, including its non-floating forms.
    Generic PPC tools can otherwise mistake this space for VMX instructions.
    """
    if type(word) is not int or not 0 <= word <= 0xFFFFFFFF:
        raise ValueError("instruction must be an unsigned 32-bit word")
    op = word >> 26
    if op == 4:
        return Instruction("<unsupported Espresso opcode 4>", False)
    if op not in _PSQ:
        return None
    register = (word >> 21) & 31
    base = (word >> 16) & 31
    if op in (57, 61) and base == 0:
        return Instruction("<reserved Espresso PSQ update with rA=0>", False)
    displacement = word & 0xFFF
    if displacement & 0x800:
        displacement -= 0x1000
    w, gqr = (word >> 15) & 1, (word >> 12) & 7
    return Instruction(f"{_PSQ[op]} f{register}, {displacement}(r{base}), {w}, {gqr}", True)
