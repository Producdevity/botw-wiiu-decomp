# Cross-translation-unit contracts

`python3 tools/contract_audit.py --output .local/contracts.json` reports inferred
C-linkage contract differences without requiring an RPX. It does not compile
reconstructions for acceptance or change the exact-byte verification gate.

The audit parses every trusted published function, implemented callers with
manifest bindings, their implemented callees, and implemented functions with a
structured `source_contract`.
It compares caller declarations with published definitions,
and repeated declarations for callees without definitions. Each report records
coverage, source/header/manifest hashes, Git state, parser identity, unsupported
files and snapshot changes. Indirect calls and new functions outside that scope are
not checked. A missing callee definition remains explicitly unvalidated.

Function-reference rows may opt into a reviewed, chosen source interface:

```json
"source_contract": {
  "return_type": "float",
  "parameter_types": [],
  "variadic": false
}
```

All three fields are required; unknown fields and unsupported type spellings are
errors. Supported values are `void` (return only), `bool`, `char`, `signed char`,
`unsigned char`, `short`, `unsigned short`, `int`, `unsigned int`, `long`,
`unsigned long`, `long long`, `unsigned long long`, `float`, `double`, and
`long double`. Single pointers use a space before `*`, for example `void *`,
`const unsigned int *`, or `const struct Handle *`. Pointees may be `const`,
`volatile`, or `const volatile`. Opaque record names are single global identifiers;
by-value records, namespaces, references, multiple pointer levels, function
pointers, arrays, and typedef spellings are not supported in expected metadata.
At most 32 parameters and 128 characters per type are accepted. These limits
apply only to expected metadata; existing source parsing capabilities remain.

Libclang parses an isolated declaration generated from validated metadata under
the same PowerPC analysis model and compares canonical return/parameter types
and variadicness with the unique definition in its manifest source file.
Typedef aliases and top-level parameter qualifiers normalize as usual. Every
pinned mismatch, including object-pointer differences, is a conflict. Unsupported
analysis or a missing unique definition makes the audit incomplete. Unimplemented
unmatched references do not require source files; CI's existing missing-source
policy remains authoritative. For existing trusted definitions without `source_contract`, the trusted
source definition and trusted headers supply the expected AST interface. The
candidate must keep the same unique definition at the trusted manifest path.
Explicit trusted metadata takes priority over this fallback. New tasks without a
trusted definition retain the existing evidence and review requirements.

This pins a maintainer-reviewed source interface. It does not recover the
historical game's prototype, prove an opaque record's layout, or prove that
omitted historical arguments never existed. The prose in
`contract_evidence.exported_contract` remains advisory and is never parsed as code.

For separate trusted/candidate checkouts, use
`--root /path/to/candidate --reference-root /path/to/trusted`. All reference rows,
source paths, binding edges, selection, and expected contracts then come from the
trusted manifest, captured and hashed before analysis. Candidate definitions use candidate headers; fallback expected definitions
use trusted sources and headers. Both input sets are hashed and checked for
snapshot and source/header inventory drift. CI passes both roots explicitly and uses its base
checkout's verifier; ordinary source PRs cannot edit `config/functions.json` under
the existing maintainer-only file policy. Coherent candidate header/definition
changes cannot rewrite a trusted contract. Without `--reference-root`, the local
audit uses `--root` for both sides. Such a self-comparison does not detect edits
to its own fallback baseline; use a separate trusted checkout for preservation.

Return/parameter types, arity, variadicness, calling convention, exception
specifications and address spaces come from libclang's C++ AST. Typedef aliases and top-level parameter qualifiers normalize
to the same contract. Object-pointer differences require C++ contract review;
equal pointer widths do not make them consistent. Anonymous/internal record
identities remain specific to their translation unit. Only same-ID trusted/candidate
baseline comparisons normalize the corresponding translation-unit root paths;
cross-TU comparisons keep their original distinct identities. Unexpected internal
scopes other than the corresponding resolved main-TU path fail closed. A report cannot determine
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
| 1 | `--strict` found a source-contract mismatch, cross-TU conflict or required pointer-contract review. |
| 2 | Parse/type error, unsupported edge, changed snapshot or tool failure. |

The CLI reports findings by default. Acceptance CI runs `--strict` after exact-byte verification, rejecting conflicting declarations, required pointer-contract reviews and incomplete audits. Linux CI installs libclang 18 and runs its AST regression tests explicitly.

Use `--summary` for concise coverage and findings. `--output .local/contracts.json` retains the full report when needed. Both output modes run the same checks and return the same exit status.
