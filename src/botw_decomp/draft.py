"""Optional first-pass C++ drafts from m2c; never an input to acceptance.

m2c (GPL-3.0) is fetched at a pinned commit into the ignored `.local/tools/`
directory and run as a separate process. Nothing from it is vendored.
"""

import hashlib
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

from .compiler import check_text
from .ppc_gnu import UnsupportedInstruction, to_gnu_asm
from .project import read_json, validate_source_contract, write_json

M2C_URL = "https://github.com/matt-kempster/m2c"
M2C_COMMIT = "c632946b8cfbe8fce442b522dba92dfa72f1f317"
# SHA-256 over every file below the checkout (sorted path, then content hash),
# so a changed tree is detected independently of the Git object hash.
M2C_TREE_SHA256 = "f925d7d4375f13037c5232f4695564b377d9520cffc7da5e74ece698f86a4dbe"
INSTALL_DIR = Path(".local/tools/m2c")
TIMEOUT = 60

PREAMBLE_TYPES = (
    "typedef signed char s8;\ntypedef unsigned char u8;\n"
    "typedef short s16;\ntypedef unsigned short u16;\n"
    "typedef int s32;\ntypedef unsigned int u32;\n"
    "typedef long long s64;\ntypedef unsigned long long u64;\n"
    "typedef float f32;\ntypedef double f64;\n"
)
CONTEXT_TYPES = PREAMBLE_TYPES + "typedef unsigned char bool;\n"
# Only macros the output actually uses are emitted. The expansions follow m2c's
# own `m2c_macros.h`, without including it.
MACROS = {
    "NULL": "#define NULL 0",
    "M2C_FIELD": "#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))",
    "M2C_BITWISE": "#define M2C_BITWISE(type, expr) ((type)(expr))",
    "M2C_ERROR": "#define M2C_ERROR(desc) (0)",
    "M2C_TRAP_IF": "#define M2C_TRAP_IF(cond) (0)",
    "M2C_SYNC": "#define M2C_SYNC() (0)",
    "M2C_CARRY": "#define M2C_CARRY 0",
    "M2C_OVERFLOW": "#define M2C_OVERFLOW(a) (0)",
    "M2C_DCACHE_CLEAN": "#define M2C_DCACHE_CLEAN(addr) (0)",
    "M2C_DCACHE_INVALIDATE": "#define M2C_DCACHE_INVALIDATE(addr) (0)",
    "M2C_DCACHE_CLEAN_INVALIDATE": "#define M2C_DCACHE_CLEAN_INVALIDATE(addr) (0)",
    "M2C_DCACHE_BLOCK_SETZERO": "#define M2C_DCACHE_BLOCK_SETZERO(addr) (0)",
    "M2C_ICACHE_INVALIDATE": "#define M2C_ICACHE_INVALIDATE(addr) (0)",
    "M2C_PREFETCH": "#define M2C_PREFETCH(addr) (0)",
    "MULT_HI": "#define MULT_HI(a, b) (0)",
    "MULTU_HI": "#define MULTU_HI(a, b) (0)",
    "CLZ": "#define CLZ(x) (0)",
    "M2C_UNK": "typedef s32 M2C_UNK;",
    "M2C_UNK8": "typedef s8 M2C_UNK8;",
    "M2C_UNK16": "typedef s16 M2C_UNK16;",
    "M2C_UNK32": "typedef s32 M2C_UNK32;",
    "M2C_UNK64": "typedef s64 M2C_UNK64;",
}
HEADER = ("// First-pass m2c draft from the local original. A guess to edit until `check` matches;"
          " not evidence of types or intent.\n")


def install_path(root: Path) -> Path:
    return root / INSTALL_DIR


def tree_digest(directory: Path) -> str:
    digest = hashlib.sha256()
    for path in sorted(directory.rglob("*")):
        relative = path.relative_to(directory)
        if relative.name == ".botw-pin" or any(part in (".git", "__pycache__") for part in relative.parts):
            continue
        if path.is_symlink():
            raise ValueError("symlink in m2c tree")
        if path.is_file():
            digest.update(relative.as_posix().encode() + b"\0" +
                          hashlib.sha256(path.read_bytes()).hexdigest().encode() + b"\n")
    return digest.hexdigest()


def installed(root: Path) -> bool:
    directory = install_path(root)
    return (directory / "m2c.py").is_file() and (directory / ".botw-pin").is_file()


def verify_install(root: Path) -> Path:
    directory = install_path(root)
    pin = (directory / ".botw-pin").read_text(encoding="utf-8").strip() if installed(root) else ""
    if pin != f"{M2C_COMMIT} {M2C_TREE_SHA256}":
        raise ValueError("m2c is missing or was installed at a different pin; run tools/draft.py install")
    if tree_digest(directory) != M2C_TREE_SHA256:
        raise ValueError("m2c files changed after installation; reinstall it")
    return directory


def install(root: Path) -> Path:
    destination = install_path(root)
    if destination.exists():
        raise ValueError(f"already exists: {destination}; remove it explicitly to reinstall")
    git = shutil.which("git")
    if not git:
        raise ValueError("git is required to fetch m2c")
    destination.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="m2c-", dir=destination.parent) as temporary:
        staged = Path(temporary) / "m2c"
        staged.mkdir()
        environment = {**os.environ, "GIT_TERMINAL_PROMPT": "0"}
        for command in (["init", "-q"], ["fetch", "-q", "--depth", "1", M2C_URL, M2C_COMMIT],
                        ["checkout", "-q", "--detach", "FETCH_HEAD"]):
            process = subprocess.run([git, *command], cwd=staged, env=environment,
                                     capture_output=True, text=True, timeout=300)
            if process.returncode:
                raise ValueError(f"git {command[0]} failed: {process.stderr.strip()[-500:]}")
        head = subprocess.run([git, "rev-parse", "HEAD"], cwd=staged, capture_output=True,
                              text=True, timeout=30).stdout.strip()
        if head != M2C_COMMIT:
            raise ValueError("fetched commit does not match the pin")
        shutil.rmtree(staged / ".git")
        if tree_digest(staged) != M2C_TREE_SHA256:
            raise ValueError("m2c tree hash does not match the pin")
        (staged / ".botw-pin").write_text(f"{M2C_COMMIT} {M2C_TREE_SHA256}\n", encoding="utf-8")
        staged.rename(destination)
    return destination


def _contract_signature(symbol: str, contract: dict) -> tuple[str, list[str]]:
    validate_source_contract(contract)
    parameters = ", ".join(contract["parameter_types"]) or "void"
    if contract["variadic"]:
        parameters += ", ..."
    structs = sorted({match for spelling in [contract["return_type"], *contract["parameter_types"]]
                      for match in re.findall(r"struct ([A-Za-z_][A-Za-z0-9_]*)", spelling)})
    return f"{contract['return_type']} {symbol}({parameters});\n", structs


def build_context(row: dict, rows: dict[str, dict]) -> tuple[str, str]:
    """C declarations for m2c, and the same callee prototypes as C++ declarations.

    m2c does not reprint prototypes it was given, so the draft must declare them itself.
    """
    lines, callees, structs = [], [], set()
    for callee in (rows[name] for name in sorted(row.get("bindings", {})) if name in rows):
        if "source_contract" in callee:
            line, names = _contract_signature(callee["symbol"], callee["source_contract"])
            lines.append(line)
            callees.append('extern "C" ' + line)
            structs.update(names)
    if "source_contract" in row:
        line, names = _contract_signature(row["symbol"], row["source_contract"])
        lines.append(line)
        structs.update(names)
    forward = "".join(f"struct {name};\n" for name in sorted(structs))
    return CONTEXT_TYPES + forward + "".join(lines), forward + "".join(callees)


def apply_contract(body: str, symbol: str, contract: dict | None) -> str:
    """Replace m2c's inferred signature with the pinned source_contract spelling."""
    if contract is None:
        return body
    validate_source_contract(contract)
    pattern = re.compile(rf"^[^\n;{{}}]*\b{symbol}\(([^)\n]*)\) \{{$", re.M)
    match = pattern.search(body)
    if match is None:
        raise ValueError("m2c produced no function definition")
    types = contract["parameter_types"]
    inferred = [] if match[1].strip() == "void" else [part.strip() for part in match[1].split(",")]
    names = [re.search(r"([A-Za-z_][A-Za-z0-9_]*)$", part)[1] for part in inferred] \
        if len(inferred) == len(types) and all(re.search(r"[A-Za-z0-9_]$", p) for p in inferred) \
        else [f"arg{index}" for index in range(len(types))]
    parameters = ", ".join(f"{spelling}{'' if spelling.endswith('*') else ' '}{name}"
                           for spelling, name in zip(types, names)) or "void"
    if contract["variadic"]:
        parameters += ", ..."
    signature = f"{contract['return_type']} {symbol}({parameters}) {{"
    return body[:match.start()] + signature + body[match.end():]


def to_cpp(m2c_output: str, symbol: str, contract: dict | None = None, declarations: str = "") -> str:
    """Wrap m2c's valid-syntax C as a checker-acceptable C++ source."""
    body = m2c_output.strip("\n")
    if not re.search(rf"\b{symbol}\s*\(", body):
        raise ValueError("m2c produced no function")
    body = apply_contract(body, symbol, contract)
    lines = []
    for line in body.splitlines():
        if re.match(r'extern (?!"C")', line):
            line = 'extern "C" ' + line[len("extern "):]
        elif re.match(r"(?!extern|typedef|#)[A-Za-z_][^=;]*\bfn_[0-9a-f]{8}\(", line):
            line = 'extern "C" ' + line
        lines.append(line)
    text = "\n".join(lines) + "\n"
    needed = [PREAMBLE_TYPES.rstrip("\n")]
    needed += [definition for name, definition in MACROS.items() if re.search(rf"\b{name}\b", text)]
    cpp = HEADER + "\n".join(needed) + "\n\n" + (declarations + "\n" if declarations else "") + text
    check_text(cpp)
    return cpp


def _run(directory: Path, assembly: str, context: str, symbol: str) -> str:
    with tempfile.TemporaryDirectory(prefix="botw-m2c-") as temporary:
        source, header = Path(temporary) / "function.s", Path(temporary) / "context.c"
        source.write_text(assembly, encoding="utf-8")
        header.write_text(context, encoding="utf-8")
        process = subprocess.run(
            [sys.executable, str(directory / "m2c.py"), "-t", "ppc-mwcc-c", "--valid-syntax",
             "--comment-style", "none", "--no-cache", "--context", str(header), str(source)],
            cwd=temporary, capture_output=True, text=True, timeout=TIMEOUT,
            env={**os.environ, "PYTHONDONTWRITEBYTECODE": "1"})
    failure = re.search(r"Decompilation failure in function \w+:\s+(.+)", process.stdout)
    if process.returncode or failure:
        message = failure[1] if failure else (process.stderr.strip().splitlines() or ["no message"])[-1]
        raise ValueError("m2c failed: " + message[:300])
    return process.stdout


def make_draft(root: Path, row: dict, rows: dict[str, dict], code: bytes) -> str:
    directory = verify_install(root)
    names = {int(value, 16): name for name, value in row.get("bindings", {}).items()}
    assembly = to_gnu_asm(code, int(row["address"], 16), row["symbol"], names,
                          [*row.get("data_relocations", []), *row.get("code_relocations", [])])
    context, declarations = build_context(row, rows)
    return to_cpp(_run(directory, assembly, context, row["symbol"]), row["symbol"],
                  row.get("source_contract"), declarations)


def write_draft(root: Path, packet: Path, row: dict, rows: dict[str, dict], code: bytes):
    """Write `draft.cpp` into a packet. Returns None when m2c is not installed; never raises."""
    target = packet / "draft.cpp"
    target.unlink(missing_ok=True)
    if not installed(root):
        return None
    try:
        target.write_text(make_draft(root, row, rows, code), encoding="utf-8")
    except (UnsupportedInstruction, ValueError, OSError, subprocess.TimeoutExpired) as error:
        return {"status": "skipped", "reason": str(error)}
    return {"status": "written", "path": str(target)}
