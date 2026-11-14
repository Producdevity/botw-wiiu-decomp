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
