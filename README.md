# Breath of the Wild — Wii U reconstruction

[![Verification](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml/badge.svg?branch=master&event=push)](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml?query=branch%3Amaster)
[![Exact .text match](https://raw.githubusercontent.com/Producdevity/botw-wiiu-decomp/progress/exact-text.svg)](https://github.com/Producdevity/botw-wiiu-decomp/blob/progress/progress.json)

Community C++ reconstruction of the **USA Wii U v208** executable. Every
function is checked byte for byte against the original PowerPC code. The badge
shows exact function bytes as a share of the whole `.text` section.

Sources compile with fixed GHS 5.3.22 profiles, plus Clang for some simple
leaves. The original compiler version is unconfirmed.

## Contribute with your agent

Point your coding agent at this repository:

> Read AGENTS.md and contribute one verified function to
> https://github.com/Producdevity/botw-wiiu-decomp. Ask for my game dump path.
> Stay within my budget and open a pull request.

The agent sets up the toolchain, claims a task, reconstructs it, checks it and
opens a PR. CI verifies the PR. PRs that only add new matching functions merge
automatically. You supply your own game dump and GitHub account.
[Agent workflow](AGENTS.md) · [Contributing](CONTRIBUTING.md) ·
[Model results](docs/model-results.md)

## Supported game files

Target: **USA Wii U v208** (`wiiu-usa-v208`). Setup accepts any of these:

- a decrypted dump folder that contains the v208 executable, including a folder
  with both the Dumpling base and update dumps;
- a `.wua` archive;
- the raw v208 `U-King.rpx` from the game's `code/` folder.

Setup selects the executable by its pinned SHA-256. DLC is not needed. To make
your own dump, follow the [Wii U Hacks Guide](https://wiiu.hacks.guide/) and
[Dumpling guide](https://wiki.hacks.guide/wiki/Wii_U:Dump_Games).

## Local commands

Requires Python 3.11+, LLVM with PowerPC support, GitHub CLI and a C++20 host
compiler. `.wua` input also needs zstd headers.

- macOS: `brew install python llvm gh zstd`. GHS runs through Rosetta on Apple
  Silicon.
- Ubuntu 24.04: `sudo apt install python3 clang-18 llvm-18 libclang1-18 lld-18 gh libzstd-dev`

```sh
python3 tools/preflight.py --game /path/to/dump-or-game.wua
python3 tools/toolchain.py
python3 tools/decomp.py setup --game /path/to/dump-or-game.wua
python3 tools/community.py list --prepared --max-size 128
python3 tools/decomp.py packet FUNCTION
python3 tools/decomp.py check FUNCTION --diff --summary
```

Without game files, anyone can rebuild every published function against the
trusted hashes:

```sh
python3 tools/decomp.py check --all --hash-only --summary
python3 tools/contract_audit.py --strict --summary
```

[Verification](docs/verification.md) · [Toolchain](docs/toolchain.md) ·
[Function notes](docs/function-notes.md) · [Naming](docs/naming.md) ·
[Maintainers](docs/maintainers.md)

Only original tooling and reconstructed source belong here. No Nintendo game
files, machine code, SDK, compiler binaries or disassembly are distributed. This
project is not affiliated with Nintendo. Licensed [GPL-3.0-only](LICENSE).
