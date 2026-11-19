"""Local decomp-permuter integration. Proposes sources only; decomp.py check accepts."""
import base64
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from . import compiler
from .disassembly import _overlay, _wrap, locate
from .elf import SHN_UNDEF, parse_object
from .matching import _WIDTHS, _apply
from .project import ROOT

REPOSITORY = "https://github.com/simonlindholm/decomp-permuter"
COMMIT = "860b6d95b5350c2677c89b0c195c7bf3bb6bad0b"
REQUIREMENTS = "toml==0.10.2 --hash=sha256:806143ae5bfb6a3c6e736a764057db0e6a0e05e338b5630894a5f779cabb4f9b\n"

# pycparser only needs to recognise these C++ spellings; they never reach the compiler.
PARSER_PRELUDE = ("typedef _Bool bool;\nenum { false, true };\n"
                  "typedef struct { float value[2]; } __vec2x32float__;\n")


def tool_directory(root: Path = ROOT) -> Path:
    return root / ".local/tools/decomp-permuter"


def python_executable(root: Path = ROOT) -> Path:
    return root / ".local/tools/decomp-permuter-venv/bin/python"


def _git(directory: Path, *arguments: str) -> str:
    process = subprocess.run(["git", "-C", str(directory), *arguments],
                             capture_output=True, text=True, timeout=300)
    if process.returncode:
        raise ValueError(f"git {arguments[0]} failed: {process.stderr.strip()[-2000:]}")
    return process.stdout.strip()


def installed(root: Path = ROOT) -> bool:
    directory = tool_directory(root)
    if not (directory / "permuter.py").is_file() or not python_executable(root).is_file():
        return False
    try:
        return _git(directory, "rev-parse", "HEAD") == COMMIT and not _git(directory, "status", "--porcelain")
    except (ValueError, OSError, subprocess.TimeoutExpired):
        return False


def install(root: Path = ROOT) -> Path:
    """Fetch the pinned commit and a hash-pinned venv into .local/tools."""
    directory, venv = tool_directory(root), python_executable(root).parents[1]
    if installed(root):
        return directory
    for path in (directory, venv):
        if path.exists():
            raise ValueError(f"{path} exists but is not the pinned install; remove it explicitly and rerun")
    directory.mkdir(parents=True)
    try:
        _git(directory, "init", "-q")
        _git(directory, "fetch", "-q", "--depth", "1", REPOSITORY, COMMIT)
        _git(directory, "checkout", "-q", "--detach", "FETCH_HEAD")
        if _git(directory, "rev-parse", "HEAD") != COMMIT:
            raise ValueError("decomp-permuter checkout does not match the pinned commit")
        subprocess.run([sys.executable, "-m", "venv", str(venv)], check=True, timeout=300)
        requirements = venv / "requirements.txt"
        requirements.write_text(REQUIREMENTS, encoding="utf-8")
        subprocess.run([str(python_executable(root)), "-m", "pip", "install", "-q", "--disable-pip-version-check",
                        "--require-hashes", "--no-deps", "-r", str(requirements)], check=True, timeout=300)
    except (ValueError, OSError, subprocess.SubprocessError):
        shutil.rmtree(directory, ignore_errors=True)
        shutil.rmtree(venv, ignore_errors=True)
        raise
    return directory


# --- C++ to pycparser bridge -------------------------------------------------

def _skip(text: str, index: int) -> int:
    """Return the index after a literal or comment starting at index, else index."""
    if text.startswith("//", index):
        end = text.find("\n", index)
        return len(text) if end < 0 else end
    if text.startswith("/*", index):
        end = text.find("*/", index + 2)
        if end < 0:
            raise ValueError("unterminated comment")
        return end + 2
    if text[index] in "\"'":
        quote, position = text[index], index + 1
        while position < len(text) and text[position] != quote:
            position += 2 if text[position] == "\\" else 1
        if position >= len(text):
            raise ValueError("unterminated literal")
        return position + 1
    return index


def closing(text: str, index: int, opening: str = "{", close: str = "}") -> int:
    """Index of the bracket matching text[index], skipping literals and comments."""
    if text[index] != opening:
        raise ValueError(f"expected {opening!r}")
    depth, position = 0, index
    while position < len(text):
        after = _skip(text, position)
        if after != position:
            position = after
            continue
        if text[position] == opening:
            depth += 1
        elif text[position] == close:
            depth -= 1
            if not depth:
                return position
        position += 1
    raise ValueError(f"unbalanced {opening!r}")


def code_only(text: str) -> str:
    """text with comments and literals blanked, preserving offsets."""
    result, position = list(text), 0
    while position < len(text):
        after = _skip(text, position)
        if after == position:
            position += 1
            continue
        for index in range(position, after):
            if result[index] != "\n":
                result[index] = " "
        position = after
    return "".join(result)


def find_definition(text: str, symbol: str) -> tuple[int, int, int]:
    """(start, body brace, end) of the single file-scope definition of symbol."""
    code = code_only(text)
    found = []
    for match in re.finditer(rf"(?<![\w.]){re.escape(symbol)}\s*\(", code):
        close = closing(code, match.end() - 1, "(", ")")
        brace = close + 1
        while brace < len(code) and code[brace].isspace():
            brace += 1
        if brace < len(code) and code[brace] == "{":
            found.append((match.start(), brace))
    if len(found) != 1:
        raise ValueError(f"expected exactly one definition of {symbol}, found {len(found)}")
    name, brace = found[0]
    start = max(code.rfind(c, 0, name) for c in ";{}") + 1
    while True:
        stripped = start
        while stripped < name and text[stripped].isspace():
            stripped += 1
        if text.startswith("#", stripped):
            stripped = text.find("\n", stripped)
        else:
            stripped = _skip(text, stripped)
        if stripped == start or stripped < 0:
            break
        start = stripped
    return start, brace, closing(text, brace) + 1


def strip_linkage(header: str) -> tuple[str, bool]:
    match = re.match(r'\s*extern\s+"C"\s*', header)
    return (header[match.end():], True) if match else (header.strip(), False)


def casts_to_c(text: str) -> str:
    """Rewrite static/reinterpret/const casts as C casts, innermost first."""
    pattern = re.compile(r"\b(?:static|reinterpret|const)_cast\s*<")
    while matches := list(pattern.finditer(text)):
        match = matches[-1]
        depth, position = 1, match.end()
        while depth:
            if position >= len(text):
                raise ValueError("unterminated cast type")
            depth += {"<": 1, ">": -1}.get(text[position], 0)
            position += 1
        kind = text[match.end():position - 1].strip()
        while position < len(text) and text[position].isspace():
            position += 1
        if position >= len(text) or text[position] != "(":
            raise ValueError("cast without operand")
        end = closing(text, position, "(", ")")
        text = text[:match.start()] + f"(({kind})({text[position + 1:end]}))" + text[end + 1:]
    return text


def _remove_blocks(text: str, opener: str) -> str:
    pattern = re.compile(opener)
    while match := pattern.search(text):
        brace = match.end() - 1
        end = closing(text, brace)
        text = text[:match.start()] + text[brace + 1:end] + text[end + 1:]
    return text


def _remove_calls(text: str, name: str) -> str:
    pattern = re.compile(rf"\b{name}\s*\(")
    while match := pattern.search(text):
        end = closing(text, match.end() - 1, "(", ")") + 1
        while end < len(text) and text[end].isspace():
            end += 1
        if end < len(text) and text[end] == ";":
            end += 1
        text = text[:match.start()] + text[end:]
    return text


def c_shadow(prelude: str) -> str:
    """A C approximation of preprocessed C++ declarations, used only for parsing."""
    text = _remove_blocks(prelude, r'\bextern\s+"C"\s*\{')
    text = _remove_blocks(text, r"\bnamespace(?:\s+\w+)?\s*\{")
    text = re.sub(r'\bextern\s+"C"\s*', "extern ", text)
    text = _remove_calls(text, "static_assert")
    text = re.sub(r"^\s*using\s+[^;]*;", "", text, flags=re.M)
    text = re.sub(r"\b(public|private|protected)\s*:", "", text)
    text = re.sub(r"\bclass\b", "struct", text)
    text = casts_to_c(text)
    names = dict.fromkeys(re.findall(r"\b(?:struct|union)\s+(\w+)\s*[{;]", text))
    tags = {name: re.search(rf"\b(struct|union)\s+{name}\b", text)[1] for name in names}
    return "".join(f"typedef {tags[name]} {name} {name};\n" for name in names) + text


def _macro(name: str, text: str) -> str:
    if text.count("(") != text.count(")"):
        raise ValueError(f"unbalanced parentheses cannot be wrapped in {name}")
    return f"{name}({text})\n"


def build_base(expanded: str, symbol: str) -> dict:
    """Split preprocessed C++ into ignored C++ context and a parseable C function."""
    start, brace, end = find_definition(expanded, symbol)
    prelude, epilogue = expanded[:start], expanded[end:]
    declaration, _ = strip_linkage(expanded[start:brace])
    declaration = " ".join(declaration.split())
    prototype = f'extern "C" {declaration};'
    function = casts_to_c(declaration + " " + expanded[brace:end])
    base = (_macro("PERM_PRETEND", PARSER_PRELUDE + c_shadow(prelude)) +
            _macro("PERM_IGNORE", prelude.rstrip() + "\n" + prototype + "\n") +
            function + "\n" + (_macro("PERM_IGNORE", epilogue) if epilogue.strip() else ""))
    return {"base": base, "prototype": prototype, "epilogue": epilogue}


def splice(original: str, output: str, symbol: str, prototype: str, epilogue: str) -> str:
    """Replace the definition in the contributor's source with the permuter's region."""
    marker = output.find(prototype)
    if marker < 0:
        raise ValueError("permuter output lost the C++ context marker")
    region = output[marker + len(prototype):]
    if epilogue.strip():
        tail = region.rfind(epilogue)
        if tail < 0:
            raise ValueError("permuter output lost the trailing C++ context")
        region = region[:tail]
    region = region.strip() + "\n"
    start, _, _ = find_definition(region, symbol)
    region = region[:start] + 'extern "C" ' + region[start:]
    first, _, last = find_definition(original, symbol)
    return original[:first] + region.rstrip("\n") + original[last:]


def preprocess(source: Path, include: Path, profile: str) -> str:
    """Expand includes with the checker's GHS preprocessor flags."""
    compiler.check_source(source)
    command = [*compiler.ghs_command(), *compiler.flags(profile), "-I" + str(include.resolve()), "-E", str(source.resolve())]
    process = subprocess.run(command, capture_output=True, text=True, timeout=45)
    if process.returncode:
        raise ValueError("preprocessing failed:\n" + process.stderr[-6000:])
    return re.sub(r'^\s*#\s*(?:line\s+)?\d+[^\n]*$', "", process.stdout, flags=re.M)


# --- scoring ----------------------------------------------------------------

def resolve_for_score(object_bytes: bytes, symbol: str, address: int, bindings: dict[str, int]) -> bytes:
    """Function bytes with every relocation the trusted bindings can place applied.

    Unlike matching._resolve_function this accepts any size and leaves unknown
    relocations zeroed, so near misses still receive a score.
    """
    obj = parse_object(object_bytes)
    selected = [item for item in obj.symbols if item.name == symbol and item.section_index != SHN_UNDEF]
    if len(selected) != 1 or not selected[0].size:
        raise ValueError(f"{symbol} is not defined exactly once")
    function = selected[0]
    section = obj.sections[function.section_index]
    code = bytearray(section.data[function.value:function.value + function.size])
    for relocation in obj.relocations:
        offset = relocation.offset - function.value
        if (relocation.target_section != function.section_index or relocation.type not in _WIDTHS
                or not _WIDTHS[relocation.type] or not 0 <= offset < len(code)):
            continue
        target = obj.symbols[relocation.symbol_index]
        if target.name in bindings:
            destination = bindings[target.name] + relocation.addend
        elif target.section_index == function.section_index:
            destination = address + target.value - function.value + relocation.addend
        else:
            continue
        try:
            _apply(code, offset, relocation, destination & 0xFFFFFFFF, address + offset)
        except (ValueError, struct.error):
            continue
    return bytes(code)


ROW = re.compile(r"\s*([0-9a-fA-F]+):\s+((?:[0-9a-fA-F]{2}\s){4})\s*(.*)")
# llvm-objdump spells cr0 conditional branches as bt/bf; upstream only knows the extended forms.
CONDITIONS = {("bt", "lt"): "blt", ("bt", "gt"): "bgt", ("bt", "eq"): "beq",
              ("bf", "lt"): "bge", ("bf", "gt"): "ble", ("bf", "eq"): "bne"}


def disassemble(code: bytes, address: int, symbol: str) -> str:
    """llvm-objdump with r/f register names, plus the project's Espresso overlay."""
    with tempfile.TemporaryDirectory(prefix="botw-permute-objdump-") as temporary:
        path = Path(temporary) / "function.o"
        path.write_bytes(_wrap(code, symbol))
        process = subprocess.run(
            [locate(), "--disassemble", "--disassemble-zeroes", "-mllvm", "-ppc-asm-full-reg-names",
             f"--adjust-vma=0x{address:x}", str(path)], capture_output=True, text=True, timeout=15)
    if process.returncode:
        raise ValueError("llvm-objdump failed:\n" + process.stderr[-4000:])
    return _overlay(process.stdout, code, address)


def objdump_rows(disassembly: str) -> str:
    """Convert llvm-objdump rows to the tab layout upstream parses for GNU objdump."""
    lines = ["botw-permute objdump adapter"]
    for line in disassembly.splitlines():
        match = ROW.fullmatch(line)
        if not match:
            continue
        raw = match[2].split()
        body = re.sub(r"\s*;.*$", "", match[3]).strip()
        mnemonic, _, arguments = body.partition(" ") if "\t" not in body else body.partition("\t")
        if not mnemonic or mnemonic.startswith("<"):
            mnemonic, arguments = ".long", "0x" + "".join(raw)
        arguments = re.sub(r",\s+", ",", arguments.strip())
        condition, _, target = arguments.partition(",")
        if (mnemonic, condition) in CONDITIONS:
            mnemonic, arguments = CONDITIONS[mnemonic, condition], target
        lines.append(f"{match[1]}:\t{' '.join(raw)}\t{mnemonic}\t{arguments}")
    if len(lines) == 1:
        raise ValueError("no PowerPC instruction rows")
    return "\n".join(lines) + "\n"


def status(log: str) -> dict:
    """Base score, iteration and error counts from a permuter log."""
    base = re.findall(r"base score = (\d+)", log)
    progress = re.findall(r"iteration (\d+), (\d+) errors", log)
    return {"base_score": int(base[-1]) if base else None,
            "iterations": int(progress[-1][0]) if progress else 0,
            "errors": int(progress[-1][1]) if progress else 0}


def decode_pragmas(source: str) -> str:
    """Expand upstream's base64 PERM_IGNORE pragmas, as its output writer does."""
    return re.sub(r"^#pragma _permuter b64literal (\S+)$",
                  lambda match: base64.b64decode(match[1]).decode("utf-8"), source, flags=re.M)
