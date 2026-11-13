"""Fetch pinned upstream tools into the ignored local directory."""
import hashlib
import json
from pathlib import Path, PurePosixPath
import platform
import shutil
import tarfile
import tempfile
import urllib.request

from .project import ROOT, read_json


def download(spec: dict, destination: Path):
    with urllib.request.urlopen(spec["url"], timeout=60) as response, destination.open("wb") as output:
        size = 0
        while chunk := response.read(1024 * 1024):
            size += len(chunk)
            if size > 64 * 1024 * 1024:
                raise ValueError("oversized toolchain download")
            output.write(chunk)
    if hashlib.sha256(destination.read_bytes()).hexdigest() != spec["sha256"]:
        raise ValueError("toolchain download hash mismatch")


def unpack(archive: Path, destination: Path):
    with tarfile.open(archive, "r:gz") as bundle:
        total = 0
        seen = set()
        for item in bundle:
            name = PurePosixPath(item.name)
            if name.is_absolute() or ".." in name.parts or "\\" in item.name:
                raise ValueError("unsafe archive path")
            if str(name) in seen or not (item.isfile() or item.isdir()):
                raise ValueError("duplicate or unsupported archive entry")
            seen.add(str(name))
            total += item.size
            if total > 128 * 1024 * 1024:
                raise ValueError("oversized compiler archive")
            path = destination.joinpath(*name.parts)
            if item.isdir():
                path.mkdir(parents=True, exist_ok=True)
            else:
                path.parent.mkdir(parents=True, exist_ok=True)
                with bundle.extractfile(item) as source, path.open("wb") as output:
                    shutil.copyfileobj(source, output)


def install():
    system, machine = platform.system(), platform.machine().lower()
    if system == "Darwin":
        runner = "wibo-macos"
    elif system == "Linux" and machine in ("x86_64", "amd64"):
        runner = "wibo-linux-x86_64"
    else:
        raise ValueError("automatic setup supports macOS and x86-64 Linux; use a supported development host")
    specs = read_json(ROOT / "config/toolchains.json")
    destination = ROOT / ".local/toolchains/ghs-5.3.22"
    if destination.exists():
        raise ValueError(f"toolchain already exists: {destination}; preserve it or remove it explicitly before reinstalling")
    destination.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="toolchain-", dir=destination.parent) as temporary:
        temporary = Path(temporary)
        staged = temporary / "installed"
        staged.mkdir()
        download(specs[runner], staged / "wibo")
        download(specs["ghs-5.3.22"], temporary / "ghs.tar.gz")
        unpack(temporary / "ghs.tar.gz", staged / "ghs")
        if not (staged / "ghs/bin/cxppc.exe").is_file():
            raise ValueError("unexpected compiler archive layout")
        (staged / "wibo").chmod(0o755)
        (staged / "provenance.json").write_text(json.dumps({"runner": runner, "artifacts": specs}, indent=2) + "\n")
        staged.rename(destination)
    return destination
