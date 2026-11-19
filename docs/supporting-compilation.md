# Supporting-function compilation

A reference can list trusted function IDs in `compile_with` when GHS needs
multiple sources in the same translation unit to reproduce the original
code. The checker follows those references transitively. A compilation set
contains at most eight functions and uses the selected function's pinned
compiler profile. The [candidate lookup caller](known-attempts.md) has an
example of a shared compilation dependency.

Run the ordinary command for the selected function. It loads the supporting
sources automatically and reports the results for the entire set.

```sh
python3 tools/decomp.py check FUNCTION --summary
python3 tools/decomp.py check FUNCTION --hash-only --summary
```

Keep one source per reference and preserve shared interfaces and includes.
Every emitted function in the set must occupy its own verified span. The
checker binds calls to the trusted original addresses and compares each body
against the original bytes or hash. Extra code, data sections, and unresolved
dependencies fail verification. See the [verification contract](verification.md).

Changes to a compilation set require a maintainer-reviewed reference change.
Ordinary reconstruction PRs use the trusted set from the base branch.
