# Reference batches

`config/batches.json` groups immutable function references. Progress reports show catalog size separately from the functions checked and matched in that invocation.

| Batch | Tasks | Bytes | Source status when added |
| --- | ---: | ---: | --- |
| bootstrap | 100 | 1,956 | Completed before expansion |
| larger-functions | 100 | 12,288 | Unmatched |
| repeated-functions | 503 | 4,528 | All verified |
| scalar-fields | 262 | 3,516 | All verified |
| scalar-copies | 50 | 1,224 | All verified |
| conditional-fields | 25 | 500 | All verified |
| repeated-scalar-fields | 94 | 1,356 | All verified |
| scalar-pairs | 52 | 1,648 | All verified |
| conditional-operations | 43 | 1,576 | All verified |
| call-wrappers | 30 | 1,108 | All verified |
| call-dependencies | 1 | 8 | All verified |
| community-references | 500 | 46,280 | Unmatched |
| short-call-dependencies | 3 | 20 | All verified |
| related-call-dependencies | 6 | 312 | All verified |
| data-call-dependencies | 12 | 1,096 | Unmatched |
| lookup-table-dependency | 1 | 20 | Unmatched |
| float-comparison-dependencies | 2 | 40 | Unmatched |
| random-state-context | 1 | 36 | Unmatched |
| global-float-loads | 12 | 144 | Unmatched |
| global-scalar-loads | 6 | 72 | Unmatched |
| global-byte-loads | 16 | 192 | Unmatched |
| global-byte-remainder | 18 | 216 | Unmatched |
| global-word-loads | 14 | 168 | Unmatched |
| handle-validation-callers | 4 | 780 | Unmatched |
| repeated-vector-copies | 8 | 416 | Unmatched |
| cursor-family-representatives | 2 | 424 | Unmatched |
| paired-subtraction-representative | 1 | 36 | Unmatched |
| reused-bodies | 48 | 1,276 | Unmatched |
| bounded-vector-lookups | 2 | 560 | Unmatched |
| lookup-float-triple-copies | 304 | 31,616 | Unmatched |
| lookup-copy-dependency | 1 | 172 | Unmatched |
| direct-teardown-wrappers | 297 | 23,764 | Unmatched |
| fixed-layout-memory-copies | 21 | 940 | Unmatched |
| intrusive-list-operations | 13 | 836 | Unmatched |
| lookup-payload-wrappers | 948 | 64,464 | Unmatched |
| lookup-scalar-copies | 25 | 2,100 | Unmatched |
| nullable-allocation-wrappers | 115 | 7,076 | Unmatched |
| nullable-member-accessors | 30 | 1,560 | Unmatched |
| paired-float-operations | 132 | 4,920 | Unmatched |
| placement-pointer-adapters | 12 | 96 | Unmatched |
| runtime-import-wrappers | 5 | 84 | Unmatched |
| virtual-call-wrappers | 36 | 2,576 | Unmatched |
| virtual-flag-predicates | 7,317 | 87,068 | Unmatched |
| virtual-teardown-wrappers | 1,436 | 120,624 | Unmatched |

The larger batch contains 14 integer, 26 floating-point, 20 control-flow, 20 calls, 20 loops tasks. The initial classifier mislabeled six paired-single functions as integer; Espresso decoding corrected those labels without changing any reference bytes, sizes, hashes or bindings. Each is 68–184 bytes. Selection favors varied instruction shapes and code locations; 20 direct graph edges connect these tasks with the completed batch. This is not a complete game inventory.

Before publication, all 200 spans were checked against the pinned Wii U USA v208 RPX: hashes agree, spans do not overlap, and none contains an original RPX relocation. The new spans reproduce the bounded direct-call discovery results. All 42 external call bindings were also independently decoded from the original branch instructions. The 100 new hashes are unique and differ from those in the first batch.

Selection conservatively excludes apparent r2/r13 small-data dependencies. This filter does not establish that every selected function can already be reconstructed by the supported compiler profiles. Unsupported constants, dependencies or compiler behavior remain failed tasks until the verifier supports them with tests.

Original bytes and disassembly stay local. A maintainer reviews reference changes separately; ordinary source submissions cannot change these references or the verifier. Caller/callee previews help recover contracts but never change the bytes accepted by matching.

The repeated-functions batch contains independently discovered addresses with machine-code bodies identical to earlier accepted functions. Each source is reproduced from its recorded `source_seed`, with only the function identifier changed, then compiled and checked independently.

The scalar-fields batch contains 262 new, unique 12–16-byte bodies reconstructed as typed C++ field reads, updates and bit operations. All were rediscovered from the pinned RPX, checked for overlap and original relocations, and rebuilt against original bytes before publication. Fifteen nonmatching proposals were excluded. Structure names, signatures and field layouts remain inferred for the Wii U ABI. Existing references and the 75 unresolved larger tasks were preserved.

The scalar-copies and conditional-fields batches add 75 distinct 20–52-byte functions: ordered scalar copies, equality tests, initializations, bounded selection and conditional updates. The repeated-scalar-fields batch adds 94 distinct addresses whose bodies match recorded scalar seeds. All 169 additions were independently rediscovered and compiled against original RPX bytes, with no overlapping references or original relocations. Existing references, implementations and unresolved tasks were preserved.

The scalar-pairs and conditional-operations batches add 95 independently verified functions, including native float-pair copies, packing, swaps, enum tests and conditional state updates. Thirty call wrappers and their eight-byte shared dependency were checked against original caller/callee context as well as exact bytes. Twenty-one existing source contracts were reconciled in the same review; only inferred pointer-field metadata changed for three references. All existing addresses, sizes, hashes and call bindings remain unchanged.

`source_seed` records the source used when a repeated-body batch was accepted. Later caller evidence can distinguish the types of functions whose machine-code bodies happen to be identical; such corrections apply only to the functions supported by that evidence.

The community-references batch adds 500 unimplemented tasks, 100 per category. Selection prioritizes 14 eligible callees used by published functions, then varies size bands and code locations across 432 distinct 4 KiB pages. Of these tasks, 497 are 32–256 bytes and three dependency functions are 8, 8 and 16 bytes. The original 75 unresolved tasks remain available, for 575 tasks at publication.

All 500 new hashes are unique and distinct from existing references. Each boundary and hash was independently checked against the pinned RPX; spans do not overlap or contain original relocations. All 171 call bindings were decoded independently from original direct-link instructions. A conservative, instruction-specific operand filter excludes apparent r2/r13 dependencies and unsupported decodes; it distinguishes GPRs from floating registers and immediates. This is reference selection, not a promise of matching compiler support or added implementation coverage.

The short-call-dependencies batch adds two eight-byte tail adapters and a four-byte identity helper used by existing reconstructions. The opt-in [short-function discovery](inventory.md) requires independent direct-call entry evidence and disjoint, relocation-free spans. One adapter target has a bounded body; the other has independent entry evidence only. Each C++ contract was reviewed separately against original callers/callees, and all three implementations were rebuilt against the pinned RPX. Existing references and the 532 open tasks are unchanged.

The related-call-dependencies batch adds six wrappers sharing a component lookup: two indexed pointer accessors, two signed-count wrappers and two nullable pointer-field getters. Each boundary was rediscovered and each implementation independently matched against the pinned RPX. Caller uses and original callee bodies support the inferred contracts; the shared component lookup itself remains unreconstructed. Two nonmatching count-getter proposals were excluded.

The data-call-dependencies batch adds 12 callees referenced by existing
reconstructions, spanning 16–360 bytes. Each has a separately checked direct-call
entry and bounded contiguous control flow, with no overlapping reference spans.
Their absolute data relocations use the [data-address profile](data-relocations.md):
original symbol/addend resolution, raw field values and complete per-field
provenance agree. Function call bindings are independently decoded. Existing
references and completed source remain unchanged. These tasks include global
state reads, floating-point helpers and indexed accessors. Published callers
provide contract evidence for source reconstruction.

The lookup-table-dependency reference supplies the indexed pointer-table helper
called by `fn_02b5bcc8`. Its 20-byte body has a verified linked entry, a terminal
return, no interior branch targets or overlapping references, and two validated
absolute data fields. The caller now lists the helper in `compile_with`; its
remaining instruction differences are unresolved. Existing reference bytes and
bindings are unchanged.

The float-comparison-dependencies batch adds two helpers used by the unresolved
`fn_02d8f970`: a float field read and a nullable pointer-based float read. Their
8-byte and 32-byte boundaries have 11 and 16 independently decoded direct-call
entries, complete bounded control flow and no external interior branch targets
or overlaps. The latter has two validated original-data fields. An independent
RPX reader agrees on both spans and resolved data fields. Existing references
remain unchanged.

The random-state-context batch adds one four-output state copy beside the
recovered seed and generator routines. One independently decoded direct caller
supplies all five pointer arguments. The complete nine-instruction span has a
terminal return, no external interior branch targets, no original relocations
and no overlap with existing references. An independent RPX reader agrees on the
whole text and selected span. Existing references remain unchanged. See the
[random-state evidence](random-state.md).

The global-float-loads batch adds twelve three-instruction getters. Each has a
separately decoded direct-call entry, complete contiguous control flow and no
overlapping reference or external interior entry. An independent RPX reader
agrees on every span and all 24 original HA/LO data fields. The fields already
contain their linked values; the existing data-address profile preserves them.
Existing references remain unchanged. See [source contracts](global-float-loads.md).

The global-scalar-loads batch adds four byte getters, one signed word getter and
one opaque pointer getter. Independent RPX readers agree on all six complete
spans and twelve unchanged HA/LO address fields. Each has a decoded direct-call
entry, terminal return and no overlapping reference or external interior entry.
Caller evidence determined the chosen signed and pointer interfaces. See
[source contracts](global-scalar-loads.md). Existing references remain unchanged.

The global-byte-loads batch adds sixteen three-instruction byte getters. Both RPX
readers agree on all complete spans and 32 unchanged HA/LO data fields. Every
span has a direct-call entry, complete terminal control flow, no external
interior branch and no overlap. Caller review found zero tests and discarded
results, consistent with the chosen byte interfaces. See
[source contracts](global-byte-loads.md). All prior references remain unchanged.

The global-byte-remainder batch adds eighteen further three-instruction byte
getters. Independent RPX readers agree on all complete spans and 36 unchanged
HA/LO fields. Every span has a direct-call entry, terminal return, no overlap and
no external entry into its interior. Caller uses support the chosen byte interfaces;
[source contracts](global-byte-remainder.md) record the evidence and compiler
profiles. Existing references remain unchanged.

The global-word-loads batch adds six numeric and eight pointer getters. Separate
RPX readers agree on all complete spans and 28 original HA/LO fields. Each
span has a linked entry, terminal return, no overlap and no external interior
entry. Caller review and AST checks establish the chosen
[source interfaces](global-word-loads.md); all prior references remain unchanged.

The handle-validation-callers batch groups four callers of `fn_0378da88`
with its existing dependency `fn_0378d8dc`. The two dependencies rebuild and
link together at their original addresses for 128 exact bytes without
original-code fallback. The four callers add 780 bytes of references.

| Function | Bytes | Observed contract |
| --- | ---: | --- |
| `fn_0272eb1c` | 180 | Tests records with a 16-byte stride. The caller branches on the normalized result. |
| `fn_0272ee28` | 200 | Returns a 16-byte-stride record address or null. The caller stores the returned word. |
| `fn_028675a8` | 264 | Checks two inline arrays of five 28-byte records. The caller branches on the normalized result. |
| `fn_02b1c92c` | 136 | Checks an embedded handle and returns a nullable record address. Three observed callers supply the index and test or use the address. |

Each span has an independent direct entry and one external call target.
The original spans have no relocations or unrelocated incoming branches
to their interior. The interface pins use opaque pointers for the observed
arguments and record addresses. Reconstruction still needs to preserve
count reloads, record strides and embedded handle offsets. The full
object layouts and historical type names remain open.

The repeated-vector-copies batch adds eight distinct 52-byte spans identical
to `fn_03e343b4`. The bodies perform six paired-float reads and writes in the
same order and retain the two pointer roles. Each span has a direct call entry,
no original relocations, and no unrelocated external branch to its interior.
The seed is a source starting point. Each new address needs its own check.

The cursor-family-representatives batch contains one 304-byte position update
and one 120-byte byte-read operation. Their complete bodies recur at 55 and
46 separately discovered addresses, respectively. Only these two entries are
admitted. The position update compares signed 64-bit bounds and returns a
word pair consumed as a 64-bit value by an observed caller. The byte read
takes a nullable byte destination, advances a two-word cursor and returns a
status tested by its caller. Shared field offsets are observed. Complete
object layout, buffer bounds and historical declarations remain open.

The paired-subtraction representative is a 36-byte body found at 65 candidate
entries. Its three observed callers pass an output buffer and two inputs.
They forward the output address to the following operation. The source pin
preserves that return value. The body performs two paired subtractions with
input loads before the first output store. Local GHS probes confirmed native
paired subtraction from the `__PS_SUB` intrinsic.

The reused-bodies batch contains 48 distinct entries matching 17 published
source seeds. It covers ordered copies, pair initialization, bounded selection
and small pointer operations. Both RPX readers agree on every span and its
relocation-free status. There are 281 unrelocated direct calls and no external
branch to an interior instruction. Nine additional identical bodies were held
back for separate interface review.

The bounded-vector-lookups batch contains two identical 280-byte bodies.
Both use a signed start and end, substitute the vector length for a negative
end and return the matching index or `-1`. Each has two independent direct
callers, no original relocations and no external call bindings.

- `fn_03e96784` has a 32-bit unsigned key. Both callers pass its address on
  the stack, extract an unsigned bitfield from that word and test the result
  against `-1`.
- `fn_03f3ea2c` has a pointer key. Both callers pass the address of a stack
  slot initialized with a derived pointer. Both use the returned index to
  update the same vector of four-byte entries.

The different key types preserve the observed caller contracts even though
the compiled bodies are identical. Existing references are unchanged.

The lookup float-triple batch groups 304 new references and uses the two
previously admitted copies in the same source family. All 306 spans are
104 bytes. They have identical instructions apart from the displacement of
one linked call to `fn_030ec10c`. An independent RPX parse verified all spans,
448 unrelocated direct entries, every external call target, and no overlapping
references or branches entering the interior. Each wrapper was compiled and
compared separately. Each resolves one external and two internal branches.

The wrappers pass the owner and an opaque key to the lookup with kind 3 and a
true mark flag. On success they copy three floats in order from the input
object into the returned storage. They return true on success or false on a
null result. Direct caller contexts supply an addressable three-float input
and a separate key object. The layout is checked in the shared header.
GHS 5.3.22 uses the opt-in `-Ospeed -Onopeephole` profile. Declaring the
mark flag as `int` changes the prologue order, while `bool` matches.

The 172-byte lookup dependency is available as an unmatched reference.
It calls one opaque-key hash helper, walks a linked record list and compares
the hash and kind. On success it returns the payload and optionally marks
the record. All 1,338 observed direct calls supply a zero or one mark flag.
The underlying key type and record identity remain inferred.

## Generic virtual methods and runtime wrappers

This batch admits 10,387 references and reconstructs 10,393 functions, including
six previously admitted entries. A separate RPX reader checked the original
hashes and a complete executable branch scan ruled out outside entries into the
selected spans. Existing reference ranges, hashes, and bindings are preserved.

The virtual method families have a verified store of a relocated vtable address
into the receiver and a checked relocation of the method slot to the start of
the function. The predicate cohort reads one bit from the receiver and returns
a normalized Boolean. Selection requires consistent slot and vptr offsets
and corroborating sibling predicate bodies. A small group of constant overrides
shares the same proven slots and sibling predicates. Other constant-return
methods remain candidates while receiver and argument evidence is incomplete.

The teardown families test the receiver, call its bound cleanup function, and
conditionally call the deallocator using the low bit of the flags argument.
Both direct-call and vtable entries use the observed cleanup target,
receiver offset and flag value. Simple allocation wrappers preserve existing
storage on nonnull input and call the bound allocator on null input.

The lookup families store a returned payload pointer or copy a scalar into
a nonnull lookup result. The former use the pinned speed profile. The
conditional scalar copies use the opt-in single-exit profile. The 65 paired
subtraction routines reproduce both pair calculations and the memory
operation order. The leaf copies, nullable member accessors, placement
adapters and list helpers have separate source and address checks.

Five Coreinit mutex and memory wrappers pin their import identities as well
as their raw branch targets through the [function-import profile](data-relocations.md#function-import-branches).

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

Find these tasks with `python3 tools/community.py list --prepared --category calls
--max-size 60`. Follow the [agent guide](agent-guide.md) to claim one, generate its
private packet, and run the exact check.

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
