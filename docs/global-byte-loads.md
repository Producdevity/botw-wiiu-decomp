# Global byte loads

Sixteen getters each load one global byte into the return register. Their
complete three-instruction spans add 192 bytes of reference tasks. Source
coverage is counted only after implementation verification.

| Function | Imported byte symbol | Inspected result use |
| --- | --- | --- |
| `fn_02a2bba4` | `data_10463795` | Compared with zero |
| `fn_02c33370` | `data_10463e6e` | Compared with zero |
| `fn_02c3337c` | `data_10463e79` | Compared with zero |
| `fn_02c34d3c` | `data_10463e85` | Compared with zero |
| `fn_02c34d48` | `data_10463e86` | Compared with zero |
| `fn_02c40050` | `data_10463ea5` | Compared with zero |
| `fn_02e54e50` | `data_10467de2` | Discarded |
| `fn_02e54e5c` | `data_10467de5` | Compared with zero |
| `fn_02e54f64` | `data_10467de6` | Compared with zero |
| `fn_02e54fac` | `data_10467de7` | Compared with zero |
| `fn_02e55054` | `data_10467de8` | Compared with zero |
| `fn_02e55060` | `data_10467de9` | Compared with zero |
| `fn_02e5506c` | `data_10467dea` | Compared with zero |
| `fn_02e55078` | `data_10467dec` | Compared with zero |
| `fn_02e55084` | `data_10467ded` | Discarded |
| `fn_02e55090` | `data_10467dee` | Compared with zero |

Each body initializes its address register, loads a byte into R3, then returns.
It consumes no incoming argument. `unsigned char(void)` is a chosen minimal,
bit-preserving interface; unused historical arguments and bool-versus-byte
declarations remain unresolved. Discarded results do not establish void returns.
No 0/1 invariant is assumed. `source_contract` pins the reviewed interfaces.

Every one-byte access is within the original writable data section. Sources
only declare external mutable bytes and perform runtime reads; no backing
objects, initial values or qualifiers are added. The existing
[data-address profile](data-relocations.md) preserves and validates all 32
original HA/LO fields and their complete destinations. Independent readers
agree on the raw spans. No competing published data/function declarations were
found. Original bytes and compiler output stay private.
