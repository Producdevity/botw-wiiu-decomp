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
