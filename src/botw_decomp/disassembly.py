"""Disassemble a private reference span without executing game code."""

from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile

from .espresso import decode
from .ppc_annotations import annotation


def locate() -> str:
    for candidate in ("/opt/homebrew/opt/llvm/bin/llvm-objdump", "llvm-objdump", "llvm-objdump-18"):
        executable = shutil.which(candidate)
        if executable:
            return str(Path(executable).resolve())
    raise ValueError("llvm-objdump was not found; install LLVM and add its bin directory to PATH")


def _wrap(code: bytes, symbol: str) -> bytes:
    names = b"\0.text\0.symtab\0.strtab\0.shstrtab\0"
    strings = b"\0" + symbol.encode("ascii") + b"\0"
    symbols = bytes(16) + struct.pack(">IIIBBH", 1, 0, len(code), 0x12, 0, 1)
    sections = (
        (1, 1, 6, code, 0, 0, 4, 0),
        (7, 2, 0, symbols, 3, 1, 4, 16),
        (15, 3, 0, strings, 0, 0, 1, 0),
        (23, 3, 0, names, 0, 0, 1, 0),
    )
    result = bytearray(52)
    headers = [(0,) * 10]
    for name, kind, flags, content, link, info, alignment, entry_size in sections:
        result.extend(bytes(-len(result) % alignment))
        offset = len(result)
        result.extend(content)
        headers.append((name, kind, flags, 0, offset, len(content), link, info,
                        alignment, entry_size))
    result.extend(bytes(-len(result) % 4))
    section_offset = len(result)
    for header in headers:
        result.extend(struct.pack(">10I", *header))
    result[:16] = b"\x7fELF\x01\x02\x01" + bytes(9)
    struct.pack_into(">HHIIIIIHHHHHH", result, 16, 1, 20, 1, 0, 0,
                     section_offset, 0, 52, 0, 0, 40, len(headers), 4)
    return bytes(result)


def disassemble(code: bytes, address: int, symbol: str) -> str:
    if not isinstance(code, bytes) or not code or len(code) % 4:
        raise ValueError("PowerPC code must be nonempty bytes with a length divisible by four")
    if (type(address) is not int or address < 0 or address % 4
            or address + len(code) > 0x100000000):
        raise ValueError("code span must fit an aligned 32-bit PowerPC address range")
    if not isinstance(symbol, str) or not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_.$]*", symbol):
        raise ValueError("symbol must be a nonempty ASCII identifier")
    executable = locate()
    with tempfile.TemporaryDirectory(prefix="botw-disassembly-") as temporary:
        obj = Path(temporary) / "reference.o"
        obj.write_bytes(_wrap(code, symbol))
        try:
            process = subprocess.run(
                [executable, "--disassemble", "--section=.text", "--disassemble-zeroes",
                 f"--adjust-vma=0x{address:x}", obj.name],
                cwd=temporary, capture_output=True, text=True, timeout=15,
            )
        except subprocess.TimeoutExpired as exc:
            raise ValueError("llvm-objdump exceeded the 15-second disassembly limit") from exc
        except OSError as exc:
            raise ValueError(f"could not run llvm-objdump: {exc}") from exc
        if process.returncode:
            raise ValueError("llvm-objdump failed:\n" + process.stderr[-4000:])
        if not process.stdout.strip():
            raise ValueError("llvm-objdump returned no disassembly")
        return _overlay(process.stdout, code, address)


def _overlay(output: str, code: bytes, address: int) -> str:
    overrides = {}
    for offset in range(0, len(code), 4):
        original = code[offset:offset + 4]
        word = int.from_bytes(original, "big")
        instruction = decode(word)
        note = None if instruction is not None else annotation(word)
        if instruction is not None or note is not None:
            overrides[address + offset] = (original, instruction.text if instruction else None, note)
    if not overrides:
        return output
    row = re.compile(r"^(\s*([0-9a-fA-F]+):[ \t]+)((?:[0-9a-fA-F]{2}[ \t]+){4})([^\r\n]*)(\r?\n)?$")
    seen = set()
    lines = []
    for line in output.splitlines(keepends=True):
        match = row.fullmatch(line)
        site = int(match[2], 16) if match else None
        if site in overrides:
            original, text, note = overrides[site]
            if site in seen or bytes.fromhex(match[3]) != original:
                raise ValueError("llvm-objdump overlay row disagrees with original bytes")
            seen.add(site)
            body = text if text is not None else match[4] + "; " + note
            line = match[1] + match[3] + body + (match[5] or "")
        lines.append(line)
    if seen != overrides.keys():
        raise ValueError("llvm-objdump omitted an overlay instruction row")
    return "".join(lines)
