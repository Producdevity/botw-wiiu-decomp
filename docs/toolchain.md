# Toolchain

GHS 5.3.22 runs locally and produces exact Wii U matches, including loops and an
external call. Use it for broader reconstruction; keep Clang for its verified
leaf functions. BotW's historical compiler version and complete flags remain
unconfirmed.

The initial 17 reconstructions reproduce **304 original bytes**: eight with
Clang and nine with GHS. This is a verified bootstrap, not a completion estimate.

## Verified target

- Wii U v208 `U-King.rpx`, SHA-256
  `ba58da5b95ce929e005d058ceb08b9b2788d1ab2bbc8a6c189bbadca0bb34d30`.
- ELF32, big-endian PowerPC. RPX file info reports Cafe SDK `21301`, revision
  `68939`. These identify the SDK, not the compiler.
- No compiler version was recovered from the inspected RPX metadata.

## Working bootstrap

The initial eight reconstructed functions compile with **Homebrew clang version
23.1.4** and match 84 original bytes exactly. Each starts at a direct call target,
ends with a return, has no reference relocation in its span, and produces no
unresolved object relocation. Original class and type names remain unknown.

Profile `clang-ppc`:

```sh
clang --target=powerpc-unknown-eabi -mcpu=750 -O2 -ffreestanding \
  -fno-exceptions -fno-rtti -fno-unwind-tables -fno-asynchronous-unwind-tables \
  -fno-stack-protector -fno-pic -fno-pie -fno-builtin -std=c++17 \
  -c function.cpp -o function.o
```

This is a functioning compiler profile, not an identification of Nintendo's
toolchain. Ordinary integer, loop, branch and vector examples were also tried at
`-O2` and `-O1`; only small leaf patterns matched. Register allocation and C++ ABI
differences make stock Clang insufficient for broad matching. Do not add inline
assembly or byte-emission workarounds to inflate progress.

## Working GHS profiles

[decomp.me catalogs GHS 5.3.22 for Wii U](https://github.com/decompme/decomp.me/blob/main/cromper/compilers/compilers.linux.yaml).
Its [compiler adapter](https://github.com/decompme/decomp.me/blob/main/cromper/cromper/compilers.py)
uses `wibo` and `bin/cxppc.exe`. The same standalone compiler runs on the
bootstrap Mac through wibo 1.2.0 and Rosetta:

```sh
wibo "$GHS_ROOT/bin/cxppc.exe" -c -Ospeed -bigendian \
  --no_exceptions --no_rtti -tmp=compiler-tmp -o function.o function.cpp
```

Nine additional functions, **220 bytes**, matched with this compiler. The project
verifier checked internal branch relocations and an external `REL24` call against
its bound original destination. Examples include string scans, a strided float
copy, signed maximum, and a call followed by a signed-result test.

| Profile | Optimization |
| --- | --- |
| `ghs-5.3.22-speed` | `-Ospeed` |
| `ghs-5.3.22-general` | `-Ogeneral` |
| `ghs-5.3.22-space` | `-Ospace` |

All three use `-bigendian --no_exceptions --no_rtti`. The compiler defaults to
`-cpu=espresso`. `--version -c function.cpp` reports
`C++POWERPC 5.3.22 RELEASE VERSION`, with EDG frontend 3.10.1 dated September 25,
2013. `-E function.cpp` emits preprocessed source on stdout with `#line`
directives; adding `-P` afterwards redirects preprocessing into a file.

The compiler came from the standalone archive used by the
[decomp.me packaging recipe](https://github.com/decompme/compilers/blob/main/platforms/wiiu/ghs5.3.22/Dockerfile),
without a Cafe SDK. Compiler binaries stay outside version control.

| Artifact | SHA-256 |
| --- | --- |
| `ghs5.3.22.tar.gz` | `41cd0a4723acfbddf8f70a9c3ff84bce7e85087b1d1ccef8bbf5f03d82c2b520` |
| wibo 1.2.0 `wibo-macos` | `2b3000ef6a7a490c24ccd71967735ae0005e218922e51806cca1b8d77fd3cf7c` |
| wibo 1.2.0 `wibo-x86_64` | `13f86a2d618f0dbe67179d349625345eabf9b46450295cb4c904e49f6aff85af` |

[wibo 1.2.0](https://github.com/decompals/wibo/releases/tag/1.2.0) added GHS
support. Its [macOS build supports Rosetta](https://github.com/decompals/wibo/blob/1.2.0/README.md).
The bootstrap Mac run is verified; Linux execution still needs its own check.

## Reusable research

| Project | Useful material | Matching status |
| --- | --- | --- |
| [ZeldaRET BotW](https://github.com/zeldaret/botw) | Function identities and engine structures | Switch target; Wii U addresses, layouts and code generation require separate evidence. |
| [red-pro2](https://github.com/aboood40091/red-pro2), [sead](https://github.com/aboood40091/sead) | Wii U engine/class reconstruction | NSMBU; sead explicitly prioritizes functionality because its original compiler version was unavailable. |
| [NW4F-Eft](https://github.com/open-ead/NW4F-Eft/tree/nsmbu) | Wii U particle-library reconstruction | NSMBU; exact matching is not its current priority. |
| [RedHills](https://github.com/Zenith-Team/RedHills) | Open-source Clang fork implementing the GHS C++ ABI | Full matching code generation is explicitly outside its goals. |

No dedicated established BotW Wii U matching decompilation was identified in
this source review. These projects are research inputs, not a substitute for a
Wii U reference build. Check licenses before importing source.

Next compiler work: expand beyond these small functions into engine classes and
renderer code. Record shared layouts with evidence and compile-time offset/size
checks so one correction can unblock many functions. Matching function bytes
does not identify its original name or parameter types; those remain explicit
inferences in the manifest.
