"""Compile source into a temporary PowerPC object; never execute that object."""
from pathlib import Path
import re
import shutil
import subprocess
import tempfile

from .project import ROOT

FLAGS = ["--target=powerpc-unknown-eabi", "-mcpu=750", "-O2", "-ffreestanding",
         "-fno-exceptions", "-fno-rtti", "-fno-unwind-tables", "-fno-asynchronous-unwind-tables",
         "-fno-stack-protector", "-fno-pic", "-fno-pie", "-fno-builtin", "-std=c++17",
         "-nostdinc", "-nostdinc++", "-fno-digraphs", "-fno-trigraphs"]
GHS_PROFILES = {
    "ghs-5.3.22-speed": ["-Ospeed"],
    "ghs-5.3.22-general": ["-Ogeneral"],
    "ghs-5.3.22-space": ["-Ospace"],
    "ghs-5.3.22-speed-notailrecursion-nopipeline": ["-Ospeed", "-Onotailrecursion", "-Onopipeline"],
    "ghs-5.3.22-speed-nounroll": ["-Ospeed", "-Onounroll"],
    "ghs-5.3.22-speed-noconstprop": ["-Ospeed", "-Onoconstprop"],
}


def flags(profile: str) -> list[str]:
    if profile == "clang-ppc":
        return FLAGS
    if profile in GHS_PROFILES:
        return [*GHS_PROFILES[profile], "-bigendian", "--no_exceptions", "--no_rtti"]
    raise ValueError(f"unsupported compiler profile: {profile}")


def profiles(row: dict) -> list[str]:
    profile = row.get("compiler_profile", "clang-ppc")
    return list(GHS_PROFILES) if profile == "ghs-5.3.22-auto" else [profile]


def ghs_command() -> list[str]:
    directory = ROOT / ".local/toolchains/ghs-5.3.22"
    runner, executable = directory / "wibo", directory / "ghs/bin/cxppc.exe"
    if not runner.is_file() or not executable.is_file():
        raise ValueError("GHS profile requires local tools: run python3 tools/toolchain.py")
    return [str(runner), str(executable)]


def identity(cxx: str, profile: str) -> str:
    if profile == "clang-ppc":
        return version(cxx)
    if profile in GHS_PROFILES:
        ghs_command()
        return "GHS 5.3.22, " + " ".join(GHS_PROFILES[profile]) + ", pinned decomp.me archive, wibo 1.2.0"
    raise ValueError(f"unsupported compiler profile: {profile}")


def locate(requested: str | None = None) -> str:
    choices = [requested] if requested else ["/opt/homebrew/opt/llvm/bin/clang++", "clang++", "clang++-18"]
    for item in choices:
        found = shutil.which(item) if item else None
        if found:
            return str(Path(found).resolve())
    raise ValueError("Clang with the PowerPC target was not found; install LLVM or pass --compiler")


def version(compiler: str) -> str:
    process = subprocess.run([compiler, "--version"], capture_output=True, text=True, timeout=10)
    if process.returncode or "clang" not in process.stdout.lower():
        raise ValueError("bootstrap profile requires Clang")
    return process.stdout.splitlines()[0]


def check_text(source: str):
    source = re.sub(r"\\\r?\n", "", source)
    tokens = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*[\s\S]*?\*/')
    source = tokens.sub(lambda m: " " if m[0].startswith(("//", "/*")) else m[0], source)
    if "%:" in source or "??" in source:
        raise ValueError("preprocessor digraphs and trigraphs are not accepted")
    if re.search(r"\b(?:asm|__asm|__asm__|_Pragma|__pragma)\b|^\s*#\s*(?:embed|pragma|include_next)\b", source, re.M):
        raise ValueError("assembly, byte embedding and compiler pragma overrides are not accepted")
    for line in source.splitlines():
        if re.match(r"\s*#\s*include\b", line):
            match = re.fullmatch(r'\s*#\s*include\s+"(botw/[A-Za-z0-9_/.-]+\.h)"\s*', line)
            if not match or ".." in match[1].split("/"):
                raise ValueError("includes must be literal project headers under botw/")


def check_source(path: Path):
    if path.is_symlink() or not path.is_file() or path.stat().st_size > 256 * 1024:
        raise ValueError(f"source must be a regular file below 256 KiB: {path.name}")
    check_text(path.read_text(encoding="utf-8"))


def compile_source(compiler: str, source: Path, include: Path, profile: str = "clang-ppc") -> bytes:
    check_source(source)
    if include.is_symlink():
        raise ValueError("header directory symlinks are not accepted")
    for header in include.rglob("*"):
        if header.is_symlink():
            raise ValueError("header symlinks are not accepted")
        if header.is_file():
            check_source(header)
    with tempfile.TemporaryDirectory(prefix="botw-match-") as temporary:
        obj = Path(temporary) / "function.o"
        prepared = Path(temporary) / "function.cpp"
        if profile == "clang-ppc":
            preprocessor = [compiler, *FLAGS, "-I", str(include.resolve()), "-E", "-P", str(source.resolve()), "-o", str(prepared)]
            command = [compiler, *FLAGS, "-c", str(prepared), "-o", str(obj)]
        elif profile in GHS_PROFILES:
            preprocessor = [*ghs_command(), *flags(profile), "-I" + str(include.resolve()), "-E", str(source.resolve())]
            command = [*ghs_command(), *flags(profile), "-c", "-tmp=" + str(Path(temporary) / "ghs-tmp"), "-o", str(obj), str(prepared)]
        else:
            raise ValueError(f"unsupported compiler profile: {profile}")
        process = subprocess.run(preprocessor,
                                 capture_output=True, text=True, timeout=45)
        if process.returncode:
            raise ValueError("preprocessing failed:\n" + process.stderr[-6000:])
        if profile in GHS_PROFILES:
            expanded = re.sub(r'^\s*#\s*(?:line\s+)?\d+[^\n]*$', '', process.stdout, flags=re.M)
            prepared.write_text(expanded, encoding="utf-8")
        if not prepared.is_file() or prepared.stat().st_size > 2 * 1024 * 1024:
            raise ValueError("missing or oversized preprocessed source")
        check_text(prepared.read_text(encoding="utf-8"))
        process = subprocess.run(command,
                                 capture_output=True, text=True, timeout=45)
        if process.returncode:
            raise ValueError("compile failed:\n" + process.stderr[-6000:])
        if not obj.is_file() or obj.stat().st_size > 4 * 1024 * 1024:
            raise ValueError("missing or oversized compiler output")
        return obj.read_bytes()
