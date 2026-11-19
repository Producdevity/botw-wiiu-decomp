# Provenance

The reconstruction sources are independently written from instruction behavior observed in the pinned Wii U v208 RPX. Stable function IDs identify addresses. The verifier compiles each implementation and checks the whole span. Reviewed interface assumptions live in the manifest.

The Python tooling and synthetic test fixtures were written for this project. No source was copied from the Switch decompilation, BotW-Native or Nintendo SDKs. Public project references used during investigation are linked in [toolchain.md](toolchain.md).

Copyright © 2026 Producdevity and contributors. Project source is licensed under
GNU GPL version 3 only ([GPL-3.0-only](../LICENSE)). This grant covers project
source; contributors supply their own game data and third-party compilers locally.

`fn_02e74434` uses an inferred eight-byte `FloatPair` return and forwards three
arguments. The callee and neighboring code consume those argument registers and
perform paired float operations before returning two words. This evidence, not
matching the wrapper alone, supports the float fields and signed/unsigned
parameter choices. Declaring a discarded pointer return produced the wrong
stack frame; the aggregate return reproduces all 32 original bytes naturally.

The Espresso disassembly overlay was independently written from encoding evidence
in Cemu's [interpreter dispatch](https://github.com/cemu-project/Cemu/blob/main/src/Cafe/HW/Espresso/Interpreter/PPCInterpreterImpl.cpp)
and [PSQ field extraction](https://github.com/cemu-project/Cemu/blob/main/src/Cafe/HW/Espresso/Recompiler/PPCRecompilerImlGenFPU.cpp),
consulted 2026-11-13. No implementation code was copied. It decodes D-form
`psq_l`, `psq_lu`, `psq_st`, and `psq_stu`: signed 12-bit displacement,
one-bit W, and three-bit GQR index. W=0 selects a pair; GQR contents determine
the element type and scale at runtime. An encoding alone does not establish a
plain float copy. Update forms with rA=0 are marked reserved.

All opcode-4 words are explicitly marked unsupported Espresso instructions,
including indexed PSQ and paired arithmetic; LLVM's possible VMX interpretation
is suppressed. This is a bounded overlay, not a complete Espresso disassembler.
Only mnemonic/operand text changes; original instruction bytes, addresses,
reference hashes, and exact-match acceptance remain unchanged. Tests use synthetic
encodings. Private RPX disassembly remains under ignored `.local/`.

Private ordinary PowerPC rows also carry independently written condition and
shift-operand annotations. Pure CR branches identify the field, bit and required
state; supported word shifts distinguish register counts from immediate counts.
LLVM's mnemonic, operands, target, address and raw bytes remain intact. Original
row bytes are checked before comments are appended. Other branch-option forms
and unsupported encodings retain LLVM's output.

Encoding facts were checked against the [NXP MPC750 manual, table 2-26 and
instruction listings](https://www.nxp.com/docs/en/reference-manual/MPC750UM.pdf#page=120),
Cemu's [field definitions](https://github.com/cemu-project/Cemu/blob/main/src/Cafe/HW/Espresso/Interpreter/PPCInterpreterInternal.h),
[branch implementation](https://github.com/cemu-project/Cemu/blob/main/src/Cafe/HW/Espresso/Interpreter/PPCInterpreterOPC.cpp)
and [unordered comparison behavior](https://github.com/cemu-project/Cemu/blob/main/src/Cafe/HW/Espresso/Interpreter/PPCInterpreterFPU.cpp).
No implementation was copied. Tests use synthetic encodings. Matching, reference
hashes and inventory selection are unchanged.

The random-state generator and four-output copy were independently reconstructed
from original instruction behavior. The seed recurrence and xorshift transition
were then corroborated against the public
[SEAD reconstruction at the BotW submodule pin](https://github.com/open-ead/sead/blob/f4178a21e21235830357dc27c26a2c29956972ed/modules/src/random/seadRandom.cpp).
No external implementation was imported. The
[random-state aliases](random-state.md) are descriptive, not claimed original
Nintendo symbols.

## Global getter evidence

Independent RPX readers agreed on the getter spans and HA/LO fields. The
[reference manifest](../config/functions.json) records each resolved destination
and pinned interface. The implementations read the original external objects
at runtime. BSS and the writable section flags explain why a named read-only
section or zero-filled file range does not establish a constant.

- The float getters load F1, and inspected consumers use floating-point data.
  This supports the chosen float return. The original declarations and unused
  parameters remain unknown.
- The byte getters zero-extend the loaded byte. Inspected callers test zero,
  store the byte, forward it in argument registers or discard it. The reviewed
  interface preserves the complete byte, and no 0–1 storage invariant is known.
- For the mixed scalar batch, `fn_02a13ed4` feeds a signed conversion and
  `fn_02da9ff8` feeds null checks and pointer dereferences.
- The [global word getter review](global-word-loads.md) records evidence for
  its distinct opaque pointer interfaces and deferred cases.
