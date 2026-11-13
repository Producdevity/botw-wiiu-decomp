"""Report-only PPC32 register-renaming equivalence for a deliberately small ISA.

Contract: ordinary execution with identical initial data memory and register state,
immutable instructions, and only architectural end state and explicit memory events
observable. Fault/debug contexts that inspect intermediate GPRs are outside scope.
"""

from __future__ import annotations

import hashlib
import json
from dataclasses import dataclass

VERSION = 1
MAX_BYTES = 512
MAX_PATHS = 64
SCRATCH = frozenset((0, 10, 11, 12))


class Unsupported(ValueError):
    pass


def _signed(value: int, bits: int) -> int:
    sign = 1 << (bits - 1)
    return (value ^ sign) - sign


def _decode(word: int, pc: int, size: int) -> tuple:
    op = word >> 26
    rt = (word >> 21) & 31
    ra = (word >> 16) & 31
    rb = (word >> 11) & 31
    imm = _signed(word & 0xFFFF, 16)
    if op in (14, 32, 36):
        return ({14: "addi", 32: "lwz", 36: "stw"}[op], rt, ra, imm)
    if op in (10, 11):
        if (word >> 21) & 3:
            raise Unsupported(f"reserved/L compare bits at {pc}")
        return ("cmplwi" if op == 10 else "cmpwi", (word >> 23) & 7,
                ra, word & 0xFFFF if op == 10 else imm)
    if op == 31:
        xo = (word >> 1) & 511
        oe = (word >> 10) & 1
        rc = word & 1
        if xo == 266 and not oe and not rc:
            return ("add", rt, ra, rb)
        if xo in (0, 32) and not oe and not rc and not ((word >> 21) & 3):
            return ("cmplw" if xo == 32 else "cmpw", (word >> 23) & 7,
                    ra, rb)
        raise Unsupported(f"unsupported opcode 31 encoding at {pc}")
    if op == 16:
        bo = rt
        bi = ra
        target = pc + _signed(word & 0xFFFC, 16)
        if bo not in (4, 12) or (word & 3):
            raise Unsupported(f"unsupported bc encoding at {pc}")
        _target(target, pc, size)
        return ("bc", bo, bi, target)
    if op == 18:
        target = pc + _signed(word & 0x03FFFFFC, 26)
        if word & 3:
            raise Unsupported(f"unsupported b encoding at {pc}")
        _target(target, pc, size)
        return ("b", target)
    if op == 19:
        bo = rt
        bi = ra
        bh = (word >> 11) & 3
        reserved = (word >> 13) & 7
        xo = (word >> 1) & 1023
        if xo != 16 or bo not in (4, 12, 20) or bh or reserved or (word & 1):
            raise Unsupported(f"unsupported bclr encoding at {pc}")
        if bo == 20 and bi:
            raise Unsupported(f"noncanonical unconditional bclr BI at {pc}")
        return ("bclr", bo, bi)
    raise Unsupported(f"unsupported opcode at {pc}")


def _target(target: int, pc: int, size: int) -> None:
    if target <= pc or target >= size or target & 3:
        raise Unsupported(f"invalid branch target at {pc}")


def _gpr_fields(inst: tuple) -> tuple[int, ...]:
    op = inst[0]
    if op in ("addi", "lwz", "stw", "add", "cmpw", "cmplw"):
        return tuple(inst[1:4] if op == "add" else
                     inst[1:3] if op in ("addi", "lwz", "stw") else inst[2:4])
    if op in ("cmpwi", "cmplwi"):
        return (inst[2],)
    return ()


def _changed_gprs_are_scratch(original: bytes, candidate: bytes) -> bool:
    if len(original) != len(candidate):
        return False
    size = len(original)
    for pc in range(0, size, 4):
        a = _decode(int.from_bytes(original[pc:pc + 4], "big"), pc, size)
        b = _decode(int.from_bytes(candidate[pc:pc + 4], "big"), pc, size)
        if a[0] != b[0]:
            continue  # Canonical traces reject changed operations.
        for old, new in zip(_gpr_fields(a), _gpr_fields(b)):
            if old != new and (old not in SCRATCH or new not in SCRATCH):
                return False
    return True


@dataclass
class _State:
    pc: int
    regs: list[str]
    cr: list[str]
    events: list[list]

    def fork(self, pc: int, event: list) -> _State:
        return _State(pc, self.regs.copy(), self.cr.copy(), self.events + [event])


def canonical(program: bytes) -> bytes:
    if not program or len(program) > MAX_BYTES or len(program) & 3:
        raise Unsupported("function must have 4..512 aligned bytes")
    size = len(program)
    words = [int.from_bytes(program[i:i + 4], "big") for i in range(0, size, 4)]
    instructions = [_decode(word, pc, size) for pc, word in zip(range(0, size, 4), words)]
    # Every word is decoded before any path is accepted, including unreachable words.
    seen: set[int] = set()
    paths: list[dict] = []
    pending = [_State(0, [f"input_reg{i}" for i in range(32)],
                      [f"input_crfield{i}" for i in range(8)], [])]
    while pending:
        state = pending.pop()
        if len(paths) + len(pending) >= MAX_PATHS:
            raise Unsupported("path limit exceeded")
        pc = state.pc
        if pc >= size:
            raise Unsupported("falloff")
        seen.add(pc)
        inst = instructions[pc // 4]
        op = inst[0]
        regs, cr, events = state.regs, state.cr, state.events
        if op in ("addi", "lwz", "stw"):
            _, rt, ra, imm = inst
            base = "zero" if ra == 0 else regs[ra]
            if op == "addi":
                events.append([pc, op, base, imm])
                regs[rt] = f"value_at_{pc}"
            elif op == "lwz":
                events.append([pc, op, base, imm])
                regs[rt] = f"value_at_{pc}"
            else:
                events.append([pc, op, base, imm, regs[rt]])
            state.pc += 4
        elif op == "add":
            _, rt, ra, rb = inst
            events.append([pc, op, regs[ra], regs[rb]])
            regs[rt] = f"value_at_{pc}"
            state.pc += 4
        elif op in ("cmpwi", "cmplwi", "cmpw", "cmplw"):
            _, bf, ra, other = inst
            rhs = regs[other] if op.endswith("w") else other
            events.append([pc, op, bf, regs[ra], rhs, "input_xer_so"])
            cr[bf] = f"crfield_at_{pc}"
            state.pc += 4
        elif op == "b":
            _, target = inst
            events.append([pc, op, target])
            state.pc = target
        elif op in ("bc", "bclr"):
            _, bo, bi, *rest = inst
            field = cr[bi // 4]
            target = rest[0] if rest else "return"
            if bo == 20:
                events.append([pc, op, bo, bi, field, "return", "taken"])
                _returned(paths, state)
                continue
            if pc + 4 >= size:
                raise Unsupported("conditional falloff")
            branch = [pc, op, bo, bi, field, target, "taken"]
            fall = [pc, op, bo, bi, field, pc + 4, "not_taken"]
            pending.append(state.fork(pc + 4, fall))
            if op == "bclr":
                _returned(paths, state.fork(pc, branch))
                continue
            state.events.append(branch)
            state.pc = target
        else:
            raise AssertionError(op)
        pending.append(state)
    if seen != set(range(0, size, 4)):
        raise Unsupported("unreachable instruction")
    if not paths:
        raise Unsupported("no return")
    paths.sort(key=lambda path: json.dumps(path, sort_keys=True, separators=(",", ":")))
    protected_fields = [[reg if reg not in SCRATCH else None for reg in _gpr_fields(inst)]
                        for inst in instructions]
    payload = {"domain": "ppc32-temporary-gpr-equivalence", "version": VERSION,
               "byte_count": size, "protected_gpr_fields": protected_fields,
               "paths": paths}
    return json.dumps(payload, sort_keys=True, separators=(",", ":")).encode("ascii")


def _returned(paths: list[dict], state: _State) -> None:
    if len(paths) >= MAX_PATHS:
        raise Unsupported("path limit exceeded")
    paths.append({"events": state.events,
                  "final_gpr": {str(i): state.regs[i] for i in range(32) if i not in SCRATCH},
                  "final_cr": state.cr})


def report(original: bytes, candidate: bytes) -> dict:
    result = {"exact_bytes": original == candidate,
              "exact_byte_count": len(original) == len(candidate),
              "equivalent": False, "domain_version": VERSION}
    try:
        lhs = canonical(original)
        rhs = canonical(candidate)
    except Unsupported as exc:
        result["reason"] = str(exc)
        return result
    result["original_semantic_sha256"] = hashlib.sha256(lhs).hexdigest()
    result["candidate_semantic_sha256"] = hashlib.sha256(rhs).hexdigest()
    scratch_only = _changed_gprs_are_scratch(original, candidate)
    result["equivalent"] = lhs == rhs and scratch_only
    if not result["equivalent"]:
        result["reason"] = ("changed GPR fields exceed fixed scratch set" if not scratch_only
                            else "canonical path traces differ")
    return result
