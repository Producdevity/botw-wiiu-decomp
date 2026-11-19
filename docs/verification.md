# Verification

Acceptance is a deterministic compile-and-compare step. No model or reviewer
judges whether two implementations are equivalent.

## Exact match

1. Setup verifies the whole RPX SHA-256, then every reference span in
   [the manifest](../config/functions/).
2. The checker compiles one source to a big-endian PowerPC ELF object. It rejects
   assembly, pragma overrides, non-project includes and unsupported object
   dependencies.
3. It places the function at its original address and resolves supported
   relocations through the reference's trusted bindings. Every byte is compared.
   No instruction, immediate or relocation field is masked.
4. Local checks compare against the original bytes. CI compares the length and
   SHA-256 against the reference. CI never sees game files.

Supported object relocations: `ADDR32`, `ADDR16_LO`, `ADDR16_HI`, `ADDR16_HA`,
`REL24`, `REL14` and `REL32`, each with range and opcode checks. External
functions and data resolve only through manifest bindings. References to local
`.rodata`, jump tables outside the span, unresolved symbols and malformed ELF
fail closed.

### Compiler profiles

A reference pins one profile or `ghs-5.3.22-auto`, which tries the six standard
GHS profiles in turn. The checker uses the first that matches.
[Toolchain](toolchain.md) lists them.

### Original relocation profiles

By default a reference excludes any span that contains an original RPX
relocation. A reviewed reference can opt into one of these profiles:

- `cafe-data-address-v1`: absolute `ADDR32`/`ADDR16_*` fields that point to
  allocated data and already hold their link-time value. The reference lists
  `data_bindings` (`data_XXXXXXXX` names that encode the address) and
  `data_relocations` (offset, type, symbol). Declare the data in source, for
  example `extern "C" unsigned char data_10008000[];`. The compiled object's data
  relocations must equal the trusted list field by field, including the resolved
  destination. Numeric pointer literals cannot pass.
- `cafe-import-rel24-v1`: `REL24` branches to function-import thunks such as
  Coreinit calls. The reference pins library, name, offset and thunk address.
- `cafe-data-import-rel24-v1`: both of the above in one function.

### Supporting compilation

Some GHS output only matches when related functions share a translation unit.
A reference's `compile_with` lists up to seven other trusted IDs. The checker
loads their sources automatically, compiles them together, and verifies every
emitted body against its own reference. Changing a compilation set is a
reference change.

## Declaration audit

`python3 tools/contract_audit.py --strict --summary` parses every published
source with libclang. It compares each caller's declaration of a callee with the
callee's definition, with other declarations of the same callee, and with any
`source_contract` pinned in the manifest. Published definitions without a pin
act as their own baseline. A candidate cannot change an existing function's
return type, arity, parameter types or variadicness, even if its bytes still
match.

Exit codes: `0` clean, `1` conflict or required review, `2` parse failure or
incomplete analysis. In CI, `1` and `2` both fail. The audit checks consistency
only. It cannot recover the original prototype or prove a layout.

A `source_contract` has exactly `return_type`, `parameter_types` and `variadic`.
Types are primitive C types or single pointers such as `void *`,
`const unsigned int *` and `struct Opaque_02e54e74 *`.

## Pull request checks

PR workflows run the base branch's checker and references. Candidate code is
checked out as data and compiled on a disposable runner with a read-only token.
Candidate scripts never run.

- `verify` compiles the reconstructions whose sources changed, plus their
  supporting-compilation partners. It rebuilds everything when a header changes.
  It then runs the strict audit on the whole tree and the symbol catalog and
  linked-component checks. Changes outside `reconstructions/`, `include/botw/`
  and documentation fail as maintainer-only changes.
- `pr-metadata` requires the `## Functions` list and a complete model table.

Every master push and every auto-merge rebuilds all implementations and publishes
the [coverage badge](https://github.com/Producdevity/botw-wiiu-decomp/blob/progress/progress.json).

## Auto-merge

The `automerge` workflow runs after each check completes and every 30 minutes,
one run at a time. A PR is eligible when:

- every changed file is a new `reconstructions/fn_XXXXXXXX.cpp` for a trusted
  reference that has no source on master yet;
- `## Functions` lists exactly those IDs and the model table is complete;
- `verify` and `pr-metadata` passed on the PR head.

The selection job re-checks eligible PRs on top of current master, with a
read-only token. It recompiles each new function and reruns the strict audit on
the combined tree. This catches two PRs that declare the same callee differently.
A separate job merges the verified plan only while master is still the verified
commit, then triggers the full rebuild. Claims are advisory and do not affect
merging. Whichever PR lands first wins.

## Coverage

`python3 tools/decomp.py check --all --hash-only --summary` reports
`matched_functions` and `matched_bytes` without game files. Coverage is
`matched_bytes` divided by the `.text` size in
[the target manifest](../config/target.json). `python3 tools/community.py
summary` reports reference, source, claim and blocker counts from the default
branch.

## Linked component

`python3 tools/check_linked_component.py` links a numeric getter and its
four-byte zero-initialized word at their original addresses with LLD. It checks
symbols, span sizes and the code hash, and falls back to no original code. Add
`--game PATH` to also compare against your RPX.
