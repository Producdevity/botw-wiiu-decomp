#!/usr/bin/env python3
"""Verify the linked numeric getter and its zero-initialized storage."""

import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))

from botw_decomp import cli, compiler, game_input, project, rpx


FUNCTION = "fn_02f894f0"
STORAGE = "data_1053fa2c"
STORAGE_SIZE = 4


def tool(name: str) -> str:
    command = shutil.which(name) or shutil.which(f"{name}-18")
    if not command:
        raise ValueError(f"install {name} and add it to PATH")
    return command


def run(command: list[str], directory: Path) -> None:
    result = subprocess.run(command, cwd=directory, capture_output=True, text=True, timeout=30)
    if result.returncode:
        raise ValueError(f"{Path(command[0]).name} failed: {result.stderr.strip()[-2000:]}")


def check(source_root: Path, cxx: str, game: Path | None = None) -> dict:
    rows = project.functions(ROOT)
    row = rows[FUNCTION]
    address = int(row["address"], 16)
    storage = int(row["data_bindings"][STORAGE], 16)
    if row["bindings"] or row.get("compile_with") or set(row["data_bindings"]) != {STORAGE}:
        raise ValueError("the linked component no longer has a closed binding set")
    original = None
    if game is not None:
        target = project.read_json(ROOT / "config/target.json")
        resolved = game_input.resolve_game(game, ROOT)
        image = rpx.load(resolved.rpx, target["rpx_sha256"])
        original = rpx.reference_bytes(image, row)
        sections = [section for section in image.sections
                    if section.kind == 8 and section.flags & 3 == 3 and not section.flags & (4 | 0x400)
                    and section.address <= storage and storage + STORAGE_SIZE <= section.address + section.size]
        if len(sections) != 1 or image.has_relocation(storage, STORAGE_SIZE):
            raise ValueError("the pinned storage does not occupy one unrelocated writable BSS word")
    result = cli.verify(row, cxx, root=source_root, references=rows)
    if not result["matched"]:
        raise ValueError(f"component function did not match: {result['reason']}")
    code = compiler.compile_source(cxx, source_root / row["source"], source_root / "include",
                                   result["compiler_profile"])
    with tempfile.TemporaryDirectory(prefix="botw-link-") as directory:
        work = Path(directory)
        (work / "code.o").write_bytes(code)
        state = work / "state.cpp"
        state.write_text(f'extern "C" {{ int {STORAGE}; }}\n', encoding="ascii")
        (work / "state.o").write_bytes(compiler.compile_source(cxx, state, source_root / "include"))
        (work / "component.ld").write_text(f"""
PHDRS {{ code PT_LOAD FLAGS(5); state PT_LOAD FLAGS(6); }}
SECTIONS {{
  .text {address:#x} : {{ code.o(.text) }} :code
  .bss {storage:#x} (NOLOAD) : {{ state.o(.bss) }} :state
  /DISCARD/ : {{ *(.comment .note.GNU-stack) }}
}}
ASSERT({FUNCTION} == {address:#x} && SIZEOF(.text) == {row['size']}, "wrong code span")
ASSERT({STORAGE} == {storage:#x} && SIZEOF(.bss) == {STORAGE_SIZE}, "wrong storage span")
""", encoding="ascii")
        run([tool("ld.lld"), "-m", "elf32ppc", "--fatal-warnings", "--no-undefined",
             "-T", "component.ld", "-e", FUNCTION, "-o", "component.elf", "code.o", "state.o"], work)
        run([tool("llvm-objcopy"), "--dump-section=.text=linked.bin", "component.elf", "copy.elf"], work)
        linked = (work / "linked.bin").read_bytes()
    if len(linked) != row["size"] or hashlib.sha256(linked).hexdigest() != row["sha256"]:
        raise ValueError("linked function differs from the trusted hash")
    if original is not None and linked != original:
        raise ValueError("linked function differs from the supplied RPX")
    return {"status": "match", "function": FUNCTION, "code_address": hex(address), "code_bytes": len(linked),
            "storage": STORAGE, "storage_address": hex(storage), "zero_initialized_bytes": STORAGE_SIZE,
            "data_evidence": "pinned RPX BSS" if original is not None else "reviewed BSS record",
            "original_code_fallbacks": 0}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT, help="checkout containing the candidate C++")
    parser.add_argument("--compiler")
    parser.add_argument("--game", type=Path, help="also check the supplied dump and original BSS")
    args = parser.parse_args()
    try:
        print(json.dumps(check(args.root.resolve(strict=True), compiler.locate(args.compiler), args.game), indent=2))
        return 0
    except (OSError, ValueError, KeyError, subprocess.SubprocessError) as error:
        print(f"linked component: {error}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
