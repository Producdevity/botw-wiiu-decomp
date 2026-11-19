# Breath of the Wild — Wii U reconstruction

[![Verification](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml/badge.svg?branch=master&event=push)](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml?query=branch%3Amaster)
[![Exact .text match](https://raw.githubusercontent.com/Producdevity/botw-wiiu-decomp/progress/exact-text.svg)](https://github.com/Producdevity/botw-wiiu-decomp/blob/progress/progress.json)

Community C++ reconstruction of the **USA Wii U v208** executable, checked byte for byte against the original PowerPC code.

The coverage badge measures exact function bytes against the full `.text` section of the pinned executable. `python3 tools/community.py summary` reports reference, source and claim counts. [Coverage method](docs/verification.md#coverage).

Matching uses fixed GHS 5.3.22 profiles and Clang for simple leaves. Source contracts are inferred from caller/callee evidence; the exact historical compiler version remains unconfirmed. [Verification contract](docs/verification.md).

## Supported game files

The supported target is **USA Wii U v208** (`wiiu-usa-v208`). Setup accepts your own:

- Decrypted game dump folder containing the v208 executable. A folder with both
  the Dumpling base and update dumps also works.
- `.wua` archive containing the v208 executable.
- Raw v208 `U-King.rpx` from the game's `code/` folder.

Setup selects the executable by its pinned SHA-256. DLC is optional. Use
decrypted inputs for setup. Follow the [Wii U Hacks Guide](https://wiiu.hacks.guide/) and
[Dumpling game and update dumping guide](https://wiki.hacks.guide/wiki/Wii_U:Dump_Games)
to make your own dump.

## Contribute with your agent

Point your coding agent at this repository and ask it to contribute:

> Read AGENTS.md and contribute one verified function within my budget. Ask for my game dump path if needed; handle setup and submit a pull request.

The agent handles setup, task reservations, reconstruction and checks. You supply your own game dump path and GitHub account. [Agent entry point](AGENTS.md) · [Contribution guide](CONTRIBUTING.md).

## Local commands

Install Python 3.11+, LLVM with PowerPC support, GitHub CLI, and a C++20 host compiler. WUA input also needs zstd development files: on macOS `brew install python llvm gh zstd`; on Ubuntu 24.04 `sudo apt install python3 clang-18 llvm-18 libclang1-18 gh libzstd-dev`. LLVM must be available on `PATH`. On macOS, zstd development headers and library are needed for WUA input.

```sh
git clone https://github.com/Producdevity/botw-wiiu-decomp.git
cd botw-wiiu-decomp
python3 tools/preflight.py --game /path/to/your/dump-or-game.wua
python3 tools/toolchain.py
python3 tools/decomp.py setup --game /path/to/your/dump-or-game.wua
python3 tools/decomp.py doctor
python3 tools/community.py summary
python3 tools/community.py list --prepared --max-size 128
python3 tools/community.py claim FUNCTION --prepared --wait 120
python3 tools/decomp.py packet FUNCTION
python3 tools/decomp.py check FUNCTION
```

Preflight reports setup actions without modifying files. Setup builds the WUA reader when needed and configures the hash-verified executable; `--rpx` remains an alias. [Detailed agent setup](docs/agent-guide.md).

The toolchain command downloads hash-pinned GHS and wibo releases from their upstream distribution into `.local/`; it supports macOS (Rosetta on Apple Silicon) and x86-64 Linux. Use `--compiler /path/to/clang++` during setup if necessary. `packet` creates private bytes, disassembly, caller/callee context and task metadata under ignored `.local/`. Submit readable C++ under `reconstructions/`; never submit the packet.

## Diffing

After setup, generate the original function packet, then compare your source.

```sh
python3 tools/decomp.py packet FUNCTION
python3 tools/decomp.py check FUNCTION --diff --summary
```

The packet contains the original disassembly. The check saves its full report
in `.local/last-check.json`. On a same-size mismatch after relocation, it reports
the first differing byte offset and saves a private instruction diff under
`.local/diffs/`. Use `--source candidates/FUNCTION.cpp` to inspect a retained
candidate. Size and relocation failures appear in the check report.
[Register diagnostics](docs/register-diagnostics.md).

## Published verification

Without game files, anyone can independently rebuild the published implementations:

```sh
python3 tools/decomp.py check --all --hash-only --summary
python3 tools/contract_audit.py --strict --summary
PYTHONPATH=src python3 -m unittest discover -s tests
```

Public CI rebuilds the submitted tree against trusted function hashes, addresses and bindings. Reference and checker changes go through maintainer verification. Claims use GitHub Issues with six-hour expiry.

- [Verification and coverage](docs/verification.md)
- [Reference selection and task notes](docs/reference-batches.md)
- [Known attempts and candidate sources](docs/known-attempts.md)
- [Development priorities](docs/roadmap.md)

Only original project tooling and reconstructed source belong here. No Nintendo game files, extracted machine code, proprietary SDK, compiler binaries or generated disassembly are distributed. This project is not affiliated with Nintendo.
