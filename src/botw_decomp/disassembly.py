"""Disassemble a private reference span without executing game code."""

from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile


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
        return process.stdout
