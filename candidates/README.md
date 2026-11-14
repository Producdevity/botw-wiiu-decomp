# Unaccepted reconstruction candidates

These readable sources are starting points. They do not pass exact verification,
add no coverage, and remain available tasks. Their signatures, field types and
view names are inferred unless an existing shared declaration establishes them.
Use the private packet and [known attempts](../docs/known-attempts.md) before
changing a candidate. Run the ordinary checker after copying it to the matching
`reconstructions/` path; a candidate file never counts as an implementation.

| Source | Starting behavior | Remaining mismatch |
| --- | --- | --- |
| [fn_02013bd0.cpp](fn_02013bd0.cpp) | Test a shifted upper mask, then the lower bit at the same index. Observed callers supply indices zero through three. | Corrected 48-byte forms differ in register allocation. Wider index semantics are unresolved. |
| [fn_024694e4.cpp](fn_024694e4.cpp) | Clamp the signed pointee at offset 100 below zero; multiply with the pointees at 24 and 80 using unsigned intermediates. | Same-size output differs in allocation. Historical integer declarations remain inferred. |
| [fn_0261e54c.cpp](fn_0261e54c.cpp) | Add the word through offset 32 to the low-word product of the word through offset 36 and the word at 48. | All three tried forms reach 32 bytes but differ. The caller compares the result as signed; the candidate preserves unsigned wrapping. |
| [fn_02998424.cpp](fn_02998424.cpp) | True for the nested flag, nonzero byte, or state 12/6. | Corrected 64-byte forms differ in allocation. |
| [fn_03cafe80.cpp](fn_03cafe80.cpp) | Three bounded counters with wrap at their configured limits. | Correct-size output and matching diagnostic traces in four profiles still differ in exact bytes. |
| [fn_02470538.cpp](fn_02470538.cpp) | Null-check the nested pointer at offset 44, then test its word-bit helper. | The closest 72-byte forms reverse the original order of the final return normalization and LR load. |
| [fn_03cbeae8.cpp](fn_03cbeae8.cpp) | Reset six words to all ones and two words to zero. | Typed, byte-offset and member forms remain unmatched. A bounded source-permutation run also failed. |

The new starting points were compiled against all six fixed GHS profiles and
compared with the pinned original. None passed. No assembly, original bytes or
compiler output is included. [Diagnostic scope](../docs/register-diagnostics.md).
