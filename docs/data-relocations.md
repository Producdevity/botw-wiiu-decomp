# Original data address references

`cafe-data-address-v1` admits original `ADDR32`, `ADDR16_LO`, `ADDR16_HI` and
`ADDR16_HA` relocations to defined, allocated, non-executable data. It compares
unchanged original code bytes at their original link addresses.

The reader retains original symbol values, sizes, types, section indices and
signed addends. Each referenced symbol must fit its declared data section.
`S + A` must fit 32 bits and land inside allocated PROGBITS or NOBITS data.
Section anchors may address another data section: the Cafe `$DATA` anchor can
start in `.rodata` and reach `.bss`. Imports, executable targets, section gaps,
TLS, unsupported symbol types and relocation families reject.

Every complete original relocation field must already contain the value computed
from `S + A`. The reader neither patches nor masks it. Partial fields and a
single changed field bit reject. Existing references use `unrelocated` by default;
normal inventory discovery retains that restriction.

## Trusted reference metadata

A maintainer establishes boundaries and adds the profile, data bindings and
function-relative relocation fields in a separate reference maintenance PR.
This synthetic example shows the additional fields:

```json
{
  "original_profile": "cafe-data-address-v1",
  "data_bindings": {"data_10008000": "0x10008000"},
  "data_relocations": [
    {"offset": 2, "type": 6, "symbol": "data_10008000"},
    {"offset": 6, "type": 4, "symbol": "data_10008000"}
  ]
}
```

Data names encode their exact address, including byte-aligned addresses. Every
binding must occur in the relocation list. Original local checks verify the full
list against the RPX's own metadata; setup, doctor, packet generation, known-callee
context and compilation checks use the same reference reader.

## Compiled dependency checks

Reconstruction source declares external data through its established shared type,
for example `extern "C" unsigned char data_10008000[];`. Data binding permits only
undefined object or untyped symbols and the four absolute relocation families.
Allocated data emitted into the object continues to reject.

The compiled object's data relocations must equal the trusted list in field
offset, relocation type, symbol and **full resolved destination**. This check runs
before byte or SHA-256 comparison. A numeric pointer literal, missing field,
unused binding or different address sharing the same high halfword cannot pass.
Compiler optimization may produce an equivalent but different relocation layout;
that source must be revised to satisfy this conservative dependency contract.

The reference identifies addresses and dependencies. Recovered data layouts,
contents and semantic names require their own evidence and technical review.
Private RPX data, packets and disassembly stay local.
