# Four-word random state

Three functions operate on the same four unsigned state words:

| Stable ID | Descriptive alias | Behavior |
| --- | --- | --- |
| [fn_030c48dc](../reconstructions/fn_030c48dc.cpp) | `seedXorshift128` | Initialize four words with multiplier 1812433253 and addends one through four. |
| [fn_030c499c](../reconstructions/fn_030c499c.cpp) | `nextXorshift128` | Advance xorshift128 using logical shifts 11, 19 and 8; return the new fourth word. |
| [fn_030c49e0](../reconstructions/fn_030c49e0.cpp) | `copyXorshift128State` | Copy the four words through four output pointers in order. |

All three implementations match their original spans. The generator has 1,342 raw direct
calls in the pinned text; bounded caller previews consume its result as a word,
including unsigned range mapping and float-bit construction. The copy's observed
caller uses all three routines on the same state and supplies four consecutive
word destinations. Its source interface explicitly forwards the unchanged state
pointer; that caller ignores the result, leaving the original high-level return
declaration unresolved. Interleaved reads/writes preserve output aliases.

Independent byte and hash checks established the 68-byte generator and 36-byte
copy before implementation publication. The copy reference was admitted
separately before its source submission. The aliases in the
[symbol catalog](../config/symbols.json) describe recovered behavior and preserve
stable address IDs.

The formulas and state order are corroborated by the public SEAD reconstruction
at [the BotW submodule pin](https://github.com/open-ead/sead/blob/f4178a21e21235830357dc27c26a2c29956972ed/modules/src/random/seadRandom.cpp).
The Wii U implementations were independently written from the pinned original;
no external implementation was imported. These observations support descriptive
aliases without establishing original Nintendo class or method symbols.
