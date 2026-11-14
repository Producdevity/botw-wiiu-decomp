# Contribute

Point your coding agent at this repository and ask it to contribute. It reads
[AGENTS.md](../AGENTS.md), handles setup, claims one task, reconstructs readable
C++, runs checks and submits a pull request within your budget. You supply your
own supported Wii U v208 RPX path and GitHub account; you do not need to learn
PowerPC or configure the reconstruction workflow yourself. GitHub may ask you to
sign in. Game files and compiler downloads stay local.

For example:

> Contribute one function to https://github.com/Producdevity/botw-wiiu-decomp.
> My RPX is at /path/to/U-King.rpx. Work within my budget and submit a pull request.

[Agent workflow](agent-guide.md) · [Toolchain](toolchain.md) ·
[Verification](verification.md) · [Naming](naming.md)

## Acceptance

Every reconstruction must compile to the original function bytes, with supported
bindings and no unresolved references. Local exact checks, the strict contract
audit and tests must pass. Independent CI rebuilds all implementations using the
base branch's trusted checker and references. Claims reserve work; they do not
certify correctness.

Preserving established contracts is routine contribution work. New or changed
signatures, shared layouts and semantic names require maintainer technical review
of caller/callee and naming evidence. Matching bytes can conceal missing
arguments or wrong return types, and the contract audit checks consistency only
among available source declarations. It does not recover the original ABI.

Contributions use [GPL-3.0-only](../LICENSE). Submitting a contribution makes it
available under those terms. Keep one function or tightly related component per
PR. Include exact commands
and results, the claim issue, and evidence for inferred contracts and names.
List the models and roles used for implementation and review, with actual
reasoning/effort settings. Use "not exposed" when unavailable; identify human-only
work.
Propose names in the PR description or ordinary documentation. Promotion into
`config/symbols.json` requires a separate maintainer-reviewed maintenance PR, as
do checker, reference metadata, test and workflow changes. Never change expected bytes or weaken checks to obtain a match.

Use readable C++; no inline assembly or emitted machine bytes. Keep RPX files,
original bytes, disassembly, compiler binaries, object files, assets and saves
out of commits, issues and pull requests. Cite research and respect source
licenses; see [provenance](provenance.md).

## Tasks and blockers

The [agent workflow](agent-guide.md) documents the JSON queue CLI. Each account
can hold eight six-hour claims, with no experience gate. Wait for acceptance
before working. Keep the claim through submission and CI while actively working,
and release it when finished or stopped. Inspect linked open PRs before
duplicating work; open submissions are advisory, not permanent reservations. Expired claims
return to the queue even before scheduled cleanup runs.

Search existing issues before reporting a shared blocker or setup failure. Group
functions affected by the same missing contract or tool capability. Publish
function IDs and redacted diagnostics, never private packet contents.

## Choosing an agent

There is no model whitelist. Start with an inexpensive coding agent on a bounded
task with established contracts. Use more reasoning selectively for difficult
signature, layout or compiler inference. Judge tools by verified results within
your budget. In our [prepared-function pilot](model-pilot.md), Luna at xhigh matched all four tasks.
