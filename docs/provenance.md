# Provenance

The 17 initial C++ implementations were written from instruction behavior observed in a locally supplied Wii U v208 RPX. Their generic function names identify addresses rather than claiming recovered original symbols. Each implementation was compiled independently and compared with the original bytes. Inferred signatures are recorded in the manifest.

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
