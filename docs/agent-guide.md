# Agent contribution guide

Follow the user's actual scope, permissions and budget. A usual request to
contribute covers one focused reconstruction and its pull request. With no
explicit budget, make one function attempt. The contributor supplies a
GitHub account and their own Wii U v208 RPX. Handle setup and technical work
without requiring them to know decompilation or PowerPC.

## Prepare

1. Read [contribution policy](contributing.md), [toolchain](toolchain.md),
   [verification](verification.md) and [naming](naming.md). Preserve any existing
   changes; use a separate checkout when necessary.
2. Use only a game path the user has volunteered. If none is available, ask once
   for the path to their `U-King.rpx`. Do not search their disks for game files.
3. Run the readiness check and follow its reported actions:

   ```sh
   python3 tools/preflight.py --rpx /path/to/U-King.rpx
   python3 tools/toolchain.py
   python3 tools/decomp.py setup --rpx /path/to/U-King.rpx
   python3 tools/decomp.py doctor
   python3 tools/preflight.py --rpx /path/to/U-King.rpx
   ```

   Preflight reads local readiness and GitHub authentication; it does not install
   tools. `toolchain.py` downloads hash-pinned GHS and wibo into ignored `.local/`.
   Follow platform prerequisites in the toolchain guide. Supply
   `--compiler /path/to/clang++` to setup when needed. A missing tool is a setup
   problem to resolve or report, not a reason to skip verification.
4. Authenticate `gh` as the contributor. Fork `Producdevity/botw-wiiu-decomp` if
   needed, configure remotes, and create a descriptive branch in their fork.
   Use their configured Git author. Do not invent an author or add AI attribution.

## Claim and investigate

Check the selected ID in [known attempts](known-attempts.md) and the
[candidate index](../candidates/README.md) before repeating a failed approach.
Use a new evidence-backed hypothesis or choose another task.

```sh
python3 tools/community.py summary
python3 tools/community.py list
python3 tools/community.py list --category calls --max-size 128
python3 tools/community.py claim FUNCTION --wait 120
python3 tools/community.py status ISSUE --wait 120
python3 tools/decomp.py packet FUNCTION
```

Use real function IDs and issue numbers. Inspect linked open pull requests
before duplicating work; submission reports are advisory, and a follow-up may
still need a new claim. The default list prefers tasks without open PRs. Claim
without a function selects an available task. Do not start until `accepted: true`; a pending issue does not
reserve work. Each account can hold eight six-hour reservations. There is no
experience gate. Queue commands return JSON and use GitHub through `gh`.

Load only the selected packet under `.local/packets/FUNCTION/`, relevant shared
headers, and caller/callee sources. Inspect `context.json`, original register
flow and uses at call sites before choosing parameters or return types. Trace
r3–r10, floating-point argument registers, hidden aggregate-return pointers and
how callers consume results. A callee that leaves r3 unused does not establish a
`void` signature; an omitted argument can still produce matching bytes. Explicitly
forward every observed argument and propagated return. Track stack objects passed
by address, including descriptor or table fields; those fields are not additional
register arguments.

For indexed records, derive the complete stride, including trailing storage,
and assert `sizeof` against that stride before trying compiler profiles. Trace
each branch condition and distinguish register operands from immediate values.

Use established shared declarations under `include/botw/`. Keep unknown layouts
behind opaque pointer boundaries with internal layout casts. Do not export
translation-unit-local record types. Recheck callers and callees after a shared
contract change. References with `compile_with` load the listed supporting source
files automatically. Each emitted helper must match its own trusted reference;
keep supporting implementations intact unless the task requires a reviewed change.
See [supporting compilation](supporting-compilation.md). The [static contract audit](contract-audit.md) compares known
source declarations; it cannot recover the original signature or validate an
inferred layout.

Packet previews marked `UNVERIFIED_BOUNDARY` are at most 256 bytes and may cross
function boundaries. `UNVERIFIED_CALLER_WINDOW` is callsite context, not a function
boundary. Direct caller previews are capped at eight; indirect and relocated
calls are excluded. Relocation annotations preserve original bytes. These are
private investigation aids, not acceptance proof. Supported branches name the CR bit
and its required state; shift notes distinguish register counts from immediates.
Regenerate an old packet with `python3 tools/decomp.py packet FUNCTION` to get
these annotations.

## Reconstruct and verify

Check `candidates/FUNCTION.cpp` for a starting point. Write readable C++ under
`reconstructions/` using the manifest's source and symbol conventions. GHS 5.3.22
requires `0` rather than `nullptr`. Use [register diagnostics](register-diagnostics.md)
when useful; they do not replace exact comparison. Keep stable function IDs and
follow [naming evidence](naming.md).

```sh
python3 tools/decomp.py check FUNCTION
python3 tools/decomp.py check --all --summary
python3 tools/contract_audit.py --strict --summary
PYTHONPATH=src python3 -m unittest discover -s tests
```

The full compilation report is retained in `.local/last-check.json`; `--summary` keeps terminal output concise.

A compile error, unsupported relocation or unresolved symbol is a failed check.
Never modify expected hashes, boundaries, bindings or verification tools to make
a source submission pass. Resolve declaration conflicts, then repeat affected
checks. Inspect the diff for private inputs and generated output.

Use inexpensive coding agents for bounded functions with established contracts.
Escalate difficult ABI or layout inference selectively, based on evidence and the
remaining budget. No model is required or whitelisted. Stop when further work
would exceed the user's budget.

## Submit and finish

Commit verified work with the configured Git author, push to the contributor's
fork and open a focused PR against `master`. Use the PR template: record function
IDs, claim, exact commands/results, and contract/naming evidence. List all models
and roles used, including implementation and review, with their actual reasoning
or effort settings. Write "not exposed" when unavailable; do not guess. Identify
human-only work. Check the PR's
CI and fix failures within the remaining budget. Report the PR URL and any
unfinished checks; do not declare acceptance yourself.

Routine work preserves established contracts and passes exact verification.
New or changed signatures, layouts or semantic identities require maintainer
technical review with caller/callee evidence, even when bytes match. Propose
names in the PR description or ordinary documentation; promotion into
`config/symbols.json` requires a separate maintainer-reviewed maintenance PR.
Checker, reference, test and workflow changes also belong in a separate
maintenance PR. Public
CI uses the base branch's trusted checker and reference hashes.

Keep the claim while actively working through PR submission and CI. Release it
with `python3 tools/community.py release ISSUE` when finished or stopped; claims
still expire after six hours. List IDs under the PR template's exact `## Functions`
heading, one per line, so later contributors can find the open submission. Preserve useful partial source in a draft PR, explicitly
marking failed or unrun checks. Remove only temporary build/log files created by
this attempt; preserve user inputs, pre-existing work and useful private evidence.

## Report shared blockers

Search existing issues first. Use the shared-blocker template for a missing
contract, layout, binding or checker capability. List affected function IDs under
`Functions`, group the common cause, and explain the evidence needed without
publishing disassembly. Blocker labels help task selection; they are advisory,
not acceptance decisions. Use the setup template for toolchain/authentication
failures and include redacted diagnostics. Do not repeat the same blocked attempt
across many functions or submit unsolicited bulk PRs.
