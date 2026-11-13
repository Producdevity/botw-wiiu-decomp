# Verification contract

Acceptance is a deterministic compiler-and-comparison operation. It does not ask a model or reviewer whether two implementations appear equivalent.

1. Local setup verifies the entire original RPX SHA-256, then verifies every manifest span against that file.
2. The checker compiles readable C++ to ELF32 big-endian PowerPC. It rejects assembly, compiler pragma overrides, non-project includes and unsupported object dependencies.
3. It places the function at its original address and resolves supported relocations using trusted bindings. It compares every resulting byte; no instruction, immediate or relocation field is masked.
4. Local checks compare the original bytes directly. Public CI compares length and SHA-256 against the fixed reference. No game files are needed on GitHub.
5. PR checks use the base branch's workflow, checker and reference manifest. Candidate code is compiled on a disposable hosted runner with a read-only token and no project secrets. Candidate scripts are never run.

An exact byte match proves that the checked machine-code span is identical under those bindings. Human or agent judgment is still needed when establishing function boundaries, signatures and shared types, and when changing the trusted checker or reference. The current source-level type annotations are explicitly inferred. Matching does not recover original names or guarantee how different future compiler flags transform the source.

## Supported today

- Object relocations: `ADDR32`, `ADDR16_LO`, `ADDR16_HI`, `ADDR16_HA`, `REL24`, `REL14`, `REL32`, with range/opcode checks.
- Local references contained within the checked function; external references only through manifest bindings.
- Rebuild of all implemented functions when any shared header changes.
- Private extraction and disassembly from the contributor's own dump.

The pilot excludes any original span affected by an RPX relocation. Compiled references to local `.rodata`, jump tables outside the span, unsupported relocations, malformed ELF and unresolved symbols fail closed. Extending support requires fixtures and a reference update; contributors cannot bypass it by changing expected hashes.

## Inventory

The initial 100 tasks were selected across integer, floating-point, control-flow, calls and loops. Discovery starts at direct call targets and follows bounded, contiguous control flow, rejecting ambiguous indirect transfers. This is a conservative candidate inventory, not a complete recovered symbol table. Seventeen functions were independently reconstructed and checked against the user's pinned RPX before publication, including loops and an external-call wrapper.

Unmatched tasks try the three fixed GHS optimization profiles (`-Ospeed`, `-Ogeneral`, `-Ospace`). Each attempt receives the same exact comparison; a match records the successful profile. No profile may relax comparison or change trusted reference bytes.

`python3 tools/decomp.py progress` rebuilds available implementations and reports pilot counts. It does not calculate a misleading percentage of the whole game.
