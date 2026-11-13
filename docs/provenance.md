# Provenance

The 17 initial C++ implementations were written from instruction behavior observed in a locally supplied Wii U v208 RPX. Their generic function names identify addresses rather than claiming recovered original symbols. Each implementation was compiled independently and compared with the original bytes. Inferred signatures are recorded in the manifest.

The Python tooling and synthetic test fixtures were written for this project. No source was copied from the Switch decompilation, BotW-Native or Nintendo SDKs. Public project references used during investigation are linked in [toolchain.md](toolchain.md).

The MIT license covers the source distributed in this repository. It grants no rights to Nintendo game data or third-party compilers. Contributors supply their own original files locally.

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
