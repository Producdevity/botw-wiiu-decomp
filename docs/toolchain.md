# Toolchain

GHS 5.3.22 runs locally and produces exact Wii U matches, including loops and an
external call. Use it for broader reconstruction; keep Clang for its verified
leaf functions. BotW's historical compiler version and complete flags remain
unconfirmed.

## Verified target

- Wii U v208 `U-King.rpx`, pinned in [the target manifest](../config/target.json).
- ELF32, big-endian PowerPC. RPX file info reports Cafe SDK `21301`, revision
  `68939`. These identify the SDK, not the compiler.
- No compiler version was recovered from the inspected RPX metadata.

## Clang leaf profile

`clang-ppc` uses the 32-bit PowerPC EABI target and freestanding C++.
Register allocation and C++ ABI differences limit its usefulness beyond simple
leaves. The [compiler module](../src/botw_decomp/compiler.py) defines the exact
flags used by the checker.

## Working GHS profiles

[decomp.me catalogs GHS 5.3.22 for Wii U](https://github.com/decompme/decomp.me/blob/main/cromper/compilers/compilers.linux.yaml).
Its [compiler adapter](https://github.com/decompme/decomp.me/blob/main/cromper/cromper/compilers.py)
uses `wibo` and `bin/cxppc.exe`. The same standalone compiler runs on the
bootstrap Mac through wibo 1.2.0 and Rosetta:

```sh
wibo "$GHS_ROOT/bin/cxppc.exe" -c -Ospeed -bigendian \
  --no_exceptions --no_rtti -tmp=compiler-tmp -o function.o function.cpp
```

| Profile | Optimization |
| --- | --- |
| `ghs-5.3.22-speed` | `-Ospeed` |
| `ghs-5.3.22-general` | `-Ogeneral` |
| `ghs-5.3.22-space` | `-Ospace` |

All three use `-bigendian --no_exceptions --no_rtti`. The compiler defaults to
`-cpu=espresso`. `--version -c function.cpp` reports
`C++POWERPC 5.3.22 RELEASE VERSION`, with EDG frontend 3.10.1 dated September 25,
2013. `-E function.cpp` emits preprocessed source on stdout with `#line`
directives; adding `-P` afterwards redirects preprocessing into a file.

The compiler came from the standalone archive used by the
[decomp.me packaging recipe](https://github.com/decompme/compilers/blob/main/platforms/wiiu/ghs5.3.22/Dockerfile),
without a Cafe SDK. Compiler binaries stay outside version control.

See [toolchain pins](../config/toolchains.json) for release URLs and hashes.

[wibo 1.2.0](https://github.com/decompals/wibo/releases/tag/1.2.0) added GHS
support. Its [macOS build supports Rosetta](https://github.com/decompals/wibo/blob/1.2.0/README.md).
Both macOS and Linux builds are verified; the public acceptance workflow rebuilds all submitted implementations on Ubuntu 24.04.

## Optional m2c drafts

`python3 tools/draft.py install` fetches [m2c](https://github.com/matt-kempster/m2c)
(GPL-3.0) at a pinned commit into `.local/tools/m2c/` and verifies both the
commit and a SHA-256 over the checkout. Nothing is vendored; m2c runs as a
separate process on the Python you already use, so there is no venv. Once it is
installed, `decomp.py packet FUNCTION` also writes
`.local/packets/FUNCTION/draft.cpp`. Without it, packets are unchanged.

The draft converts the original words to GNU `as` syntax with
`src/botw_decomp/ppc_gnu.py` (integer, branch and scalar float instructions; a
function with anything else, such as paired singles, gets no draft). Data
relocations become `data_XXXXXXXX@ha/@l`, callees keep their `fn_XXXXXXXX`
names, and a pinned `source_contract` replaces the inferred signature. Callee
prototypes are known only when the callee row has a contract; otherwise they
are m2c's guesses. `python3 tools/draft.py status` re-verifies the install and
`python3 tools/draft.py draft FUNCTION` prints a draft without writing a packet.

In a 30-function sample of matched sources (16–256 bytes), 26 got a draft, 20
compiled, and 5 matched with no edits, all of them 52 bytes or smaller. Most
misses are near misses: register choice, store order, element width, return
narrowing. Compile errors are mostly void-pointer arithmetic and pointer/integer
mismatches. A draft is a starting point, never evidence for an interface, and
`check` remains the only acceptance.

## Reusable research

| Project | Useful material | Matching status |
| --- | --- | --- |
| [ZeldaRET BotW](https://github.com/zeldaret/botw) | Function identities and engine structures | Switch target; Wii U addresses, layouts and code generation require separate evidence. |
| [red-pro2](https://github.com/aboood40091/red-pro2), [sead](https://github.com/aboood40091/sead) | Wii U engine/class reconstruction | NSMBU; sead explicitly prioritizes functionality because its original compiler version was unavailable. |
| [NW4F-Eft](https://github.com/open-ead/NW4F-Eft/tree/nsmbu) | Wii U particle-library reconstruction | NSMBU; exact matching is not its current priority. |
| [RedHills](https://github.com/Zenith-Team/RedHills) | Open-source Clang fork implementing the GHS C++ ABI | Full matching code generation is explicitly outside its goals. |

Corroborate shared layouts and API hypotheses against the Wii U reference.
Check licenses before importing source.

## Additional verified profiles

Three further fixed profiles recover code-generation differences without changing
reference bytes or permitting source-level assembly:

- `ghs-5.3.22-speed-notailrecursion-nopipeline`: `-Ospeed -Onotailrecursion -Onopipeline`. This restores ordinary call frames and the observed operation/epilogue order in 12 pilot wrappers.
- `ghs-5.3.22-speed-nounroll`: `-Ospeed -Onounroll`. This preserves the counted store loops in three pilot functions.
- `ghs-5.3.22-speed-noconstprop`: `-Ospeed -Onoconstprop`. This preserves the instruction order in the atomic-clear loop.

All retain `-bigendian --no_exceptions --no_rtti`. The flags are documented in
[Green Hills' compiler manual](https://community.renesas.com/cfs-file/__key/communityserver-discussions-components-files/259/0576.build_5F00_v800.pdf);
that manual is for another target/version, so the relevant PowerPC 5.3.22 outputs
were also measured locally against the pinned RPX. This establishes working
profiles, not the historical compilation options of every original module.


The lookup float-triple copies use the opt-in
`ghs-5.3.22-speed-nopeephole` profile with `-Ospeed -Onopeephole`.
The flag is documented under Peephole Optimization in the [Green Hills
manual](https://community.renesas.com/cfs-file/__key/communityserver-discussions-components-files/259/0576.build_5F00_v800.pdf).
Local and CI builds independently check the flag on PowerPC GHS 5.3.22.
The profile is available only on explicitly assigned references.


The opt-in `ghs-5.3.22-speed-single-exit` profile pins
`-Ospeed -Xsingle_exit_from_routine` for the conditional scalar-copy
wrappers. The switch and emitted function size were verified with the
pinned GHS archive.

The opt-in `ghs-5.3.22-speed-no-uvfd-info` profile uses `-Ospeed -Xnouvfd_info`
for native C++ virtual calls. The pinned compiler omits its unused virtual
function deletion metadata and emits an object the exact verifier can check
directly. Reference rows select this profile explicitly.

The opt-in `ghs-5.3.22-speed-no-two-predecessor-merge` profile uses
`-Ospeed -Xnomergeblocks_twopreds` for guarded runtime tag queries.
The pinned build preserves the shared return block and the byte-width
result used by the original executable.

## Intrinsic declarations

`include/botw/ghs_intrinsics.h` centralizes measured PowerPC intrinsic signatures.
`__LWARX`, `__STWCX` and `__DCBST` compile to the corresponding instructions;
the indexed-address argument is required. No assembly or SDK header is included.
`__memory_changed` is a documented compiler barrier that emits no fence
instruction. It preserves the two observed counted loops under `-Ogeneral`;
the original purpose of those loops is unknown. The native
`__schedule_barrier` intrinsic constrains scheduling and also emits no instruction.

GHS also exposes the native `__vec2x32float__` type. Ordinary assignments of
this type reproduce paired-single loads/stores in `fn_0345abf8` and
`fn_0405c160`. An aligned two-pair aggregate reproduces the stack alignment and
swap in `fn_03e8a59c`; a byte cursor preserves the stream-copy contract in
`fn_04065eb4`. These use C++ data flow, without inline assembly or emitted bytes.

## Verified rotate/mask intrinsic

GHS `__RLWINM(value, shift, first, last)` emits the native PowerPC rotate-and-mask operation. Its pure `const` declaration is shared in `botw/ghs_intrinsics.h`. Wrapped masks `(0, 29, 27)` and `(0, 31, 29)` clear numeric bits 3 and 1 respectively; `fn_02e8aa38` matches all 132 original bytes with these operations. No assembly or encoded instructions are embedded in the source.

## Register-allocation diagnostics

This experiment identifies a narrow class of compiler differences. **It never accepts a reconstruction or increases exact-match coverage.** Candidate sources remain outside `reconstructions/` and the community acceptance queue.

```sh
python3 tools/register_diff.py fn_03cafe80 --source candidates/fn_03cafe80.cpp
python3 tools/decomp.py check fn_03cafe80 --source candidates/fn_03cafe80.cpp
```

The first command requires your pinned original RPX and reports diagnostics. Its successful exit means the report completed. The second command remains the acceptance check and rejects this candidate: its 132 bytes differ from the original. Four fixed GHS profiles produce equal diagnostic traces; the other two fail the model or size check.

The diagnostic enumerates every acyclic path through a small integer/load/store/compare/branch subset. It preserves instruction positions, operation order, incoming register identities, memory accesses, comparison types and condition-register provenance. Only encoded assignments among r0/r10/r11/r12 may differ. Every other encoded register field, final protected register and final CR field must agree. It rejects unsupported encodings, calls, loops, unreachable words, invalid targets, falloff, functions over 512 bytes and more than 64 paths.

Equality follows by induction over the same operations and ordered memory events. Corresponding values and branch predicates stay equal; changed temporary names are not observable in the stated model. SHA-256 summarizes complete canonical traces; local comparison also compares the structured serialization directly. No algebraic simplification or instruction reordering is accepted.

The model assumes ordinary EABI execution, identical initial registers and data memory, immutable code and no custom register outputs. It excludes observation of changed code bytes, self-modification and exception/debug contexts that inspect intermediate register assignments. Freescale's [EABI register table](https://www.nxp.com/docs/en/engineering-bulletin/EB696.pdf#page=3) classifies the four registers as volatile; that establishes the general convention, not a specific function's calling contract. The supported instructions leave FPRs, LR, CTR and XER unchanged; comparisons retain the same incoming XER.SO dependency.

The prototype has independent implementation review and negative fixtures covering changed memory operands, arithmetic, comparison/branch flags, protected registers, malformed encodings and traversal limits. No trusted equivalence certificates or alternate acceptance route are enabled.
