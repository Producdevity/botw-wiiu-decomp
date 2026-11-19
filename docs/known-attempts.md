# Known attempts

Search this page by function ID before making another attempt. The
[blocker queue](https://github.com/Producdevity/botw-wiiu-decomp/issues?q=is%3Aissue+is%3Aopen+label%3Ablocker)
tracks work that depends on new evidence. Open issues using the shared-blocker
template appear in task selection. Close each issue with a link to the proof
that resolved it and update the index. Retain a [candidate source](../candidates/)
when it gives the next contributor a reproducible starting point.

## Tracked blockers

| Functions | Evidence and next check |
| --- | --- |
| `fn_02c1363c`, `fn_02c13674` | Indexed record access, signed count and fallback placement. [Issue #199](https://github.com/Producdevity/botw-wiiu-decomp/issues/199) |
| `fn_02470538` | The [retained predicate](../candidates/fn_02470538.cpp) reaches 72 bytes. Final byte normalization and LR-load scheduling differ. [Issue #200](https://github.com/Producdevity/botw-wiiu-decomp/issues/200) |
| `fn_0272eb1c`, `fn_0272ee28` | Sixteen-byte record traversal with a live count reload. [Issue #201](https://github.com/Producdevity/botw-wiiu-decomp/issues/201) |
| `fn_030ec10c` | Shared lookup used by the 306 exact float-triple wrappers. [Issue #198](https://github.com/Producdevity/botw-wiiu-decomp/issues/198) |
| `fn_03c92cb8`, `fn_03c92e3c` | Signed cursor bounds and two-word state. [Issue #202](https://github.com/Producdevity/botw-wiiu-decomp/issues/202) |

## Other useful observations

These attempts used the fixed GHS 5.3.22 profiles.

| Functions | Evidence already recovered | What remains |
| --- | --- | --- |
| `fn_02b5bcc8` | An eight-byte stack key holds a value and virtual-table pointer. Compiling its pointer-table helper together removes extra register saves. | Polymorphic key candidates reach the original size but still differ. Recover the interface and emitted table dependency before adding verifier support. |
| `fn_02d8f970` | The bit test and float comparison are recovered; both float helpers are implemented. | Separate compilation differs in the false epilogue. Shared compilation instead shrinks the caller. More boolean spelling changes have not resolved this. |
| `fn_04210514` | Float polynomial/range-reduction flow and constant widths are recovered. Its integer-to-float helper preserves values that remain live across the call. | An ordinary external declaration spills registers; a simple cast compiles inline. Establish the original conversion-call contract. Tiny/unordered inputs return the original signed input. |
| `fn_02e74378` | The published caller uses an eight-byte `FloatPair` result. Original call flow uses two result registers. | Direct aggregate return and explicit field copies have different code shapes. Keep the established type until consumer evidence supports a change. |
| `fn_02ea6a4c` | Unsigned indices below four select the table path; other indices select the scalar fallback. | Corrected table/fallback forms still differ. Earlier reversed-branch candidates were discarded. |
| `fn_02ea93b4` | The caller uses an integer result. The proposed low-bit scan has a range check and signed local shift. | Equal-size candidates still differ in allocation; space output is shorter. Further semantic review is required before using the partial source. |
| `fn_031724b4` | Multiple callers test the pointer result. The original repeats a field read. | Current nonvolatile forms are shorter. Recover the layout/aliasing and control flow; repeated reads alone do not establish volatile storage. |
| `fn_03cbeae8` | Eight word writes and their observed order are recovered; a readable member reset is available as a candidate. | Typed, byte-offset, member and assignment-chain forms still differ. A bounded local source-permutation pilot found no exact match. Initializer-list assignment is unsupported. |
| `fn_02b16ef0` | A stack word containing three is passed by address. The existing published caller forwards an opaque result. | Both the preserved return contract and a void diagnostic differ. Review the setter and its consumers before changing the return type. |
| `fn_034d3630` | A ten-value local lookup is recovered from the instruction operands; the observed caller supplies indices zero through nine. | Aggregate initialization emits a shorter table-copy form. Individual assignments reach the original size but differ in frame/allocation. |
| `fn_03c0fda4` | Two dimensions and byte spacing fields determine quotient/remainder-based output coordinates. | The initial byte-offset source has the right size but different allocation. Preserve the interleaved reads/writes when considering aliased inputs. |
| `fn_0261e54c` | Typed, inline-getter and byte-offset forms of the word multiply/add; all reach 32 bytes. | Allocation differs. Preserve low-word wrapping and review the signed result use before changing the inferred contract. A candidate source is available. |
| `fn_025a1fcc` | Typed, member and byte-offset forms set/clear two bytes and set the nested high flag. | All reach 36 bytes but differ. Preserve the nested pointer load before the byte writes. |
| `fn_022ffa68` | Aggregate, scalar and member forms of three word copies plus a byte flag update. | Scalar forms preserve overlapping-copy order and reach 44 bytes, but differ in allocation. Aggregate assignment is not a substitute for that order. |
| `fn_02579a1c` | Accessor and address-word forms of nested flag/byte updates and an outer halfword update. | The typed-pointer form incorrectly removes a required pointer reload. The address-word hypothesis restores it but still differs; the alias/layout contract remains open. |
| `fn_02802f5c` | Direct value, aggregate, member and copied-value operator forms of a word comparison. | They remove the original stack store/load. Neither a by-value aggregate nor an explicit copy establishes the original source contract. |
| `fn_02a2d984` | Three nonvolatile float-pair copies, including an archived starting source. | All emit 28 bytes instead of 32 by removing an observed float reread. Recover the alias/layout evidence before changing storage qualifiers. |
| `fn_028675a8` | Two inline arrays of five 28-byte records and the first failing embedded handle are recovered. | Speed emits 264 bytes with different initial register allocation, member address materialization and return scheduling. |
| `fn_02b1c92c` | Typed member access preserves the embedded handle and three inline 16-byte entries. | GHS removes the repeated bounds check and emits 128 of the original 136 bytes. Three equivalent guard and accessor forms produced the same result. |
| `fn_031a73c8` | The 132-byte pointer-ring dequeue recurs at 14 direct entries. Callers support a nullable pointer return and a 16-byte ring with unsigned read and write cursors. | The closest fixed-profile output is 120 bytes. GHS combines slot clears and return paths that the original keeps separate. |
| `fn_0234c61c` | Four relocated vtable slots establish the 212-byte entry. The data and Coreinit `OSBlockMove` bindings pass the original-reference check. The [candidate](../candidates/fn_0234c61c.cpp) preserves the bounded scan and destination-capacity clamp. | The candidate matches 50 of 53 instruction words. The first byte load and the scan bound share a register, which prevents the original instruction order at offsets 96, 104 and 116. A separate cursor reproduces the bound order and changes seven other register fields. |

Regenerate the private packet and check the bounded-copy candidate with the
ordinary verifier. The current candidate fails both exact checks.

```sh
python3 tools/decomp.py packet fn_0234c61c
python3 tools/decomp.py check fn_0234c61c --source candidates/fn_0234c61c.cpp --diff --summary
```

## Register-allocation diagnostic

The [counter candidate](../candidates/fn_03cafe80.cpp) reproduces the observed
wrap behavior. The [register diagnostic](register-diagnostics.md) agrees under
four compiler profiles. Exact verification still rejects the candidate.

## Control-flow cases

The following behavior was independently reviewed against original instructions.
The inferred class identities and historical signatures remain open.

- `fn_02013bd0`: false when the shifted upper mask is present; otherwise test the
  lower bit using the same **register-supplied** index. Supplied callers use
  indices zero through three. Corrected forms remain unmatched; the 48-byte
  candidate differs in register allocation.
- `fn_024694e4`: clamp the signed pointee reached through object offset **100**
  below zero, then multiply with pointees reached through offsets 24 and 80.
  Corrected sources reach the original size but differ.
- `fn_02998424`: return true when the nested flag is set, the byte is nonzero, or
  the state is 12 or 6. Earlier candidates inverted the first two conditions.
  The corrected source remains unmatched.

Private packets, original bytes, disassembly and compiler output stay local.
Shared blocker issues can group functions needing the same evidence; search for
an existing issue before opening another.
