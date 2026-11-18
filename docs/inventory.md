# Local candidate inventory

`python3 tools/inventory.py --output .local/inventory.json` reads the setup RPX,
verifies the pinned whole-file hash, and writes candidate metadata.
Use `--rpx /path/to/U-King.rpx` to override the setup path. The output contains addresses,
sizes, hashes and bindings; it does not contain game bytes or disassembly.

Without discovery flags, the function rows and their ordering are exactly those
returned by `inventory.discover`. Opt-in rows are appended after those unchanged
rows:

```sh
python3 tools/inventory.py --short-tails --blr-leaves \
  --tail-target-policy bounded --max-size 64 --output .local/short-inventory.json
```

`--short-tails` adds independently called entries whose fully visited span is a
straight-line integer adapter ending in an unconditional direct branch.
`--blr-leaves` adds independently called, single-instruction `blr` leaves. A
`blr` boundary does not establish arguments, a return type, or identity behavior.
`--max-size` bounds adapter spans to an aligned 4..256 bytes (default 64).

The default `bounded` policy requires a tail destination with a baseline bounded
body or a separately identified single-blr body.
Explicit `--tail-target-policy direct-call` also permits independently called executable entries with a
recognizable entry instruction. That weaker evidence establishes an entry and
binding, not the destination's complete body. Each new row's
`discovery_evidence.tail_target_proof` records the distinction. The policy does
not itself enable either discovery flag.

New spans cannot contain another entry or known direct branch/call destination
in their interior, overlap discovered bodies, or contain original RPX
relocations. Unsupported adapter instructions, conditional/internal branches,
calls, unknown destinations and indirect tails are rejected. A tail destination
must have independent, unrelocated linked-call evidence; a chain of tail
references cannot establish its own destination entry.

An output path that resolves to the input RPX, including a symlink or hardlink
alias, is rejected.

Discovery does not edit the reference manifest or accept a reconstruction.
Boundaries, C++ contracts and selected reference rows still require maintainer
review; source acceptance continues to use the unchanged strict matcher.

## Vtable candidates

```sh
python3 tools/inventory.py --vtables --output .local/vtable-inventory.json
```

This flag appends candidates from the GHS table pattern observed in the pinned
RPX. Each run starts with a 12-byte zero prefix. Two or more consecutive 8-byte slots
must have a zero adjustment word and a linked `R_PPC_ADDR32` code pointer in
`.rodata`. A matching `R_PPC_ADDR16_HA` and `R_PPC_ADDR16_LO` pair in `.text` must
form the table address in registers and carry it into a store. The pinned RPX uses
the `.syscall` section symbol as its code-segment base for the slot relocations.

Each new target must follow an unrelocated terminal instruction and pass the
bounded control-flow walk. Linked code pointers and direct-call targets delimit
the walk. A candidate is rejected if its body contains an original relocation,
overlaps another function span, or has a direct branch from outside that enters
its interior.

The local report includes qualifying table and slot addresses, the pair of
relocation sites, the store site, candidate hashes and discovery counts.
Keep this report private. It proposes boundaries and bindings for review.
Virtual method signatures, class layouts and source acceptance require separate
evidence and verification.
