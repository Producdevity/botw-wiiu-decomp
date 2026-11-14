"""Read selected RPX members with the locally built, vendored ZArchive reader."""
from hashlib import sha256
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import tempfile

from . import private_storage

MAX_RPX = 64 * 1024 * 1024
ENTRY = re.compile(r"(?:[0-9a-fA-F]{16}_v[0-9]{1,6}/)?code/U-King\.rpx\Z")
SOURCES = (
    "tools/wua_reader.cpp",
    "third_party/zarchive/include/zarchive/zarchivecommon.h",
    "third_party/zarchive/include/zarchive/zarchivereader.h",
    "third_party/zarchive/src/zarchivereader.cpp",
)
SETUP = "run python3 tools/decomp.py setup --game PATH to install the WUA reader"


class ReaderUnavailable(ValueError):
    """The private reader has not been installed or no longer matches its source."""


def _hash(path: Path) -> str:
    digest = sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def _source_hash(root: Path) -> str:
    digest = sha256()
    for name in SOURCES:
        path = root / name
        if path.is_symlink() or not path.is_file():
            raise ValueError(f"missing or symlinked WUA reader source: {name}")
        digest.update(name.encode() + b"\0" + path.read_bytes())
    return digest.hexdigest()


def _directory(root: Path) -> Path:
    return root / ".local/toolchains/wua-reader"


def _safe_directory(root: Path) -> bool:
    return not any((root / name).is_symlink() for name in
                   (".local", ".local/toolchains", ".local/toolchains/wua-reader"))


def reader_ready(root: Path) -> bool:
    """Check the fixed installation paths without building, running or writing."""
    directory = _directory(root)
    binary, metadata = directory / "wua-reader", directory / "build.json"
    try:
        if not _safe_directory(root) or binary.is_symlink() or metadata.is_symlink():
            return False
        if not binary.is_file() or not metadata.is_file() or metadata.stat().st_size > 16384:
            return False
        data = json.loads(metadata.read_text())
        return (data.get("schema") == 1 and data.get("source_sha256") == _source_hash(root)
                and data.get("binary_sha256") == _hash(binary) and os.access(binary, os.X_OK)
                and isinstance(data.get("compiler"), str) and isinstance(data.get("compiler_version"), str))
    except (OSError, ValueError, TypeError, AttributeError):
        return False


def install_reader(root: Path, compiler: str | None = None) -> Path:
    """Build privately, then publish a new installation with its receipt last."""
    root = Path(root).resolve()
    directory = _directory(root)
    if reader_ready(root):
        return directory / "wua-reader"
    if not _safe_directory(root):
        raise ValueError("WUA reader installation paths must not be symlinks")
    if directory.exists():
        raise ReaderUnavailable(f"WUA reader installation does not match its source; preserved {directory}. "
                                "Move that directory aside and rerun setup.")
    choices = [compiler] if compiler else ["clang++", "clang++-18", "c++", "g++"]
    executable = next((shutil.which(str(item)) for item in choices if item and shutil.which(str(item))), None)
    if not executable:
        raise ReaderUnavailable("WUA setup needs a host C++20 compiler. Install Xcode command line tools "
                                "on macOS or clang/g++ on Linux, then rerun setup.")
    executable = str(Path(executable).resolve())
    try:
        version = subprocess.run([executable, "--version"], capture_output=True, text=True, timeout=10)
    except (OSError, subprocess.TimeoutExpired) as error:
        raise ReaderUnavailable(f"cannot identify the host C++ compiler: {error}") from error
    if version.returncode or not version.stdout.strip():
        raise ReaderUnavailable("the host C++ compiler did not report its version")
    driver_flags = ["--driver-mode=g++"] if "clang" in version.stdout.lower() else []
    source_hash = _source_hash(root)
    try:
        with tempfile.TemporaryDirectory(prefix="botw-wua-reader-build-") as temporary:
            staging = Path(temporary) / "install"
            staging.mkdir()
            binary = staging / "wua-reader"
            command = [executable, *driver_flags, "-std=c++20", "-O2", "-DNDEBUG", "-pthread",
                       "-I", str(root / "third_party/zarchive/include")]
            if Path("/opt/homebrew/include/zstd.h").is_file():
                command += ["-I/opt/homebrew/include", "-L/opt/homebrew/lib", "-Wl,-rpath,/opt/homebrew/lib"]
            command += [str(root / "tools/wua_reader.cpp"),
                        str(root / "third_party/zarchive/src/zarchivereader.cpp"), "-lzstd", "-o", str(binary)]
            built = subprocess.run(command, capture_output=True, text=True, timeout=120)
            if built.returncode:
                raise ReaderUnavailable("WUA reader build failed. Install a host C++20 compiler and zstd "
                                        "development files (macOS: brew install zstd; Debian/Ubuntu: "
                                        "apt install libzstd-dev), then rerun setup.\n" + built.stderr[-4000:])
            if _source_hash(root) != source_hash:
                raise ReaderUnavailable("WUA reader source changed during compilation; rerun setup")
            (staging / "build.json").write_text(json.dumps({
                "schema": 1, "source_sha256": source_hash, "compiler": executable,
                "compiler_version": version.stdout.splitlines()[0], "binary_sha256": _hash(binary),
            }, indent=2) + "\n")
            with private_storage.directory(root, (".local", "toolchains")) as parent:
                try:
                    os.mkdir("wua-reader", mode=0o700, dir_fd=parent)
                except FileExistsError:
                    raise ReaderUnavailable("WUA reader installation appeared during build; preserved it")
                descriptor = os.open("wua-reader", os.O_RDONLY | os.O_DIRECTORY | os.O_NOFOLLOW,
                                     dir_fd=parent)
                try:
                    for filename in ("wua-reader", "build.json"):
                        data = (staging / filename).read_bytes()
                        if not private_storage.create_file(descriptor, filename, data,
                                                           0o700 if filename == "wua-reader" else 0o600):
                            raise ReaderUnavailable("WUA reader installation changed during publish; preserved it")
                finally:
                    os.close(descriptor)

    except subprocess.TimeoutExpired as error:
        raise ReaderUnavailable("WUA reader compilation timed out; check the host C++20 compiler and rerun setup") from error
    except OSError as error:
        raise ReaderUnavailable(f"cannot install the WUA reader: {error}") from error
    return directory / "wua-reader"


def _run(archive: Path, root: Path, entry: str | None = None) -> bytes:
    if not reader_ready(root):
        raise ReaderUnavailable(f"WUA reader is unavailable or changed; {SETUP}")
    archive = Path(archive)
    try:
        if not archive.is_file() or not 144 < archive.stat().st_size <= 64 * 1024 ** 3:
            raise ValueError("WUA archive must be a regular file between 145 bytes and 64 GiB")
        command = [str(_directory(root) / "wua-reader"), "list" if entry is None else "read", str(archive)]
        if entry is not None:
            command.append(entry)
        process = subprocess.run(command, capture_output=True, timeout=120 if entry else 30)
    except subprocess.TimeoutExpired as error:
        raise ValueError("WUA read timed out; check that the archive is on accessible local storage") from error
    except OSError as error:
        raise ValueError(f"cannot read WUA archive: {error}") from error
    if process.returncode:
        raise ValueError(process.stderr.decode("utf-8", "replace")[-4000:].strip() or "WUA reader failed")
    if len(process.stdout) > (MAX_RPX if entry else 32768):
        raise ValueError("WUA reader returned oversized output")
    return process.stdout


def candidates(archive: Path, root: Path) -> list[dict]:
    """List only root/title code/U-King.rpx members; never install or extract."""
    try:
        result = json.loads(_run(archive, root))
    except (json.JSONDecodeError, UnicodeDecodeError) as error:
        raise ValueError("WUA reader returned invalid JSON") from error
    if not isinstance(result, list) or len(result) > 64:
        raise ValueError("WUA reader returned invalid candidates")
    seen = set()
    for row in result:
        if (not isinstance(row, dict) or set(row) != {"path", "size"}
                or not isinstance(row["path"], str) or not ENTRY.fullmatch(row["path"])
                or type(row["size"]) is not int or not 0 < row["size"] <= MAX_RPX
                or row["path"].lower() in seen):
            raise ValueError("WUA reader returned an unsafe or ambiguous RPX candidate")
        seen.add(row["path"].lower())
    return result


def read_rpx(archive: Path, entry: str, root: Path) -> bytes:
    """Read one exact allowlisted member into memory, with no filesystem output."""
    if not isinstance(entry, str) or not ENTRY.fullmatch(entry):
        raise ValueError("WUA RPX entry must exactly match a listed code/U-King.rpx path")
    data = _run(archive, root, entry)
    if not data:
        raise ValueError("WUA RPX entry is empty")
    return data
