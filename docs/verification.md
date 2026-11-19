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

`verify` writes a job summary with the target, base and candidate commits,
matched bytes and failures. When GitHub confirms a successful master build of
the exact base commit, the summary also shows new matches, lost matches and
the byte delta. It lists up to 20 IDs per group. The job log has every check.

Successful protected master builds publish `exact-text.svg` and `progress.json`
on the `progress` branch. The JSON records the verified commit and Actions run
ID. This measures exact executable text bytes. The
[linked component check](#linked-component) verifies a closed code-and-data unit.

`python3 tools/decomp.py check --all --hash-only --summary` reports `matched_functions` and
`matched_bytes` for a rebuilt checkout. Divide `matched_bytes` by the total `text[].size`
in [the target manifest](../config/target.json) to calculate exact executable-code coverage.
Use `python3 tools/community.py summary` for the live source and task counts. Those counts
come from tracked files and the claim queue. Use the full verifier to confirm exact matches.

The [discovery inventory](inventory.md) proposes function boundaries. The trusted
[reference catalog](../config/functions.json) contains the functions admitted for matching.
Compiler options are defined in [the compiler module](../src/botw_decomp/compiler.py).
Each selected profile uses the same exact comparison.

## Linked component

Install LLVM and LLD (`brew install llvm lld` or `sudo apt install llvm-18 lld-18`).
Run `python3 tools/check_linked_component.py` with the configured toolchain on
`PATH`. It links the [numeric getter](global-word-loads.md) at its original
address with its documented four-byte zero-initialized word. LLD checks both
symbols and span sizes. The resulting code must match the pinned hash. The
link uses zero original-code fallbacks.

Pass `--game PATH` to also verify the linked bytes and writable BSS against your
own pinned RPX. The temporary ELF is never executed.

## Maintaining the verifier

Tooling, reference and workflow changes intentionally fail the ordinary
source-acceptance job. Review the change separately and dispatch the workflow
at the reviewed branch. Check `verify-maintenance` on the exact reviewed SHA,
then record the reviewer and run link on the PR before using the maintainer
merge path. The repository requires PRs and GitHub Actions `verify` and
`pr-metadata` checks for normal contributions. Model disclosure records who did
the work. Acceptance uses exact verification and documented contract evidence.
