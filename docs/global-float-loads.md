# Global float loads

Twelve getters each load one global 32-bit float into the return register.
Their original three-instruction spans use two validated address fields and a
return. New references add 144 bytes to the task catalog; source coverage is
counted only after implementation verification.

| Function | Imported data symbol |
| --- | --- |
| [fn_02a2bbb0](../reconstructions/fn_02a2bbb0.cpp) | `data_10187f5c` |
| [fn_02e2ac6c](../reconstructions/fn_02e2ac6c.cpp) | `data_10212ce8` |
| [fn_02e54e38](../reconstructions/fn_02e54e38.cpp) | `data_10467cc8` |
| [fn_02e5f0a4](../reconstructions/fn_02e5f0a4.cpp) | `data_102164c0` |
| [fn_02ead664](../reconstructions/fn_02ead664.cpp) | `data_1052bd64` |
| [fn_031709cc](../reconstructions/fn_031709cc.cpp) | `data_1028ab44` |
| [fn_031a7108](../reconstructions/fn_031a7108.cpp) | `data_1046d29c` |
| [fn_0359038c](../reconstructions/fn_0359038c.cpp) | `data_102e66d4` |
| `fn_036fb83c` | `data_1030a108` |
| `fn_03900f64` | `data_10336ea4` |
| `fn_03924ee4` | `data_10339458` |
| `fn_0398a8ec` | `data_1034a35c` |

Each source uses an external float declaration and a runtime read. Data stays in
the user's original; there are no copied initial values or allocated replacement
objects. The existing [data-address profile](data-relocations.md) verifies the
full HA/LO destination and unchanged original fields.

`float(void)` is an inferred minimal interface: the body consumes no incoming
argument register, and callers use F1 as floating data. This does not recover
unused historical receiver parameters or uniquely distinguish float from a
promoted double return. One result is forwarded through another wrapper before
its floating use. These contracts were reviewed separately from byte matching.

The targets include BSS and sections named `.rodata` whose flags include write
access. Mutable external declarations preserve the runtime reads; neither the
section name nor zero file contents establish an immutable constant.
