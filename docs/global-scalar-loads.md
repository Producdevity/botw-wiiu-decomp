# Global scalar loads

Six getters load a global byte or word into the return register. Their complete
three-instruction spans add 72 bytes of reference tasks. Source coverage is
counted only after implementation verification.

| Function | Imported data symbol | Chosen return type |
| --- | --- | --- |
| `fn_020175c4` | `data_10462c20` | `unsigned char` |
| `fn_02a2bb80` | `data_10463794` | `unsigned char` |
| `fn_02c34d30` | `data_10463e84` | `unsigned char` |
| `fn_02c51318` | `data_10463ec8` | `unsigned char` |
| `fn_02a13ed4` | `data_10463700` | `int` |
| `fn_02da9ff8` | `data_10463f78` | `void *` |

Four results are zero-extended bytes consumed by zero tests or flag combination.
`unsigned char` preserves the loaded bits; a historical bool declaration and a
0/1 invariant are unproven. The signed-word getter feeds a signed integer-to-float
conversion. Multiple callers null-check and dereference the pointer getter;
`void *` avoids inventing a class layout. No published declaration conflicts were
found for these functions or imported data symbols.

The bodies consume no incoming arguments. These minimal interfaces do not
recover unused historical arguments. They are pinned in `source_contract` for
deterministic checking of future submissions; interface changes require review.

Sources declare external mutable data and perform one runtime load. They define
no backing objects or initializers. The existing
[data-address profile](data-relocations.md) checks each complete HA/LO destination
and unchanged original field. Independent readers agree on all six spans and
all twelve fields. A seventh nonmatching source was excluded.
