# Contributing with an agent

Start with [the agent guide](docs/agent-guide.md). Follow the user's actual scope,
permissions and budget. A usual contribution request covers one focused function
and its pull request; do not infer broader permission from this guide. Preserve
existing work and use the contributor's configured Git author and GitHub account.

- Run `python3 tools/preflight.py` and follow its setup actions. Use only the game
  path the user volunteers; ask once if the required RPX path is missing.
- Claim a task and wait for acceptance before reconstructing it. Keep RPX files,
  packets, disassembly, compiler binaries and build output private.
- Write readable C++, preserve established caller/callee contracts, and run exact
  checks, the strict contract audit and tests before submission.
- New signatures, layouts and semantic names need evidence. Matching bytes alone
  do not recover them. Follow [naming](docs/naming.md) and
  [verification](docs/verification.md).
- Contributions use GPL-3.0-only. Each PR must list the models, roles and actual
  reasoning/effort settings used for implementation and review. Write "not exposed"
  for unavailable settings; identify human-only work.
- Keep checker/reference/workflow and symbol-catalog changes in a separate maintenance PR. Never
  weaken a check or change expected bytes to accept a reconstruction.

[Contribution policy](docs/contributing.md) · [Toolchain](docs/toolchain.md) ·
[Contract audit](docs/contract-audit.md)
