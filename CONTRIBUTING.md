# Contributing

Point a coding agent at this repository:

> Read AGENTS.md and contribute one verified function to
> https://github.com/Producdevity/botw-wiiu-decomp. Ask for my game dump path.
> Stay within my budget and open a pull request.

You supply your own game dump and a GitHub account. The agent handles setup,
claims, reconstruction, checks and the PR. Game files and compiler downloads stay
on your machine. The [agent workflow](AGENTS.md) has the details.

## Acceptance

A reconstruction is accepted when:

1. It compiles to the original function's bytes under a pinned compiler profile.
   CI compares the length and SHA-256 against the trusted reference.
2. The strict declaration audit finds no conflict with published callers, callees
   and pinned interfaces.
3. The PR description lists the functions and the models used.

PRs that only add new files under `reconstructions/` merge automatically after
these checks pass and a re-check against current master succeeds. Everything else
needs maintainer review. That includes edits to existing sources, shared headers,
names in `config/symbols.json`, references, tools and workflows.
[Verification](docs/verification.md) describes each check.

Exact bytes do not prove the original types or names. The first matching source
sets a function's interface. Changing it later needs caller/callee evidence and
review.

## Disclosure

List every model and role used for implementation and review, with the actual
reasoning or effort setting. Write `not exposed` when the setting is unknown and
`human` for human-only work. The `pr-metadata` check enforces this.
[Model results](docs/model-results.md) records what has worked so far.

## License and provenance

Contributions are licensed [GPL-3.0-only](LICENSE). Write sources from the
original instructions. Do not copy code from other decompilations or SDKs. Other
projects may inform names and layouts as research leads; cite them in the PR.
Never commit RPX files, original bytes, disassembly, compiler binaries, object
files, assets or saves.

## Blockers and setup problems

Search existing issues first. The blocker template groups functions that need the
same missing evidence or checker capability. Functions with an open blocker move
to the end of the task list. The setup template covers toolchain and
authentication failures. Include redacted diagnostics, never packet contents.
