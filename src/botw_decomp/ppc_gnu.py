"""Convert Espresso words to the GNU `as` syntax that m2c parses.

This is a table-driven decoder for the integer, branch and scalar floating-point
subset that m2c understands. Anything else raises UnsupportedInstruction, so a
draft is skipped rather than guessed. It is independent of llvm-objdump, whose
operand spelling (bare register numbers, `bf 2`, `bf eq`) m2c cannot read.
"""

import re

CONDITIONS = ("lt", "gt", "eq", "so")
TRUE_BRANCH = {"lt": "blt", "gt": "bgt", "eq": "beq", "so": "bso"}
FALSE_BRANCH = {"lt": "bge", "gt": "ble", "eq": "bne", "so": "bns"}

# xo -> (mnemonic, operand form); form letters: D=rD, S=rS, A=rA, B=rB.
ARITHMETIC = {
    266: ("add", "DAB"), 10: ("addc", "DAB"), 138: ("adde", "DAB"),
    234: ("addme", "DA"), 202: ("addze", "DA"), 491: ("divw", "DAB"),
    459: ("divwu", "DAB"), 235: ("mullw", "DAB"), 104: ("neg", "DA"),
    40: ("subf", "DAB"), 8: ("subfc", "DAB"), 136: ("subfe", "DAB"),
    232: ("subfme", "DA"), 200: ("subfze", "DA"),
}
ARITHMETIC_NO_OE = {75: ("mulhw", "DAB"), 11: ("mulhwu", "DAB")}
LOGICAL = {
    28: "and", 60: "andc", 124: "nor", 444: "or", 412: "orc", 476: "nand",
    284: "eqv", 316: "xor", 24: "slw", 536: "srw", 792: "sraw",
}
UNARY_LOGICAL = {26: "cntlzw", 922: "extsh", 954: "extsb"}
INDEXED_LOADS = {
    23: "lwzx", 55: "lwzux", 87: "lbzx", 119: "lbzux", 279: "lhzx", 311: "lhzux",
    343: "lhax", 375: "lhaux", 534: "lwbrx", 790: "lhbrx", 20: "lwarx",
}
INDEXED_STORES = {
    151: "stwx", 183: "stwux", 215: "stbx", 247: "stbux", 407: "sthx",
    439: "sthux", 662: "stwbrx", 918: "sthbrx",
}
INDEXED_FLOAT_LOADS = {535: "lfsx", 567: "lfsux", 599: "lfdx", 631: "lfdux"}
INDEXED_FLOAT_STORES = {663: "stfsx", 695: "stfsux", 727: "stfdx", 759: "stfdux",
                        983: "stfiwx"}
CACHE_OPS = {54: "dcbst", 86: "dcbf", 246: "dcbtst", 278: "dcbt", 982: "icbi", 1014: "dcbz"}
LOADS = {32: "lwz", 33: "lwzu", 34: "lbz", 35: "lbzu", 40: "lhz", 41: "lhzu",
         42: "lha", 43: "lhau", 46: "lmw"}
STORES = {36: "stw", 37: "stwu", 38: "stb", 39: "stbu", 44: "sth", 45: "sthu", 47: "stmw"}
FLOAT_LOADS = {48: "lfs", 49: "lfsu", 50: "lfd", 51: "lfdu"}
FLOAT_STORES = {52: "stfs", 53: "stfsu", 54: "stfd", 55: "stfdu"}
IMMEDIATE_SIGNED = {7: "mulli", 8: "subfic", 12: "addic", 13: "addic."}
IMMEDIATE_LOGICAL = {24: "ori", 25: "oris", 26: "xori", 27: "xoris", 28: "andi.", 29: "andis."}
CR_LOGIC = {257: "crand", 129: "crandc", 289: "creqv", 225: "crnand", 33: "crnor",
            449: "cror", 417: "crorc", 193: "crxor"}
FLOAT_A = {18: "fdiv", 20: "fsub", 21: "fadd", 22: "fsqrt", 24: "fres", 25: "fmul",
           26: "frsqrte", 28: "fmsub", 29: "fmadd", 30: "fnmsub", 31: "fnmadd", 23: "fsel"}
FLOAT_A_SINGLE = {18, 20, 21, 22, 24, 25, 28, 29, 30, 31}
FLOAT_A_UNARY = {22, 24, 26}
FLOAT_A_NO_B = {25}
FLOAT_A_FOUR = {23, 28, 29, 30, 31}
FLOAT_X = {12: "frsp", 14: "fctiw", 15: "fctiwz", 40: "fneg", 72: "fmr",
           136: "fnabs", 264: "fabs"}
SPECIAL_REGISTERS = {1: "xer", 8: "lr", 9: "ctr"}


class UnsupportedInstruction(ValueError):
    pass


def _signed(value: int, bits: int) -> int:
    return value - (1 << bits) if value >> (bits - 1) else value


def _hex(value: int) -> str:
    return f"0x{value:x}"


def symbol_label(address: int) -> str:
    return f".L{address:08x}"


def _branch_name(bo: int, bi: int, suffix: str) -> tuple[str, str]:
    """Return (mnemonic, condition-register operand or '') for a simple BO/BI pair."""
    field, bit = divmod(bi, 4)
    condition = CONDITIONS[bit]
    if bo & 0x14 == 0x04:
        name = TRUE_BRANCH[condition] if bo & 8 else FALSE_BRANCH[condition]
        return name + suffix, f"cr{field}" if field else ""
    raise UnsupportedInstruction("counter-conditional branch")


def decode_word(word: int, address: int, locals_: set[int], names: dict[int, str],
                relocations: dict[int, tuple[str, int]]) -> str:
    """Decode one instruction. `relocations` maps an instruction address to (symbol, type)."""
    op = word >> 26
    rd = (word >> 21) & 31
    ra = (word >> 16) & 31
    rb = (word >> 11) & 31
    rc = word & 1
    dot = "." if rc else ""
    imm = word & 0xFFFF
    simm = _signed(imm, 16)
    reloc = relocations.get(address)

    def r(n): return f"r{n}"
    def f(n): return f"f{n}"
    def displacement() -> str:
        if reloc:
            symbol, kind = reloc
            if kind != 4:
                raise UnsupportedInstruction("unexpected relocation on a displacement")
            return f"{symbol}@l"
        return str(simm)
    def immediate_signed() -> str:
        if reloc:
            symbol, kind = reloc
            return f"{symbol}@l" if kind == 4 else f"{symbol}@ha"
        return str(simm)
    def target(destination: int) -> str:
        destination &= 0xFFFFFFFF
        if destination in locals_:
            return symbol_label(destination)
        if destination in names:
            return names[destination]
        return f"fn_{destination:08x}"

    if op == 7 or op == 8 or op == 12 or op == 13:
        return f"{IMMEDIATE_SIGNED[op]} {r(rd)}, {r(ra)}, {immediate_signed()}"
    if op == 14:
        if ra == 0:
            return f"li {r(rd)}, {immediate_signed()}"
        return f"addi {r(rd)}, {r(ra)}, {immediate_signed()}"
    if op == 15:
        if reloc:
            symbol, kind = reloc
            if ra == 0:
                return f"lis {r(rd)}, {symbol}@{'ha' if kind == 6 else 'h'}"
            return f"addis {r(rd)}, {r(ra)}, {symbol}@{'ha' if kind == 6 else 'h'}"
        if ra == 0:
            return f"lis {r(rd)}, {_hex(imm)}"
        return f"addis {r(rd)}, {r(ra)}, {simm}"
    if op in (10, 11):
        if rd & 1:
            raise UnsupportedInstruction("64-bit compare")
        name = "cmplwi" if op == 10 else "cmpwi"
        value = imm if op == 10 else simm
        return f"{name} cr{rd >> 2}, {r(ra)}, {value}"
    if op in IMMEDIATE_LOGICAL:
        if op == 24 and rd == 0 and ra == 0 and imm == 0:
            return "nop"
        return f"{IMMEDIATE_LOGICAL[op]} {r(ra)}, {r(rd)}, {_hex(imm)}"
    if op == 20 or op == 21:
        name = "rlwimi" if op == 20 else "rlwinm"
        return f"{name}{dot} {r(ra)}, {r(rd)}, {rb}, {(word >> 6) & 31}, {(word >> 1) & 31}"
    if op == 23:
        return f"rlwnm{dot} {r(ra)}, {r(rd)}, {r(rb)}, {(word >> 6) & 31}, {(word >> 1) & 31}"
    if op in LOADS:
        return f"{LOADS[op]} {r(rd)}, {displacement()}({r(ra)})"
    if op in STORES:
        return f"{STORES[op]} {r(rd)}, {displacement()}({r(ra)})"
    if op in FLOAT_LOADS:
        return f"{FLOAT_LOADS[op]} {f(rd)}, {displacement()}({r(ra)})"
    if op in FLOAT_STORES:
        return f"{FLOAT_STORES[op]} {f(rd)}, {displacement()}({r(ra)})"
    if op == 18:
        destination = _signed(word & 0x03FFFFFC, 26)
        if not word & 2:
            destination += address
        return f"{'bl' if word & 1 else 'b'} {target(destination)}"
    if op == 16:
        bo, bi = rd, ra
        destination = _signed(word & 0xFFFC, 16)
        if not word & 2:
            destination += address
        if word & 1:
            raise UnsupportedInstruction("conditional call")
        if bo & 0x1E == 0x10:
            return f"bdnz {target(destination)}"
        if bo & 0x1E == 0x12:
            return f"bdz {target(destination)}"
        if bo & 0x14 == 0x14:
            raise UnsupportedInstruction("unconditional bc")
        if bo & 0x04 == 0:
            raise UnsupportedInstruction("counter branch")
        name, field = _branch_name(bo, bi, "")
        arguments = f"{field}, " if field else ""
        return f"{name} {arguments}{target(destination)}"
    if op == 19:
        xo = (word >> 1) & 0x3FF
        if xo == 16 or xo == 528:
            bo, bi, link = rd, ra, word & 1
            if rb:
                raise UnsupportedInstruction("branch hint field")
            if bo & 0x14 == 0x14:
                return ("blr" if xo == 16 else "bctr") + ("l" if link else "")
            if bo & 0x04 == 0:
                raise UnsupportedInstruction("counter branch")
            name, field = _branch_name(bo, bi, "")
            suffix = "lr" if xo == 16 else "ctr"
            if link:
                raise UnsupportedInstruction("conditional indirect call")
            return f"{name}{suffix}" + (f" {field}" if field else "")
        if xo in CR_LOGIC:
            return f"{CR_LOGIC[xo]} {rd}, {ra}, {rb}"
        if xo == 150:
            return "isync"
        raise UnsupportedInstruction("opcode 19")
    if op == 31:
        xo = (word >> 1) & 0x3FF
        oe = "o" if word & 0x400 else ""
        base = xo & 0x1FF
        if base in ARITHMETIC:
            name, form = ARITHMETIC[base]
            operands = ", ".join(r({"D": rd, "A": ra, "B": rb}[c]) for c in form)
            return f"{name}{oe}{dot} {operands}"
        if xo in ARITHMETIC_NO_OE:
            name, form = ARITHMETIC_NO_OE[xo]
            return f"{name}{dot} {r(rd)}, {r(ra)}, {r(rb)}"
        if xo in LOGICAL:
            if xo == 444 and rd == rb:
                return f"mr{dot} {r(ra)}, {r(rd)}"
            return f"{LOGICAL[xo]}{dot} {r(ra)}, {r(rd)}, {r(rb)}"
        if xo in UNARY_LOGICAL:
            return f"{UNARY_LOGICAL[xo]}{dot} {r(ra)}, {r(rd)}"
        if xo == 824:
            return f"srawi{dot} {r(ra)}, {r(rd)}, {rb}"
        if xo in (0, 32):
            if rd & 1:
                raise UnsupportedInstruction("64-bit compare")
            return f"{'cmpw' if xo == 0 else 'cmplw'} cr{rd >> 2}, {r(ra)}, {r(rb)}"
        if xo in INDEXED_LOADS:
            return f"{INDEXED_LOADS[xo]} {r(rd)}, {r(ra)}, {r(rb)}"
        if xo in INDEXED_STORES:
            return f"{INDEXED_STORES[xo]} {r(rd)}, {r(ra)}, {r(rb)}"
        if xo == 150:
            return f"stwcx. {r(rd)}, {r(ra)}, {r(rb)}"
        if xo in INDEXED_FLOAT_LOADS:
            return f"{INDEXED_FLOAT_LOADS[xo]} {f(rd)}, {r(ra)}, {r(rb)}"
        if xo in INDEXED_FLOAT_STORES:
            return f"{INDEXED_FLOAT_STORES[xo]} {f(rd)}, {r(ra)}, {r(rb)}"
        if xo in CACHE_OPS:
            return f"{CACHE_OPS[xo]} {r(ra)}, {r(rb)}"
        if xo in (339, 467):
            spr = ra | (rb << 5)
            name = SPECIAL_REGISTERS.get(spr)
            if name is None:
                raise UnsupportedInstruction("special-purpose register")
            return f"{'mf' if xo == 339 else 'mt'}{name} {r(rd)}"
        if xo == 19:
            return f"mfcr {r(rd)}"
        if xo == 598:
            return "sync"
        if xo == 854:
            return "eieio"
        raise UnsupportedInstruction("opcode 31")
    if op in (59, 63):
        xo10 = (word >> 1) & 0x3FF
        xo5 = xo10 & 31
        c = (word >> 6) & 31
        suffix = "s" if op == 59 else ""
        if op == 63:
            if xo10 in (0, 32):
                return f"{'fcmpu' if xo10 == 0 else 'fcmpo'} cr{rd >> 2}, {f(ra)}, {f(rb)}"
            if xo10 in FLOAT_X:
                return f"{FLOAT_X[xo10]}{dot} {f(rd)}, {f(rb)}"
            if xo10 == 583:
                return f"mffs{dot} {f(rd)}"
        if xo5 in FLOAT_A and (op == 63 or xo5 in FLOAT_A_SINGLE):
            name = FLOAT_A[xo5] + (suffix if xo5 != 23 else "")
            if xo5 in FLOAT_A_UNARY:
                operands = (f(rd), f(rb))
            elif xo5 in FLOAT_A_NO_B:
                operands = (f(rd), f(ra), f(c))
            elif xo5 in FLOAT_A_FOUR:
                operands = (f(rd), f(ra), f(c), f(rb))
            else:
                operands = (f(rd), f(ra), f(rb))
            return f"{name}{dot} {', '.join(operands)}"
        raise UnsupportedInstruction(f"opcode {op}")
    raise UnsupportedInstruction(f"opcode {op}")


def _branch_target(word: int, address: int) -> int | None:
    op = word >> 26
    if op == 18:
        offset = _signed(word & 0x03FFFFFC, 26)
    elif op == 16:
        offset = _signed(word & 0xFFFC, 16)
    else:
        return None
    return (offset if word & 2 else address + offset) & 0xFFFFFFFF


def to_gnu_asm(code: bytes, address: int, symbol: str,
               names: dict[int, str] | None = None,
               data_relocations: list[dict] | None = None) -> str:
    """Return GNU-syntax assembly for one function.

    `names` maps absolute callee addresses to symbols. `data_relocations` uses the
    manifest shape {offset, type, symbol}, where offset points at the 16-bit field.
    """
    if not isinstance(code, bytes) or not code or len(code) % 4 or address % 4:
        raise ValueError("code must be nonempty, word-aligned bytes")
    if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", symbol):
        raise ValueError("invalid symbol")
    names = names or {}
    relocations = {}
    for item in data_relocations or []:
        relocations[address + (item["offset"] & ~3)] = (item["symbol"], item["type"])
    end = address + len(code)
    words = [int.from_bytes(code[i:i + 4], "big") for i in range(0, len(code), 4)]
    locals_ = set()
    for index, word in enumerate(words):
        destination = _branch_target(word, address + index * 4)
        if destination is not None and address <= destination < end and not word & 1:
            locals_.add(destination)
    lines = [".set noat", f"glabel {symbol}"]
    for index, word in enumerate(words):
        site = address + index * 4
        if site in locals_:
            lines.append(f"{symbol_label(site)}:")
        text = decode_word(word, site, locals_, names, relocations)
        if text == "bctr" and index == len(words) - 1:
            # m2c reads a final indirect jump as an unresolved jump table; as with `b fn`,
            # present the tail call as a call followed by a return.
            lines += ["bctrl", "blr"]
            continue
        lines.append(text)
    return "\n".join(lines) + "\n"
