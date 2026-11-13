# Agent contribution guide

This project reconstructs Breath of the Wild for Wii U from a contributor's own v208 RPX. Work inside the contributor's stated time or token budget. Do not run indefinitely. If no budget is given, finish one function attempt and report the result.

## Set up

1. Read the repository README, [toolchain status](toolchain.md), [contribution rules](contributing.md) and current function manifest.
2. Use a fresh checkout or preserve the contributor's existing changes. Authenticate `gh` with the contributor's GitHub account. Fork `Producdevity/botw-wiiu-decomp` if that account cannot push to it. Create a responsibility-based branch in the fork.
3. Locate the contributor-supplied RPX. Do not download or upload game files. Run:

   ```sh
   python3 tools/toolchain.py
   python3 tools/decomp.py setup --rpx /path/to/U-King.rpx --compiler /path/to/clang++
   python3 tools/decomp.py doctor
   ```

   Follow the documented compiler setup. Do not replace a required toolchain with an arbitrary compiler or claim a build was verified without running the check.

## Work loop

1. Run `python3 tools/community.py list`, then `python3 tools/community.py claim FUNCTION`. Wait for `accepted: true` from `python3 tools/community.py status ISSUE`.
2. Run `python3 tools/decomp.py packet FUNCTION`. Read the private `context.json`, existing caller/callee reconstruction sources, shared headers and callee disassembly previews under `.local/packets/FUNCTION/`. Inspect the caller/callee contract before assuming a void or pointer return, choosing parameters or trying compiler flags: a small wrapper can forward an aggregate return or preserve arguments that are only apparent in its callee. Forward every observed callee argument and propagated return explicitly, even when the pinned compiler happens to leave the corresponding registers untouched. Match declarations to published definitions; use a shared declaration or an opaque entry point with an internal layout cast when the owning class is still unknown. Names and types remain inferred. Consolidate recovered shared contracts under `include/botw/` and recheck both caller and callee.

   Callee previews use verified manifest spans or `UNVERIFIED_BOUNDARY` windows of at most 256 bytes. The latter can include adjacent code or stop inside a function. `direct_callers` reports all matching raw direct callsites and previews at most eight, with 64 bytes before and 32 after each call. `UNVERIFIED_CALLER_WINDOW` does not establish a function boundary. Indirect calls and relocated call instructions are excluded.

   Both preview types keep bytes unchanged and annotate original relocations without applying or masking them. They are investigation context, not acceptance proof. Keep all packets private.
3. Check `candidates/FUNCTION.cpp` for an existing unaccepted starting point. [Register diagnostics](register-diagnostics.md) can distinguish some allocation differences, but never replace the exact-byte check. Reconstruct the function as readable C++. Follow the manifest's source and symbol conventions. Do not change the expected hash, address, size or checker to make a submission pass.
4. Run `python3 tools/decomp.py check FUNCTION`. Fix mismatches within the user's budget. A compilation error, unsupported relocation or unresolved symbol is a failed check, not a partial match.
5. Before submission, run `python3 tools/decomp.py check --all` and the repository tests. Inspect the staged diff for generated or proprietary files.
6. Commit with the contributor's configured Git author. Push to their fork and open a focused PR against `master`. Provide function IDs, compiler version, check results and naming evidence. Link the claim issue; do not mark source accepted yourself.
7. Release the claim when finished or stopped. If blocked, preserve useful source in a draft PR and describe the missing type, toolchain behaviour or reference mapping without publishing disassembly.

Claims expire after six hours and have no difficulty tiers. `community.py` returns JSON for automation. Its commands are `list`, `claim`, `status` and `release`; it talks to GitHub over HTTP through `gh`. A separate MCP service is unnecessary for agents that can execute these commands.

Public CI compiles the submitted sources with the base branch's checker and reference hashes. It checks every existing reconstruction, including those affected by shared headers. Normal contribution PRs may change listed reconstruction sources, `include/botw/*.h` and Markdown documentation. Reference metadata, checker, tests and workflow changes require a separate maintainer-reviewed change. Once verified source lands, the queue marks its task complete without editing the reference manifest.

## Shared blockers

Search existing issues before opening a blocker. Group functions blocked by the same field, class or binding into one issue. Record affected function IDs, the evidence needed and a suggested declaration change. Changes to shared definitions must recheck every dependent function. Prefer fixing a high-impact shared dependency over repeating the same failed attempt on many functions.

## Stop conditions

Stop on the user's budget, a missing required compiler or a checker limitation. Release unfinished claims and state exactly what remains. Do not silently skip checks, weaken reference matching, upload game-derived artifacts or send unsolicited bulk pull requests.
