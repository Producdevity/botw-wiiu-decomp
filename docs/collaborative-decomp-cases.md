# Collaborative matching decompilation case studies

Keep function-sized contributions, group the queue by dependencies, and pilot one
small, closed group of code and data before opening a broad batch. Publish the
exact-match count against the verified inventory and measure progress toward a
linked build separately. Evidence reviewed on 2026-11-17.

## What the projects demonstrated

- **Maurice Heumann's MW2 experiment.** The first month produced a booting game
  that loaded maps, alongside wrong signatures, invented behavior and incorrect
  layouts. The team switched to the original compiler and a deterministic
  comparison of bytes and relocation targets. It tracked translation units in
  GitHub issues, protected the verifier from worker edits and eventually used
  separate PRs. Heumann reported that 99% of functions were represented and 83%
  of all functions matched by his verifier after about three months. He also
  reported working gameplay, with some nonmatching functions still judged by
  reasoning. Sixteen agents were typical in the final weeks and the token
  estimate was 600–700 billion. The code stayed private, so these are author
  reports with no public reproduction path. The more transferable result is the
  failed first pass and the subsequent change to testable acceptance criteria.
  [Heumann's retrospective](https://momo5502.com/posts/2026-10-09-game-decompilation/)
- **decomp.dev and decomp.wtf.** Luke Street described useful AI matching under
  human guidance and review, alongside costly cleanup, technically matching
  but poor source, forks with little upstream contribution, and rushed ports.
  He closed the public index and new submissions while retaining existing
  project reports. This is a maintainer account of incentive and moderation
  problems, with no comparative productivity dataset. Separately, maintainer i12bp8
  archived an open-source tool that offered one-function tasks and byte checks.
  He cited community objections, so the archive establishes a maintenance and
  adoption outcome.
  [Street's announcement](https://decomp.dev/) ·
  [Copy consulted for this assessment](https://postmortem.io/shutdowns/decomp-dev--2026-10-14--sunsetting-decomp-dev/) ·
  [decomp.wtf maintainer's announcement](https://github.com/i12bp8/decomp.wtf#this-project-is-discontinued)
- **ZeldaRET's The Wind Waker and Spirit Tracks.** Wind Waker contributors choose
  a translation unit, establish actor size, class layout and base class, match
  code and data with objdiff, then mark the unit eligible for linking and rebuild.
  Its guide calls out a case where the function appears matched while its jump
  table still differs in data. Spirit Tracks reserves actors through a shared
  sheet, uses issues for other files, and permits work on independent functions
  within a file in any order. Both document a coordination unit larger than a
  function, while preserving individual functions as useful work items.
  [Wind Waker workflow](https://github.com/zeldaret/tww/blob/main/docs/decompiling.md) ·
  [Spirit Tracks workflow](https://github.com/zeldaret/st/blob/main/docs/decompiling.md)
- **Melee and the GameCube/Wii tools.** decomp-toolkit can split the original
  executable into relocatable objects. objdiff compares functions and data in
  the target and rebuilt objects. This supports an incremental build that swaps
  in reconstructed units as they qualify. Melee (US 1.02) publishes its
  source, build recipe and expected DOL SHA-1. A reader with the original input
  can check its executable claim without trusting a dashboard percentage. The
  hash covers the DOL. Platform compatibility and playability of a native port
  require their own evidence. The tools illustrate the pattern for Wii U.
  Applying it to an RPX requires Wii U-specific format and relocation support.
  [decomp-toolkit](https://github.com/encounter/decomp-toolkit) ·
  [objdiff](https://github.com/encounter/objdiff#usage) ·
  [Melee build and hash](https://github.com/doldecomp/melee#super-smash-bros-melee)
- **ZeldaRET's Breath of the Wild.** The Switch v1.5.0 project prioritizes
  understanding unknown subsystems over trivial functions because review time is
  limited. It asks for evidence behind names, small component PRs, AI model
  disclosure and human review before publication. Its progress interface
  distinguishes function count and code size. The Switch target and addresses
  differ from Wii U v208, so use its research as leads and verify Wii U
  signatures, layouts and identities against Wii U evidence.
  [Project scope](https://github.com/zeldaret/botw) ·
  [Contributor rules](https://github.com/zeldaret/botw/blob/master/AGENTS.md) ·
  [Progress definitions](https://botw.link/progress)

## What to measure on Wii U

1. **Verified source coverage.** Report unique matched functions and bytes,
   each against the corresponding verified inventory denominator and revision.
   Record new verified spans separately from new reconstructions. The exact
   comparator and contract audit already provide acceptance checks for the
   current inventory. Keep review of inferred names, layout and signatures.
   [Verification contract](verification.md)
2. **Integration.** For the first group, choose functions with established
   callers, signatures and layouts, then inventory shared globals, constants,
   tables and relocations. Track which shared blockers have been resolved and
   which units have verified code and data. Count a linked unit only once a
   build substitutes its compiled object for the original and verifies the
   linked output against the pinned original. Report any original-code fallback
   and verify any eventual full executable claim against a stated target.
   [Supporting compilation](supporting-compilation.md) ·
   [Wind Waker link check](https://github.com/zeldaret/tww/blob/main/docs/decompiling.md#linking-a-100-matching-object)
3. **Cost and runtime.** For an AI pilot, compare merged exact matches on
   similarly scoped tasks per maintainer review hour, plus failed attempts and
   rework. Include hard tasks with shared prerequisites to check for diminishing
   returns. If a rebuilt artifact is run, record the boot target and exercised
   behavior explicitly. A menu or map load supports only those paths. Report
   native port behavior against its own test results.
   [Heumann's first-pass outcome](https://momo5502.com/posts/2026-10-09-game-decompilation/#however)
