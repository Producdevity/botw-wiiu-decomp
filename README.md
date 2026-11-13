# Breath of the Wild — Wii U reconstruction

[![Verification](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml/badge.svg)](https://github.com/Producdevity/botw-wiiu-decomp/actions/workflows/checks.yml)

Community C++ reconstruction of **Wii U v208**, with deterministic matching against the original PowerPC code. The intended consumer is a native Linux ARM port targeting **H700, 1 GB RAM, GLES 3.2 and no swap**.

**Verified code coverage: 9,236 of 36,994,060 bytes in the pinned `.text` section (0.0250%), across 628 functions.**

The initial batch is complete: **100 verified implementations (1,956 bytes)**. The next batch has **100 tasks, 68–184 bytes each (12,288 bytes): 25 implementations verified and 75 available**, spanning integer, floating-point, control-flow, calls and loops. These are selected reference batches, not whole-game completion percentages or a playable decompilation. GHS 5.3.22 reproduces 92 initial implementations; Clang reproduces eight leaves. The exact historical compiler version remains unconfirmed.

A further **503 repeated functions (4,528 bytes)** reuse existing readable reconstructions whose original machine-code bodies are identical. Most are small accessors and constant-return functions. Each distinct address is independently discovered and checked; the manifest records its source seed. The 75 unresolved tasks remain available.

## Contribute with your agent

Give your coding agent this prompt, your own Wii U RPX and a time or token budget:

> Read https://github.com/Producdevity/botw-wiiu-decomp/blob/master/docs/agent-guide.md and contribute one function. Handle setup, claim a task, reconstruct readable C++, run the independent checks and submit a pull request. Keep my game files private and stay within my budget.

The agent handles the technical steps. A GitHub account and local command access are required. [Contribution guide](docs/contributing.md).

## Local commands

Install Python 3.11+, LLVM with PowerPC support, and GitHub CLI. On macOS: `brew install python llvm gh`. On Ubuntu 24.04: `sudo apt install python3 clang-18 llvm-18 gh`.

```sh
git clone https://github.com/Producdevity/botw-wiiu-decomp.git
cd botw-wiiu-decomp
python3 tools/toolchain.py
python3 tools/decomp.py setup --rpx /path/to/U-King.rpx
python3 tools/decomp.py doctor
python3 tools/community.py list
python3 tools/community.py claim
python3 tools/decomp.py packet FUNCTION
python3 tools/decomp.py check FUNCTION
```

The toolchain command downloads hash-pinned GHS and wibo releases from their upstream distribution into `.local/`; it supports macOS (Rosetta on Apple Silicon) and x86-64 Linux. Use `--compiler /path/to/clang++` during setup if necessary. `packet` creates private bytes, disassembly, caller/callee context and task metadata under ignored `.local/`. Submit readable C++ under `reconstructions/`; never submit the packet.

Without game files, anyone can independently rebuild the published implementations:

```sh
python3 tools/decomp.py check --all --hash-only
PYTHONPATH=src python3 -m unittest discover -s tests
```

Public CI compares against fixed function hashes, addresses and reference bindings. A source PR cannot change those references or the checker and still pass the source acceptance job. All existing implementations are rebuilt when shared headers change. Claims use GitHub Issues with six-hour expiry; no additional server or account is needed.

- [Verification contract and current coverage](docs/verification.md)
- [Reference batches and selection evidence](docs/reference-batches.md)
- [Compiler evidence and prior projects](docs/toolchain.md)
- [Unaccepted candidates and register diagnostics](docs/register-diagnostics.md)
- [Development priorities](docs/roadmap.md)

Only original project tooling and reconstructed source belong here. No Nintendo game files, extracted machine code, proprietary SDK, compiler binaries or generated disassembly are distributed. This project is not affiliated with Nintendo.
