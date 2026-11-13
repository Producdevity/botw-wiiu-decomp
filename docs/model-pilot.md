# Contribution model pilot

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
