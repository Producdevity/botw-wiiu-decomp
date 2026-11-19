# Maintainer guide

Contributors only add sources. Maintainers keep the task supply ahead of
contributors, extend the verifier and review interface changes.

## Keep the queue full

`python3 tools/community.py summary` reports `available_functions` and
`prepared_available_functions`. When available work drops below a few hundred
functions, admit more references.

```sh
python3 tools/inventory.py --output .local/inventory.json
python3 tools/admit_references.py .local/inventory.json --batch discovered-YYYY-MM-DD
python3 tools/decomp.py doctor
```

`inventory.py` reads your setup RPX, verifies its hash, and writes candidate
rows: address, size, hash, bindings and category. It writes no bytes or
disassembly. `admit_references.py` appends rows whose spans overlap no existing
reference. It sets `ghs-5.3.22-auto` and records the batch. `doctor` re-reads
every span from the RPX. Open the change as a maintenance PR (see below).

The manifest is sharded into `config/functions/XXXXXXXX.json`, one file per
1 MiB of address space, named by the range start. Each shard keeps one function
per line in address order. Tools read and write it through
`project.read_manifest` and `project.write_manifest`; never edit a shard by hand.
A test fails if a shard reaches GitHub's 50 MB warning size.

Discovery is deterministic. The default mode admits direct-call targets with
bounded, contiguous control flow and no original relocations. Opt-in modes:

- `--short-tails`: straight-line integer adapters that end in a direct branch.
- `--blr-leaves`: independently called single-`blr` functions.
- `--vtables`: virtual-table slots, using the GHS table pattern.
- `--max-size` (4–256, default 64) bounds the short adapters.
- `--original-relocations`: bounded functions whose original relocations all fit
  `cafe-data-address-v1`, `cafe-import-rel24-v1` or both. Each row carries the
  relocation contract read from the RPX, and discovery re-reads the span through
  that contract before emitting it. Every address taken into `.text` (vtable
  slots, function-pointer loads) also fences these spans.

A new span cannot contain another entry or branch target or overlap a body.
Outside `--original-relocations` it cannot include an original relocation.
Other relocation classes (code addresses, jump tables) stay excluded; see
[relocation profiles](verification.md#original-relocation-profiles).

### Pinning interfaces

`--prepared` tasks need a `source_contract`. Pin one only when caller/callee
evidence supports it: argument registers read, return registers consumed, and
how callers use the result. An identical body at another address does not
establish a type. Put evidence that the manifest cannot express in
[function notes](function-notes.md).

## Maintenance PRs

Changes to `config/`, `tools/`, `src/`, `tests/` or `.github/` fail the ordinary
`verify` job by design. For a maintenance PR:

1. Run `PYTHONPATH=src python3 -m unittest discover -s tests`, the full
   `python3 tools/decomp.py check --all --summary` and the strict audit locally.
2. Dispatch the `Verify reconstructions` workflow on the PR branch. The run is
   named `verify-maintenance`.
3. Record the run link in the PR, then merge with admin rights once it passes.

Never weaken a check or change an expected hash to accept a source. Add fixtures
when extending a relocation class or a discovery mode.

## Repository settings

- Branch protection on `master` requires `verify` and `pr-metadata` and **does
  not** require branches to be up to date. The auto-merge job re-verifies
  against current master instead. Requiring up-to-date branches would stall it,
  because merges made with `GITHUB_TOKEN` cannot re-trigger checks.
- Claims are reconciled every 15 minutes by `claims.yml`.

## Priorities

1. **Keep tasks available.** Admit discovered references in batches, and pin
   interfaces where evidence is cheap.
2. **Unblock groups, not single functions.** Use blocker issues to find shared
   causes: a missing layout, relocation class or compiler behavior. Put shared
   declarations in `include/botw/` with asserted sizes and offsets, and recheck
   every consumer.
3. **Extend linked components.** The getter-and-BSS check links code and data at
   original addresses. Random-state and direct-call components come next.
4. **Grow discovery.** Most of `.text` is still outside the reference set because
   it contains original relocations. Supporting more relocation classes unlocks
   the larger functions.

## Tooling provenance

The Espresso disassembly overlay was written independently from public encoding
facts. Sources: Cemu's interpreter and recompiler sources and the NXP MPC750
manual (table 2-26). It decodes D-form `psq_l`, `psq_lu`, `psq_st` and `psq_stu`
and marks other opcode-4 words as unsupported. Branch and shift annotations only
add comments to private disassembly. No implementation code was copied. The
Python tools and synthetic fixtures were written for this project.
