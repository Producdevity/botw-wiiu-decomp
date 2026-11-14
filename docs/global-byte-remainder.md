# Additional global byte loads

Eighteen getters add 216 bytes of reference tasks. Each reads one mutable global
byte, zero-extends it into R3 and returns. Implementation coverage is counted
only after the separate source PRs pass verification.

| Function | Imported byte | Inspected result use | Compiler profile |
| --- | --- | --- | --- |
| `fn_02e5509c` | `data_10467def` | Forwarded through R30 into R7 | `ghs-5.3.22-auto` |
| `fn_02e550a8` | `data_10467df0` | Forwarded into R8 | `ghs-5.3.22-auto` |
| `fn_02e551bc` | `data_10467df3` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_02e86240` | `data_10469875` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_031a6ff4` | `data_1046d2d5` | Discarded / compared with zero | `clang-ppc` |
| `fn_031a7000` | `data_1046d2d7` | Discarded | `clang-ppc` |
| `fn_0333b874` | `data_1046d898` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_0341d958` | `data_1046f58a` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_0341d964` | `data_1046f58b` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_0341d970` | `data_1046f58c` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_0341d980` | `data_1046f588` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_034ddee0` | `data_1046fef8` | Discarded at both inspected sites | `ghs-5.3.22-auto` |
| `fn_035137e8` | `data_1046ffc8` | Compared with zero | `clang-ppc` |
| `fn_0364f30c` | `data_1047be2a` | Compared with zero | `clang-ppc` |
| `fn_037025ec` | `data_1047bf4c` | Stored as a byte at both inspected sites | `ghs-5.3.22-auto` |
| `fn_03702604` | `data_1047bf4d` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_03713e70` | `data_1047c108` | Compared with zero | `ghs-5.3.22-auto` |
| `fn_03c2dabc` | `data_1047f1dc` | Compared with zero | `ghs-5.3.22-auto` |

Both RPX readers agree on all complete 12-byte spans and 36 original HA/LO
address fields, including each symbol/addend destination. Every function has
an independently decoded direct-call entry, a terminal return, no overlapping
reference and no external interior branch, relocation or symbol entry. All
one-byte accesses fit within the writable data section. Original address fields
already contain their linked values; the existing data-address profile preserves them.

`unsigned char(void)` is the reviewed minimal interface pinned by
`source_contract`. The bodies consume no incoming registers. Some callers
supply possible receiver values before calling; unused historical arguments
remain unresolved. Forwarded results do not establish formal parameter types,
and zero tests do not establish a 0/1 storage invariant. No competing published
data or function declarations were found.

Sources declare external bytes and perform runtime reads. They add no backing
objects, initializers or storage qualifiers. Fourteen match a fixed GHS profile;
the other four match the unchanged source under the existing fixed Clang profile.
This does not identify the historical compiler. Actual hosted Clang verification
is required in the source PRs. Original bytes and compiler output stay private.
