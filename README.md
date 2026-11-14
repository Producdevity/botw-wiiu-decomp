# Breath of the Wild — Wii U reconstruction

[![Verification](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml/badge.svg)](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml)

Community C++ reconstruction of **Wii U v208**, with deterministic matching against the original PowerPC code. The intended consumer is a native Linux ARM port targeting **H700, 1 GB RAM, GLES 3.2 and no swap**.

**Verified code coverage: 22,656 of 36,994,060 bytes in the pinned `.text` section (0.0612%), across 1,249 functions.**

**536 tasks are available** across integer, floating-point, control-flow, loops and calls. [Reference batches and selection evidence](docs/reference-batches.md) · [Named random-state component](docs/random-state.md).

Matching uses fixed GHS 5.3.22 profiles and Clang for eight bootstrap leaves. Source contracts are inferred from caller/callee evidence; the exact historical compiler version remains unconfirmed. [Verification contract](docs/verification.md).

## Contribute with your agent

Point your coding agent at this repository and ask it to contribute:

> Read AGENTS.md, handle setup and submit one verified function as a pull request. Ask me for my Wii U v208 RPX path if needed, and work within the budget I give you.

The agent handles setup, task reservations, reconstruction and checks. You supply your own RPX and GitHub account. [Agent entry point](AGENTS.md) · [Contribution guide](CONTRIBUTING.md).

## Local commands

Install Python 3.11+, LLVM with PowerPC support, and GitHub CLI. On macOS: `brew install python llvm gh`. On Ubuntu 24.04: `sudo apt install python3 clang-18 llvm-18 libclang1-18 gh`.

```sh
git clone https://github.com/Producdevity/botw-wiiu-decomp.git
cd botw-wiiu-decomp
python3 tools/preflight.py --rpx /path/to/U-King.rpx
python3 tools/toolchain.py
python3 tools/decomp.py setup --rpx /path/to/U-King.rpx
python3 tools/decomp.py doctor
python3 tools/community.py summary
python3 tools/community.py list
python3 tools/community.py claim --wait 120
python3 tools/decomp.py packet FUNCTION
python3 tools/decomp.py check FUNCTION
```

The toolchain command downloads hash-pinned GHS and wibo releases from their upstream distribution into `.local/`; it supports macOS (Rosetta on Apple Silicon) and x86-64 Linux. Use `--compiler /path/to/clang++` during setup if necessary. `packet` creates private bytes, disassembly, caller/callee context and task metadata under ignored `.local/`. Submit readable C++ under `reconstructions/`; never submit the packet.

Without game files, anyone can independently rebuild the published implementations:

```sh
python3 tools/decomp.py check --all --hash-only --summary
python3 tools/contract_audit.py --strict --summary
PYTHONPATH=src python3 -m unittest discover -s tests
```

Public CI compares against fixed function hashes, addresses and reference bindings. A source PR cannot change those references or the checker and still pass the source acceptance job. All existing implementations are rebuilt when shared headers change. Claims use GitHub Issues with six-hour expiry. The queue also links shared blockers and open PRs, and prioritises tasks without a pending submission.

- [Verification contract and current coverage](docs/verification.md)
- [Reference batches and selection evidence](docs/reference-batches.md)
- [Opt-in function discovery](docs/inventory.md)
- [Supporting-function compilation](docs/supporting-compilation.md)
- [Cross-file C++ declaration checks](docs/contract-audit.md)
- [Compiler evidence and prior projects](docs/toolchain.md)
- [Unaccepted candidates and register diagnostics](docs/register-diagnostics.md)
- [Known unmatched attempts and missing evidence](docs/known-attempts.md)
- [Naming evidence and stable function IDs](docs/naming.md)
- [Development priorities](docs/roadmap.md)

Only original project tooling and reconstructed source belong here. No Nintendo game files, extracted machine code, proprietary SDK, compiler binaries or generated disassembly are distributed. This project is not affiliated with Nintendo.
