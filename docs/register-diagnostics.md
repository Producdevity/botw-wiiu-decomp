# Register-allocation diagnostics

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
