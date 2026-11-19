# Reference selection and task notes

[The reference manifest](../config/functions.json) is the source of truth for
function boundaries, original hashes, bindings and pinned interfaces.
[The batch manifest](../config/batches.json) groups those reference IDs for
reporting and maintainer rules. See [coverage](verification.md#coverage) for live
counts and exact rebuild results.

## Admitting a reference

- Establish an entry from an independently decoded call, a relocated virtual
  table slot or another reviewed symbol reference. Follow bounded control flow
  to the terminal instruction. Check for overlapping spans and external
  branches or relocated pointers into the interior.
- Check the complete span against the pinned RPX. Record each external call,
  data field and import through a supported [relocation profile](data-relocations.md).
  Preserve the linked field values when computing the expected hash.
- Use caller and callee evidence to pin `source_contract` when the interface is
  understood. A call target or identical machine-code body alone cannot
  establish a C++ type.
- For repeated bodies, `source_seed` points to the original reconstruction
  used as a starting point. Each new address requires its own entry, relocation,
  byte and interface checks.
- Document only evidence that the manifests cannot express. Keep packets,
  disassembly and compiler output local.

Use the [inventory command](inventory.md) to find candidates. Use the
[contributor workflow](agent-guide.md#claim-and-investigate) to find tasks
that already have reviewed interfaces.

## Interface and linking evidence

The handle helpers `fn_0378da88` and `fn_0378d8dc` were linked at their original
addresses and verified together without original-code fallback. See the
[known attempts](known-attempts.md) for dependent record traversals.

The identical bounded-vector lookup bodies `fn_03e96784` and `fn_03f3ea2c`
need different key types. The former's callers extract bits from an unsigned
word. The latter's callers pass a stack slot initialized with a derived pointer.
The [random-state component](random-state.md) records caller and alias evidence
for three functions with a shared state layout.

## Opaque descriptor predicate adapters

`opaque-descriptor-predicate-adapters` provides 73 separately claimable
60-byte functions. Each has a pinned `bool (void *)` interface. An independent
reader checked the complete spans, all 292 absolute data relocation fields,
and the call to `fn_037b82e8` in each function. Private trial sources passed both
whole-function byte and hash comparisons with `ghs-5.3.22-speed`.

Each adapter builds an eight-byte descriptor on its stack. The payload
pointer is at offset 0, and the dispatch pointer is at offset 4. The reference
provides both data bindings. Use `botw/descriptor_predicate.h` for the layout and
helper declaration. Forward the receiver and descriptor address to
`fn_037b82e8` and propagate its Boolean result. If GHS reorders the prologue,
consult the scheduling intrinsic in [toolchain](toolchain.md).

```sh
python3 tools/community.py list --prepared --category calls --max-size 60
```

Follow the [agent guide](agent-guide.md) to claim a task, generate its private
packet and run the exact check.

## Other prepared small functions

These existing direct-call references now have pinned interfaces. Trial sources
passed exact byte comparison, hash-only verification, and the source-contract
audit. The manifest's automatic profile search includes each matching profile.

| Function | Scope | Matching profile |
| --- | --- | --- |
| `fn_02ea941c` | Signed remainder by 120. Preserve the sign of a negative remainder. | `ghs-5.3.22-speed` |
| `fn_02c20374` | Test whether signed division by 10,000 truncates to 150. The caller branches on the Boolean result. | `ghs-5.3.22-speed` |
| `fn_0378f190` | Test the indexed bit in the halfword at receiver offset 280. Preserve the caller's valid index range. | `ghs-5.3.22-speed` |
| `fn_038ba2fc` | Copy four representation words to receiver offsets 164 through 176. Preserve every bit of the input words. | `ghs-5.3.22-speed-notailrecursion-nopipeline` |
