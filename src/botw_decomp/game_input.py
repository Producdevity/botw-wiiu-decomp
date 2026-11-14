"""Select the pinned executable from a contributor's own dump."""
from dataclasses import dataclass
import hashlib
import os
from pathlib import Path
import re

from .project import ROOT, read_json
from . import wua, private_storage

MAX_RPX_BYTES = 64 * 1024 * 1024
MAX_FOLDER_DIRECTORIES = 4096
MAX_FOLDER_CANDIDATES = 64
MAX_FOLDER_ENTRIES = 65536
SKIP_DIRECTORIES = {"content", "meta", "aoc", ".git", ".local", "saves"}


@dataclass(frozen=True)
class GameInput:
    source: Path
    rpx: Path
    format: str
    sha256: str
    archive_entry: str | None = None

    def describe(self):
        return {"source": str(self.source), "format": self.format,
                "rpx": str(self.rpx), "rpx_sha256": self.sha256,
                "archive_entry": self.archive_entry}


def _digest(path: Path):
    if not path.is_file() or path.stat().st_size > MAX_RPX_BYTES:
        raise ValueError("Executable must be a regular file of at most 64 MiB")
    digest = hashlib.sha256()
    total = 0
    with path.open("rb") as source:
        for chunk in iter(lambda: source.read(1024 * 1024), b""):
            total += len(chunk)
            if total > MAX_RPX_BYTES:
                raise ValueError("Executable grew beyond 64 MiB while reading")
            digest.update(chunk)
    return digest.hexdigest()


def _folder_candidates(folder: Path):
    found, pending = [], [(folder, 0)]
    directories_seen = entries_seen = 0
    while pending:
        current, depth = pending.pop()
        directories_seen += 1
        if directories_seen > MAX_FOLDER_DIRECTORIES:
            raise ValueError("Dump folder is too broad; provide the game/update dump folder")
        children = []
        with os.scandir(current) as entries:
            for entry in entries:
                entries_seen += 1
                if entries_seen > MAX_FOLDER_ENTRIES:
                    raise ValueError("Dump folder has too many entries; provide the game/update folder")
                if entry.is_symlink():
                    continue
                if entry.is_dir(follow_symlinks=False):
                    if depth < 6 and entry.name.casefold() not in SKIP_DIRECTORIES:
                        children.append(Path(entry.path))
                elif entry.name.casefold() == "u-king.rpx" and entry.is_file(follow_symlinks=False):
                    found.append(Path(entry.path))
                    if len(found) > MAX_FOLDER_CANDIDATES:
                        raise ValueError("Too many executables in dump folder; provide the game/update folder")
        pending.extend((child, depth + 1) for child in sorted(children, reverse=True))
    return sorted(found, key=lambda p: _priority(str(p.relative_to(folder))))


def _priority(name):
    folded = name.casefold()
    return (0 if "0005000e101c9400_v208/" in folded else
            1 if any(part in ("update", "updates") for part in folded.split("/")) else 2,
            folded)


def _cache_path(root, expected):
    path = root / ".local/game-input" / expected / "U-King.rpx"
    for item in (root / ".local", root / ".local/game-input", path.parent, path):
        if item.is_symlink():
            raise ValueError("Game-input cache must not contain symlinks")
        if item.exists() and item != path and not item.is_dir():
            raise ValueError("Game-input cache parent is not a directory")
    if path.exists() and _digest(path) != expected:
        raise ValueError("Existing executable cache is invalid; preserve it before repair")
    return path


def _store(payload, path, expected, root):
    with private_storage.directory(root, (".local", "game-input", expected)) as descriptor:
        if not private_storage.create_file(descriptor, "U-King.rpx", payload):
            if hashlib.sha256(private_storage.read_file(descriptor, "U-King.rpx", MAX_RPX_BYTES)).hexdigest() != expected:
                raise ValueError("Executable cache changed during setup; preserved existing entry")


def resolve_game(source: Path, root: Path = ROOT, *, prepare=False, compiler=None):
    root = root.resolve()
    source = source.expanduser().resolve(strict=True)
    expected = read_json(root / "config/target.json")["rpx_sha256"]
    if not isinstance(expected, str) or not re.fullmatch(r"[0-9a-f]{64}", expected):
        raise ValueError("Invalid trusted executable SHA-256")
    if source.is_dir():
        for path in _folder_candidates(source):
            if _digest(path) == expected:
                return GameInput(source, path, "folder", expected)
        raise ValueError("No supported USA v208 executable found in dump folder; include the game update dump")
    if not source.is_file():
        raise ValueError("Game input must be a dump folder, .wua archive or executable")
    if source.suffix.casefold() == ".wua":
        if not wua.reader_ready(root):
            if not prepare:
                raise wua.ReaderUnavailable("WUA reader is not installed; run python3 tools/game_input.py install-reader")
            wua.install_reader(root, compiler=compiler)
        entries = wua.candidates(source, root)
        if len(entries) > MAX_FOLDER_CANDIDATES:
            raise ValueError("Too many executable entries in WUA")
        for entry in sorted(entries, key=lambda item: _priority(item["path"])):
            size = entry["size"]
            if type(size) is not int or not 0 < size <= MAX_RPX_BYTES:
                raise ValueError("Invalid executable size in WUA")
            payload = wua.read_rpx(source, entry["path"], root)
            if len(payload) != size or len(payload) > MAX_RPX_BYTES:
                raise ValueError("Truncated or oversized executable in WUA")
            if hashlib.sha256(payload).hexdigest() != expected:
                continue
            cache = _cache_path(root, expected)
            if prepare:
                _store(payload, cache, expected, root)
            return GameInput(source, cache, "wua", expected, entry["path"])
        raise ValueError("WUA has no supported USA v208 executable; include the correct game update")
    if source.suffix.casefold() in (".wud", ".wux", ".app", ".h3"):
        raise ValueError("Use a decrypted Dumpling dump folder or .wua; encrypted dumps need a different dumping method")
    if _digest(source) != expected:
        raise ValueError("RPX SHA-256 does not match the supported USA Wii U v208 executable")
    return GameInput(source, source, "rpx", expected)
