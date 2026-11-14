# Known unmatched attempts

Check the selected function here before starting another attempt. These records
cover the fixed GHS 5.3.22 profiles. A retry should have new source, layout or
compiler evidence; keep the exact check as the acceptance gate. Update or remove
the record when its blocker is resolved.

| Functions | Evidence already recovered | What remains |
| --- | --- | --- |
| `fn_02b5bcc8` | An eight-byte stack key holds a value and virtual-table pointer. Compiling its pointer-table helper together removes extra register saves. | Polymorphic key candidates reach the original size but still differ. Recover the interface and emitted table dependency before adding verifier support. |
| `fn_02d8f970` | The bit test and float comparison are recovered; both float helpers are implemented. | Separate compilation differs in the false epilogue. Shared compilation instead shrinks the caller. More boolean spelling changes have not resolved this. |
| `fn_04210514` | Float polynomial/range-reduction flow and constant widths are recovered. Its integer-to-float helper preserves values that remain live across the call. | An ordinary external declaration spills registers; a simple cast compiles inline. Establish the original conversion-call contract. Tiny/unordered inputs return the original signed input. |
| `fn_02e74378` | The published caller uses an eight-byte `FloatPair` result. Original call flow uses two result registers. | Direct aggregate return and explicit field copies have different code shapes. Keep the established type until consumer evidence supports a change. |
| `fn_02c1363c`, `fn_02c13674` | Indexed record access, signed count, stride and fallback paths are recovered. | Register allocation and conditional-return placement differ across the fixed profiles. Typed and byte-offset forms have already been tried. |
| `fn_02ea6a4c` | Unsigned indices below four select the table path; other indices select the scalar fallback. | Corrected table/fallback forms still differ. Earlier reversed-branch candidates were discarded. |
| `fn_02ea93b4` | The caller uses an integer result. The proposed low-bit scan has a range check and signed local shift. | Equal-size candidates still differ in allocation; space output is shorter. Further semantic review is required before using the partial source. |
| `fn_031724b4` | Multiple callers test the pointer result. The original repeats a field read. | Current nonvolatile forms are shorter. Recover the layout/aliasing and control flow; repeated reads alone do not establish volatile storage. |
| `fn_03cbeae8` | Eight word writes and their observed order are recovered. | Typed-record and byte-offset forms still differ. Initializer-list assignment is unsupported by this compiler setup. |
| `fn_02b16ef0` | A stack word containing three is passed by address. The existing published caller forwards an opaque result. | Both the preserved return contract and a void diagnostic differ. Review the setter and its consumers before changing the return type. |
| `fn_034d3630` | A ten-value local lookup is recovered from the instruction operands; the observed caller supplies indices zero through nine. | Aggregate initialization emits a shorter table-copy form. Individual assignments reach the original size but differ in frame/allocation. |
| `fn_03c0fda4` | Two dimensions and byte spacing fields determine quotient/remainder-based output coordinates. | The initial byte-offset source has the right size but different allocation. Preserve the interleaved reads/writes when considering aliased inputs. |

## Fresh control-flow cases

The following behavior was independently reviewed against original instructions.
The inferred class identities and historical signatures remain open.

- `fn_02013bd0`: false when the shifted upper mask is present; otherwise test the
  lower bit using the same **register-supplied** index. Supplied callers use
  indices zero through three. The current corrected source is shorter.
- `fn_02017840`: the indexed record stride is **28 bytes**, including trailing
  storage. An out-of-range index uses the base record. The corrected size-asserted
  view still differs in allocation.
- `fn_024694e4`: clamp the signed pointee reached through object offset **100**
  below zero, then multiply with pointees reached through offsets 24 and 80.
  Corrected sources reach the original size but differ.
- `fn_02998424`: return true when the nested flag is set, the byte is nonzero, or
  the state is 12 or 6. Earlier candidates inverted the first two conditions.
  The corrected source remains unmatched.

Private packets, original bytes, disassembly and compiler output stay local.
Shared blocker issues can group functions needing the same evidence; search for
an existing issue before opening another.
