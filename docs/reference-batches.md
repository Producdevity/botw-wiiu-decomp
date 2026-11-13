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

The larger batch contains 14 integer, 26 floating-point, 20 control-flow, 20 calls, 20 loops tasks. The initial classifier mislabeled six paired-single functions as integer; Espresso decoding corrected those labels without changing any reference bytes, sizes, hashes or bindings. Each is 68–184 bytes. Selection favors varied instruction shapes and code locations; 20 direct graph edges connect these tasks with the completed batch. This is not a complete game inventory.

Before publication, all 200 spans were checked against the pinned Wii U USA v208 RPX: hashes agree, spans do not overlap, and none contains an original RPX relocation. The new spans reproduce the bounded direct-call discovery results. All 42 external call bindings were also independently decoded from the original branch instructions. The 100 new hashes are unique and differ from those in the first batch.

Selection conservatively excludes apparent r2/r13 small-data dependencies. This filter does not establish that every selected function can already be reconstructed by the supported compiler profiles. Unsupported constants, dependencies or compiler behavior remain failed tasks until the verifier supports them with tests.

Original bytes and disassembly stay local. A maintainer reviews reference changes separately; ordinary source submissions cannot change these references or the verifier. Caller/callee previews help recover contracts but never change the bytes accepted by matching.

The repeated-functions batch contains independently discovered addresses with machine-code bodies identical to earlier accepted functions. Each source is reproduced from its recorded `source_seed`, with only the function identifier changed, then compiled and checked independently.

The scalar-fields batch contains 262 new, unique 12–16-byte bodies reconstructed as typed C++ field reads, updates and bit operations. All were rediscovered from the pinned RPX, checked for overlap and original relocations, and rebuilt against original bytes before publication. Fifteen nonmatching proposals were excluded. Structure names, signatures and field layouts remain inferred for the Wii U ABI. Existing references and the 75 unresolved larger tasks were preserved.

The scalar-copies and conditional-fields batches add 75 distinct 20–52-byte functions: ordered scalar copies, equality tests, initializations, bounded selection and conditional updates. The repeated-scalar-fields batch adds 94 distinct addresses whose bodies match recorded scalar seeds. All 169 additions were independently rediscovered and compiled against original RPX bytes, with no overlapping references or original relocations. Existing references, implementations and unresolved tasks were preserved.
