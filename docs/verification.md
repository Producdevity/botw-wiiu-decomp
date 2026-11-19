# Verification contract

Machine-code matching is a deterministic compiler-and-comparison operation. It does not ask a model or reviewer whether two implementations appear equivalent. Review of inferred source contracts is separate.

1. Local setup verifies the entire original RPX SHA-256, then verifies every manifest span against that file.
2. The checker compiles readable C++ to ELF32 big-endian PowerPC. It rejects assembly, compiler pragma overrides, non-project includes and unsupported object dependencies.
3. It places the function at its original address and resolves supported relocations using trusted bindings. It compares every resulting byte; no instruction, immediate or relocation field is masked.
4. Local checks compare the original bytes directly. Public CI compares length and SHA-256 against the fixed reference. No game files are needed on GitHub.
5. PR checks use the base branch's workflow, checker and reference manifest. Candidate code is compiled on a disposable hosted runner with a read-only token and no project secrets. Candidate scripts are never run.
6. The strict [declaration audit](contract-audit.md) compares available caller/callee declarations and definitions, plus explicit source interfaces pinned in the trusted manifest and, for other existing published definitions, their trusted source/header AST interfaces. It rejects type, arity and variadicness changes even when compiled bytes match. Conflicts and incomplete analyses fail; original type inference and layouts still require evidence.

An exact byte match proves that the checked machine-code span is identical under those bindings. Human or agent judgment is still needed when establishing function boundaries, signatures and shared types, and when changing the trusted checker or reference. The current source-level type annotations are explicitly inferred. Matching does not recover original names or guarantee how different future compiler flags transform the source.

## Supported today

- Object relocations: `ADDR32`, `ADDR16_LO`, `ADDR16_HI`, `ADDR16_HA`, `REL24`, `REL14`, `REL32`, with range/opcode checks.
- Local references contained within the checked function; external function and data references only through separate manifest bindings.
- Opt-in [`cafe-data-address-v1`](data-relocations.md) for original absolute data relocations whose fields already equal their link-address values. Original and compiled relocation provenance must agree field by field.
- Opt-in `cafe-import-rel24-v1` for prelinked Cafe import branches, and `cafe-data-import-rel24-v1` when one function contains both data and import relocations. The combined profile requires both contracts and checks every field using the same validation as the individual profiles.
- Opt-in [supporting-function compilation](supporting-compilation.md), verifying every emitted body against a closed trusted reference set.
- Rebuild of all submitted implementations in hosted verification.
- Private extraction and disassembly from the contributor's own dump.

The default reference profile excludes any original span affected by an RPX relocation. A separately reviewed reference may opt into a supported relocation profile. Compiled references to local `.rodata`, jump tables outside the span, unsupported relocations, malformed ELF and unresolved symbols fail closed. Extending support requires fixtures and a reference update; contributors cannot bypass it by changing expected hashes.

## Coverage

`python3 tools/decomp.py check --all --hash-only --summary` reports `matched_functions` and
`matched_bytes` for a rebuilt checkout. Divide `matched_bytes` by the total `text[].size`
in [the target manifest](../config/target.json) to calculate exact executable-code coverage.
Use `python3 tools/community.py summary` for the live source and task counts. Those counts
come from tracked files and the claim queue. Use the full verifier to confirm exact matches.

The [discovery inventory](inventory.md) proposes function boundaries. The trusted
[reference catalog](../config/functions.json) contains the functions admitted for matching.
Compiler options are defined in [the compiler module](../src/botw_decomp/compiler.py).
Each selected profile uses the same exact comparison.

## Maintaining the verifier

Tooling, reference and workflow changes intentionally fail the ordinary source-acceptance job. Maintainers review those changes separately, dispatch the verification workflow at the reviewed branch, and check its tests and all existing matches before merging. The repository requires PRs and the `verify` and `pr-metadata` checks for normal contributions; maintainers retain an administrative path for reviewed verifier updates. Third-party review bots do not decide whether reconstructed code matches.
