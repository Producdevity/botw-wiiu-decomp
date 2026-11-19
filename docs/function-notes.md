# Function notes

Search this page for your function ID before an attempt. It records failed
approaches and interface evidence the manifest cannot express. The
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
wrap behavior. The [register diagnostic](toolchain.md#register-allocation-diagnostics) agrees under
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

## Interface and linking evidence

The handle helpers `fn_0378da88` and `fn_0378d8dc` were linked at their original
addresses and verified together without original-code fallback. See the
the sections above for dependent record traversals.

The identical bounded-vector lookup bodies `fn_03e96784` and `fn_03f3ea2c`
need different key types. The former's callers extract bits from an unsigned
word. The latter's callers pass a stack slot initialized with a derived pointer.
The [random-state notes](#four-word-random-state) records caller and alias evidence
for three functions with a shared state layout.

## Opaque descriptor predicate adapters

`opaque-descriptor-predicate-adapters` provides 73 separately claimable
60-byte functions. Each has a pinned `bool (void *)` interface. An independent
reader checked the complete spans, all 292 absolute data relocation fields,
and the call to `fn_037b82e8` in each function. Private trial sources passed both
whole-function byte and hash comparisons with `ghs-5.3.22-speed`.

Each adapter builds an eight-byte descriptor on its stack. The payload
pointer is at offset 0, and the dispatch pointer is at offset 4. The reference
provides both data bindings. Use `botw/descriptor_predicate.h` for the layout and
helper declaration. Forward the receiver and descriptor address to
`fn_037b82e8` and propagate its Boolean result. If GHS reorders the prologue,
consult the scheduling intrinsic in [toolchain](toolchain.md).

```sh
python3 tools/community.py list --prepared --category calls --max-size 60
```

Follow the [agent workflow](../AGENTS.md) to claim a task, generate its private
packet and run the exact check.

## Other prepared small functions

These existing direct-call references now have pinned interfaces. Trial sources
passed exact byte comparison, hash-only verification, and the source-contract
audit. The manifest's automatic profile search includes each matching profile.

| Function | Scope | Matching profile |
| --- | --- | --- |
| `fn_02ea941c` | Signed remainder by 120. Preserve the sign of a negative remainder. | `ghs-5.3.22-speed` |
| `fn_02c20374` | Test whether signed division by 10,000 truncates to 150. The caller branches on the Boolean result. | `ghs-5.3.22-speed` |
| `fn_0378f190` | Test the indexed bit in the halfword at receiver offset 280. Preserve the caller's valid index range. | `ghs-5.3.22-speed` |
| `fn_038ba2fc` | Copy four representation words to receiver offsets 164 through 176. Preserve every bit of the input words. | `ghs-5.3.22-speed-notailrecursion-nopipeline` |

## Paired-float return

`fn_02e74434` uses an inferred eight-byte `FloatPair` return and forwards three
arguments. The callee and neighboring code consume those argument registers and
perform paired float operations before returning two words. This evidence, not
matching the wrapper alone, supports the float fields and signed/unsigned
parameter choices. Declaring a discarded pointer return produced the wrong
stack frame; the aggregate return reproduces all 32 original bytes naturally.

## Four-word random state

Three functions operate on the same four unsigned state words:

| Stable ID | Descriptive alias | Behavior |
| --- | --- | --- |
| [fn_030c48dc](../reconstructions/fn_030c48dc.cpp) | `seedXorshift128` | Initialize four words with multiplier 1812433253 and addends one through four. |
| [fn_030c499c](../reconstructions/fn_030c499c.cpp) | `nextXorshift128` | Advance xorshift128 using logical shifts 11, 19 and 8; return the new fourth word. |
| [fn_030c49e0](../reconstructions/fn_030c49e0.cpp) | `copyXorshift128State` | Copy the four words through four output pointers in order. |

All three implementations match their original spans. The generator has 1,342 raw direct
calls in the pinned text; bounded caller previews consume its result as a word,
including unsigned range mapping and float-bit construction. The copy's observed
caller uses all three routines on the same state and supplies four consecutive
word destinations. Its source interface explicitly forwards the unchanged state
pointer; that caller ignores the result, leaving the original high-level return
declaration unresolved. Interleaved reads/writes preserve output aliases.

Independent byte and hash checks established the 68-byte generator and 36-byte
copy before implementation publication. The copy reference was admitted
separately before its source submission. The aliases in the
[symbol catalog](../config/symbols.json) describe recovered behavior and preserve
stable address IDs.

The formulas and state order are corroborated by the public SEAD reconstruction
at [the BotW submodule pin](https://github.com/open-ead/sead/blob/f4178a21e21235830357dc27c26a2c29956972ed/modules/src/random/seadRandom.cpp).
The Wii U implementations were independently written from the pinned original;
no external implementation was imported. These observations support descriptive
aliases without establishing original Nintendo class or method symbols.

## Global getters

Independent RPX readers agreed on the getter spans and HA/LO fields. The
[reference manifest](../config/functions/) records each resolved destination
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
- The [global word loads](#global-word-loads) records evidence for
  its distinct opaque pointer interfaces and deferred cases.

## Global word loads

Fourteen getters add 168 bytes of reference tasks. Six read numeric words and
eight read pointers. Each complete twelve-byte body initializes its address
register, loads R3 and returns. Source coverage is verified in separate PRs.

| Function | Chosen return type | Inspected use |
| --- | --- | --- |
| `fn_02e54e74` | `int` | Signed comparisons with halfword counters |
| `fn_02e55024` | `int` | Signed maximum, then integer-to-float conversion |
| `fn_02f894f0` | `int` | Signed-positive loop count |
| `fn_030a51cc` | `distinct opaque pointer` | Dereference and virtual dispatch |
| `fn_031a71a4` | `int` | Signed maximum selection |
| `fn_03378a44` | `unsigned int` | Subtraction, unsigned high multiply and addition |
| `fn_0341aac0` | `unsigned int` | Equality with four and nonzero flag |
| `fn_0341d94c` | `distinct opaque pointer` | Null test, dereference and virtual dispatch |
| `fn_0341d98c` | `distinct opaque pointer` | Member load through returned address |
| `fn_037d97e4` | `distinct opaque pointer` | Word and float member loads |
| `fn_037e5b2c` | `distinct opaque pointer` | Saved pointer dereference and dispatch |
| `fn_03bb1598` | `distinct opaque pointer` | Immediate member loads |
| `fn_03f923ac` | `distinct opaque pointer` | Dereference and virtual dispatch |
| `fn_04194a9c` | `distinct opaque pointer` | Offset pointer passed to dereferencing callees |

Four signed interfaces follow ordered comparisons, counts or conversion. The
two unsigned interfaces preserve a full numeric word; historical signedness
and enum identity remain unresolved. Each pointer uses a separate forward-declared
`Opaque_ID` record without a layout, constness or shared class identity claim.
The bodies consume no incoming arguments; `(void)` is minimal, with unused
historical parameters unresolved. `source_contract` pins each reviewed interface.

Both independent RPX readers agree on every complete span and all 28 original
HA/LO address fields. Every body has a direct-call entry, terminal return, no
overlap and no external interior branch, relocation or symbol entry. Each
aligned four-byte access fits the allocated writable data section size.
`fn_02f894f0` and `fn_03f923ac` read BSS; the other twelve read initialized data.
There are no competing published declarations or known overlapping bindings.

The source proposals only declare external mutable objects and return their
values. They add no backing storage, initializers or qualifiers. All fourteen
pass the fixed GHS speed profile, original-byte and hash-only comparisons, and
source-interface AST checks. This does not establish the historical compiler.

## Deferred type evidence

Thirteen further word patterns remain outside this batch. Zero tests, argument
forwarding, byte truncation, generic array stores and snapshot subtraction alone
did not settle their interfaces in the inspected callers.

| Missing evidence | Functions |
| --- | --- |
| Only zero tests, forwarding or generic storage | `fn_02e551f8`, `fn_02e57cac`, `fn_02ead648`, `fn_03046fb4`, `fn_033789f0`, `fn_034f0780`, `fn_034f26f4`, `fn_03b6ac68` |
| Only low-byte stores | `fn_033789e4`, `fn_03378a38` |
| Snapshot subtraction without a settled word type | `fn_03b5b8ec` |
| Callback effects on array count and capacity | `fn_039e3500`, `fn_039e350c` |

`fn_039e3500` and `fn_039e350c` have matching private pointer proposals, but the
inferred array flow crosses a virtual callback that can mutate the builder.
No bound on the resulting count was established before unguarded appends.
Those two need stronger count and alias evidence before their proposed types
are admitted. Matching those private sources adds no public coverage.

Original bytes, disassembly and compiler output stay private.
