# Global word loads

Fourteen getters add 168 bytes of reference tasks. Six read numeric words and
eight read pointers. Each complete twelve-byte body initializes its address
register, loads R3 and returns. Source coverage is verified in separate PRs.

| Function | Chosen return type | Inspected use |
| --- | --- | --- |
| `fn_02e54e74` | `int` | Signed comparisons with halfword counters |
| `fn_02e55024` | `int` | Signed maximum, then integer-to-float conversion |
| `fn_02f894f0` | `int` | Signed-positive loop count |
| `fn_030a51cc` | `distinct opaque pointer` | Dereference and virtual dispatch |
| `fn_031a71a4` | `int` | Signed maximum selection |
| `fn_03378a44` | `unsigned int` | Subtraction, unsigned high multiply and addition |
| `fn_0341aac0` | `unsigned int` | Equality with four and nonzero flag |
| `fn_0341d94c` | `distinct opaque pointer` | Null test, dereference and virtual dispatch |
| `fn_0341d98c` | `distinct opaque pointer` | Member load through returned address |
| `fn_037d97e4` | `distinct opaque pointer` | Word and float member loads |
| `fn_037e5b2c` | `distinct opaque pointer` | Saved pointer dereference and dispatch |
| `fn_03bb1598` | `distinct opaque pointer` | Immediate member loads |
| `fn_03f923ac` | `distinct opaque pointer` | Dereference and virtual dispatch |
| `fn_04194a9c` | `distinct opaque pointer` | Offset pointer passed to dereferencing callees |

Four signed interfaces follow ordered comparisons, counts or conversion. The
two unsigned interfaces preserve a full numeric word; historical signedness
and enum identity remain unresolved. Each pointer uses a separate forward-declared
`Opaque_ID` record without a layout, constness or shared class identity claim.
The bodies consume no incoming arguments; `(void)` is minimal, with unused
historical parameters unresolved. `source_contract` pins each reviewed interface.

Both independent RPX readers agree on every complete span and all 28 original
HA/LO address fields. Every body has a direct-call entry, terminal return, no
overlap and no external interior branch, relocation or symbol entry. Each
aligned four-byte access fits the allocated writable data section size.
`fn_02f894f0` and `fn_03f923ac` read BSS; the other twelve read initialized data.
There are no competing published declarations or known overlapping bindings.

The source proposals only declare external mutable objects and return their
values. They add no backing storage, initializers or qualifiers. All fourteen
pass the fixed GHS speed profile, original-byte and hash-only comparisons, and
source-interface AST checks. This does not establish the historical compiler.

## Deferred type evidence

Thirteen further word patterns remain outside this batch. Zero tests, argument
forwarding, byte truncation, generic array stores and snapshot subtraction alone
did not settle their interfaces in the inspected callers.

| Missing evidence | Functions |
| --- | --- |
| Only zero tests, forwarding or generic storage | `fn_02e551f8`, `fn_02e57cac`, `fn_02ead648`, `fn_03046fb4`, `fn_033789f0`, `fn_034f0780`, `fn_034f26f4`, `fn_03b6ac68` |
| Only low-byte stores | `fn_033789e4`, `fn_03378a38` |
| Snapshot subtraction without a settled word type | `fn_03b5b8ec` |
| Callback effects on array count and capacity | `fn_039e3500`, `fn_039e350c` |

`fn_039e3500` and `fn_039e350c` have matching private pointer proposals, but the
inferred array flow crosses a virtual callback that can mutate the builder.
No bound on the resulting count was established before unguarded appends.
Those two need stronger count and alias evidence before their proposed types
are admitted. Matching those private sources adds no public coverage.

Original bytes, disassembly and compiler output stay private.
