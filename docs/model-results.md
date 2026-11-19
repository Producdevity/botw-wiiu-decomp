# Model results

## Summary

Measured on 2026-11-19 with the live pipeline: real queue tasks, the checker CI
uses, PRs that merge themselves.

| Work | Model and effort | Result | Cost |
| --- | --- | --- | --- |
| 1 prepared task, 32 bytes | Sonnet 5.5, medium | Matched in 3 checks; auto-merged 11 minutes after opening | 6 min, 4.9k output tokens |
| 7 small tasks in one PR, 24–40 bytes | Sonnet 5.5, medium | 3/3 prepared (1–4 checks), 3/4 unprepared (2–4 checks) | 32 min, 40k output tokens |
| 5 blocker issues that earlier agents failed | Opus 5.5, high | 2 solved, 2 near misses, 1 not attempted | 38 min, 111k output tokens |

Recommendations:

- **Small and prepared tasks:** a mid-tier model at medium effort is enough.
  Sonnet inferred three of four interfaces without a pin. Cheaper models should
  start here; record their results in this file.
- **Blockers and compiler behavior:** use a frontier model at high effort. Both
  solved blockers were not source problems: they needed the GHS `-g` flag, now
  the `ghs-5.3.22-speed-debug` profile. Finding that took comparing scheduler
  output and testing build flags against accepted code, 15–50 compiles per
  function.
- **Near misses:** run `tools/permute.py` before spending more model attempts.
  It matched three register-allocation and ordering near misses in a minute or
  less each, with no model tokens.

## Tooling results

- **m2c drafts** (`tools/draft.py install`, then every packet has `draft.cpp`):
  on 30 matched functions of 16–256 bytes, 26 got a draft, 20 compiled and 5
  matched with no edits, all 52 bytes or smaller. Functions using paired-single
  instructions get no draft.
- **Permuter**: 3 of 3 deliberately perturbed near misses matched in 0.3–1.0
  minutes. It did not fix issue 200, which needed `-g`, not a source change.

## Live trial details

The single-task trial ran from a fresh worktree with only the game path and no
human input after it. The batch trial's misses and guesses: one unprepared
function differed in a single load register after 3 checks and was not
submitted; several matches depended on local-variable order steering register
allocation, so they are matching sources, not proven originals. Both trials
reported friction (setup flags, diff discovery, summary size, claim release by
issue number, audit runtime), all fixed since.

## Synthetic pilot

On 2026-11-17, GPT-6.2 Sol at low and medium independently matched four
synthetic PowerPC targets using the pinned GHS 5.3.22 profiles. Each matched
three on its first attempt and all four in six checks. The targets were an
8-byte accessor, 56-byte record lookup, 104-byte call wrapper and 408-byte
unrolled loop. The strict AST audit rejected three byte-identical interfaces
per agent against the held-out pins. Both passed after seeing the pins. Low
used five strict checks and medium used four.

Use low for prepared work. Consider medium for a bounded retry when there
is new evidence. The pilot measured checker invocations on synthetic
functions. Real-game throughput and token cost require separate measurements.

## Prepared pilot

On 2026-11-13, GPT-6 Luna at `xhigh` matched all four prepared functions in eight distinct source variants. The maintainer independently rebuilt every final source against the pinned RPX using the canonical verifier.

| Function | Original bytes | Source variants | Result |
| --- | ---: | ---: | --- |
| `fn_0241c698` — aggregate copy | 32 | 1 | Exact match |
| `fn_0294c4ac` — nullable pointer lookup | 40 | 2 | Exact match |
| `fn_02b059e8` — call and optional field lookup | 52 | 4 | Exact match |
| `fn_03f788f4` — linked sum | 40 | 1 | Exact match |

The agent received disassembly, established prototypes, type/overflow constraints and the fixed-profile checker in a separate directory. Existing implementations were not provided; solution lookups were forbidden. It had at most 16 checker invocations total and six per task. One invocation could try multiple existing compiler profiles. A rejected `nullptr` candidate was corrected to the null pointer constant `0` supported by GHS 5.3.22.

This is evidence that Luna can contribute to small, prepared tasks. It is not a random sample of the open queue, a test of independent ABI recovery, or a model ranking. Max reasoning, GLM-5.3-Flash and DeepSeek-V4.1-Flash were not tested. Token cost and review time were not measured. These already reconstructed functions add no coverage.

For broader comparisons, use the same unseen task packets, known contracts and attempt limits. Report exact matches, accepted code bytes, token cost and reviewer effort separately. A model's confidence is never an acceptance criterion.
