# Opaque field-accessor contract

`fn_0314dbf0` now exports `unsigned int (const void *)` through
`include/botw/field_accessors.h`. Its inferred word view stays internal. The
previous parameter named a translation-unit-local record, which other source
files could not reuse consistently. The complete original 12-byte body remains
an exact match: read word zero, return normalized bit one.

The original `fn_02470538` loads a pointer at object offset 44, rejects null,
then calls this helper and tests its result. Two direct callers test the outer
result for zero. These observations support the chosen opaque pointer and byte
interfaces; historical class identity, unused arguments and bool-versus-byte
return declarations remain unresolved. `source_contract` pins the reviewed
interfaces for future implementations.

The [outer predicate candidate](../candidates/fn_02470538.cpp) remains unmatched.
Three natural source forms were checked against all six fixed GHS profiles.
The closest form emits the original 72-byte length but reverses the order of
the final byte normalization and LR load. It adds no implementation coverage.
The [known-attempt record](known-attempts.md) prevents repeating this search
without new evidence. No reference bytes, compiler profiles or matcher changed.
