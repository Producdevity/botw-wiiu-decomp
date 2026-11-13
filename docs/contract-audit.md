# Cross-translation-unit contracts

`python3 tools/contract_audit.py --output .local/contracts.json` reports inferred
C-linkage contract differences without requiring an RPX. It does not compile
reconstructions for acceptance or change the exact-byte verification gate.

The audit parses every implemented caller with manifest bindings and its
implemented callees. It compares caller declarations with published definitions,
and repeated declarations for callees without definitions. Each report records
coverage, source/header/manifest hashes, Git state, parser identity, unsupported
files and snapshot changes. Indirect calls and functions outside that scope are
not checked. A missing callee definition remains explicitly unvalidated.

Return/parameter types, arity, variadicness, calling convention, exception
specifications and address spaces come from libclang's C++ AST. Typedef aliases and top-level parameter qualifiers normalize
to the same contract. Object-pointer differences require C++ contract review;
equal pointer widths do not make them consistent. Anonymous/internal record
identities remain specific to their translation unit. A report cannot determine
which inferred contract matches the original game. Record identity does not prove
ODR or layout equivalence; forward declarations and completed external records
can share a contract identity.

The analysis model is PowerPC EABI C++17. An analysis-only two-float vector typedef
replaces `__vec2x32float__`; `__bytereversed` is erased. These shims do not validate
GHS code generation, vector ABI, byte-order semantics or original layouts.
Parser/type errors discard that translation unit's contracts. Unmodeled
function/parameter attribute cursors fail closed, including hidden-size
parameters such as `pass_object_size`. Unsupported attributes and pragmas fail
parsing rather than being ignored. Raw source/header validation
(`compiler.check_source`) retains project includes and symlink/file limits before
AST parsing. The manifest
is validated from captured immutable bytes; input changes make the report
incomplete.

The tool discovers libclang beside the configured or located Clang, then through
platform library lookup. Use `--compiler /path/to/clang` to guide discovery or
`--libclang /path/to/libclang` to select the library explicitly. Missing libraries
produce an actionable error. AST-dependent tests skip when libclang is absent.

| Exit code | Meaning |
| --- | --- |
| 0 | Report completed; findings are informational by default. |
| 1 | `--strict` found a conflict or a required pointer-contract review. |
| 2 | Parse/type error, unsupported edge, changed snapshot or tool failure. |

The CLI reports findings by default. Acceptance CI runs `--strict` after exact-byte verification, rejecting conflicting declarations, required pointer-contract reviews and incomplete audits. Linux CI installs libclang 18 and runs its AST regression tests explicitly.

Use `--summary` for concise coverage and findings. `--output .local/contracts.json` retains the full report when needed. Both output modes run the same checks and return the same exit status.
