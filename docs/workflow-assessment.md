# Wii U reconstruction workflow assessment

Keep the byte matcher and trusted reference workflow. Before expanding the
queue, establish a repeatable link check for a small component with a data
dependency. Track its unresolved inputs as shared tasks.

## Baseline on 2026-11-17

At `721d9fb`, 1,301 functions match 23,280 bytes out of 36,994,060 text
bytes (0.0629%). The 1,851 admitted spans cover 78,304 bytes. Of the 1,301
matches, 970 are at most 16 bytes and there are 687 distinct byte hashes.
These are legitimate coverage gains. They primarily demonstrate repeatable
small-function matching and leave large functions, common data and translation
units largely untested. Main-branch hosted verification took 92 seconds.
[Verification run](https://github.com/Producdevity/botw-wiiu-decomp/actions/runs/43610168118)

The strongest parts of the setup are the pinned RPX and per-span hashes, exact
relocation-aware comparison, base-owned source CI, and AST checks for pinned
and previously published interfaces. The strict baseline audit parsed 1,301
current sources and found no conflict in scope. It could compare against a
published callee at 52 of 99 binding edges and listed 36 target IDs without
definitions. The remaining risk is at source interface inference, data and
translation-unit boundaries, and incremental linking.
[Verification](verification.md) · [Contract audit](contract-audit.md)

The old default queue put seven documented hard cases first. A pinned
interface existed for 15 of 550 open spans, and the packet writer replaced it
with generic prose. The queue now prefers unblocked work with reviewed
interfaces. The packet preserves the structured pin. The first 14 tasks in the
new order are reviewed 12-byte word getters. Task size is a useful onboarding
filter. Dependency evidence is the basis for integration priority.
[Known attempts](known-attempts.md) · [Global words](global-word-loads.md)

## Sequence work by what it unlocks

1. **Keep a small onboarding queue.** Use pinned contracts and supported
   bindings. Bundle homogeneous functions when the same checker and interface
   evidence cover the batch. Stop repeated pattern searches that yield no new
   contracts, data, compiler behavior or coverage worth the review time.
2. **Own one component at a time.** Record its functions, static data, imports,
   layouts and observed callers. Derive direct edges and fan-in from a pinned
   inventory and label unresolved or indirect edges. Rank prerequisite work by
   how many in-scope functions or units it unblocks, then by port relevance and
   evidence quality. Solve a small high-fan-in helper or shared layout before its
   consumers. Pair a large, important caller with the smallest dependency set
   needed for a linked unit.
3. **Prove integration incrementally.** A local smoke test built the three
   existing random-state functions separately with GHS speed. It linked them
   with `ld.lld` in ELF32 PowerPC mode and checked the original addresses,
   sizes and hashes of all 196 selected bytes. The 100-byte gap before the
   second function was outside the test. A second test linked the direct
   `R_PPC_REL24` call from `fn_02bc490c` to `fn_02bc4900`. Both adjacent
   spans matched all 52 bytes. Both tests linked only the rebuilt inputs.
   A third test resolved the HA/LO data relocation in `fn_02a13ed4` to a
   synthetic four-byte NOBITS object and matched its 12 code bytes.
   Next use an evidence-backed data definition and verify its placement,
   initialization or BSS provenance, and final bindings. Report Cafe RPX
   packaging and runtime when each is exercised.
   [Random state](random-state.md) · [Global scalar loads](global-scalar-loads.md)

The manifest has no classified subsystem assignments and its binding graph
is sparse. Build the first component map from the pinned image and verified
reference rows. Expand the queue when that map exposes a shared dependency
or missing verifier capability.
[Collaborative decompilation cases](collaborative-decomp-cases.md)

## Make review proportional to risk

| Change | Programmatic acceptance | Technical review |
| --- | --- | --- |
| Source using a pinned interface | Trusted build, exact function bytes or hash, complete compilation-set match, strict AST audit, permitted paths | Readability, provenance and source behavior outside what the gates establish |
| New or changed contract or layout | Cross-TU agreement, pinned types or layout assertions, explicit size/alignment/offset checks, rebuild of consumers | Independent evidence for calling convention, observed arguments/returns, aliases, record identity and layout |
| New reference, relocation, or verifier | Pinned input hash, span/overlap/relocation checks, independent extraction or synthetic fixtures, full trusted regression and candidate CI at the exact head | Changed expectations and the evidence supporting the reference |
| Linked component | Final sections, symbols, dependency closure, code/data hashes, explicit fallback ranges | Indirect calls and external lifecycle assumptions. Exercise runtime boundaries separately |

Surface the exact changed function IDs from the PR diff, check them against the
declared scope, and make unpinned interfaces and unchecked edges explicit in
the review summary. Keep cross-TU record identity and layout checks distinct.
A pointer type can match while the pointee layout differs. Require reviewed
layout evidence before many consumers depend on the same type.

The normal source gate intentionally rejects maintenance diffs. Give trusted
maintainers a separate branch-scoped verification result tied to the exact PR
head. Keep the source gate base-owned. On the audited `master`, both status
checks are required for regular merges. Admin enforcement is off and required
approval count is zero. Record the independent maintenance check and reviewed
SHA on the PR before any administrative merge. A passing metadata check
establishes table shape.

CI currently builds the full source set serially, and 414 implemented rows
can try up to six profiles. Stream results and measure the build as the
inventory grows. If it approaches the job limit, shard compilation with a
required aggregate that checks every selected ID, and cache only trusted
AST baselines keyed by the exact base and parser inputs.

## Model pilot

Two GPT-6.2 Sol agents independently received the same four synthetic PPC
targets, with the current checker, pinned GHS profiles and at most four check
invocations per case. The fixtures cover an 8-byte accessor, 408-byte
unrolled loop, 104-byte external-call wrapper and 56-byte indexed record read.
Both agents matched three on the first check and all four after six check
invocations each. For each agent, the strict audit rejected three of the four
byte-identical sources against the held-out source pins. Both agents then got
all four through both gates using the preserved pins. Low used five strict
checks, including one failed edit. Medium used four.

Use Sol low for prepared tasks and medium for a bounded retry with new
evidence. Escalate ABI, layout, or compiler work according to the missing
evidence, with small experiments before increasing effort. This sample uses
synthetic functions and successive rounds, and measures checker invocations.
Real-game closure work, billed tokens and maintainer review time remain
unmeasured. The earlier Luna pilot also used prepared tasks. A real queue
benchmark should compare blind attempts on the same tasks and record accepted
bytes, check invocations, elapsed time, rework, measured cost when available,
and linked units.
[Earlier model pilot](model-pilot.md)
