#!/usr/bin/env python3
"""Assess contributor setup without installing tools or changing local settings."""

from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import platform
import shutil
import subprocess
import sys

if __name__ == "__main__" and sys.version_info < (3, 11):
    print(json.dumps({"status": "action_required", "checks": [{"id": "python", "status": "action_required", "detail": platform.python_version()}],
                      "actions": [{"id": "python", "actor": "agent", "detail": "Install Python 3.11 or newer and rerun preflight"}]}))
    raise SystemExit(1)

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "src"))
from botw_decomp import compiler, contracts, disassembly


def probe(command: list[str]) -> subprocess.CompletedProcess:
    environment = os.environ.copy()
    environment.pop("CLICOLOR_FORCE", None)
    environment.pop("GH_FORCE_TTY", None)
    environment.update(CLICOLOR="0", NO_COLOR="1")
    return subprocess.run(command, capture_output=True, text=True, timeout=15, env=environment)


def assess(root: Path, rpx: Path | None = None, requested_compiler: str | None = None) -> dict:
    checks, actions = [], []

    def record(key, ready, detail, action=None, actor="agent", command=None):
        checks.append({"id": key, "status": "ready" if ready else "action_required", "detail": detail})
        if not ready:
            item = {"id": key, "actor": actor, "detail": action or detail}
            if command:
                item["command"] = command
            actions.append(item)

    python_ready = sys.version_info >= (3, 11)
    record("python", python_ready, platform.python_version(), "Install Python 3.11 or newer and rerun preflight")
    settings = {}
    settings_path = root / ".local/config.json"
    config_error = None
    if settings_path.exists():
        try:
            settings = json.loads(settings_path.read_text())
            if not isinstance(settings, dict):
                raise ValueError("configuration must be an object")
            if any(key in settings and (not isinstance(settings[key], str) or not settings[key])
                   for key in ("rpx", "compiler")):
                raise ValueError("configured RPX and compiler paths must be nonempty strings")
        except (OSError, ValueError) as error:
            settings, config_error = {}, str(error)

    cxx = None
    try:
        cxx = compiler.locate(requested_compiler or settings.get("compiler"))
        version = compiler.version(cxx)
        targets = probe([cxx, "--print-targets"])
        if targets.returncode or not any(line.split()[0] in ("ppc32", "powerpc")
                                         for line in targets.stdout.splitlines() if line.split()):
            raise ValueError("Clang does not advertise a 32-bit PowerPC target")
        record("clang_powerpc", True, version)
    except (OSError, ValueError, subprocess.SubprocessError) as error:
        record("clang_powerpc", False, str(error), "Install LLVM with PowerPC support; rerun with --compiler /path/to/clang++")
        cxx = None
    if cxx:
        try:
            library = contracts.locate_libclang(compiler=cxx, root=root)
            with contracts.ClangParser(libclang=library, compiler=cxx, root=root):
                pass
            record("libclang", True, library)
        except (OSError, ValueError) as error:
            record("libclang", False, str(error), "Install a compatible libclang for the selected LLVM; strict contract audit requires its C API")
    else:
        record("libclang", False, "Clang must be available before checking libclang", "Install LLVM and its compatible libclang, then rerun preflight")
    try:
        objdump = disassembly.locate()
        result = probe([objdump, "--version"])
        if result.returncode or "powerpc" not in result.stdout.lower():
            raise ValueError("llvm-objdump does not advertise PowerPC support")
        record("llvm_objdump", True, objdump)
    except (OSError, ValueError, subprocess.SubprocessError) as error:
        record("llvm_objdump", False, str(error), "Install LLVM and add its bin directory to PATH")

    gh = shutil.which("gh")
    if not gh:
        record("github", False, "GitHub CLI was not found", "Install GitHub CLI, then run gh auth login")
    else:
        try:
            result = probe([gh, "api", "user", "--jq", ".login"])
            if result.returncode or not result.stdout.strip():
                login_required = any(text in result.stderr.lower() for text in
                                     ("gh auth login", "http 401", "bad credentials", "not logged"))
                if login_required:
                    record("github", False, "GitHub login is required", "Complete GitHub CLI login in your own account", "user", ["gh", "auth", "login"])
                else:
                    record("github", False, "GitHub identity query failed", "Check network access and GitHub CLI configuration, then rerun preflight", command=["gh", "api", "user", "--jq", ".login"])
            else:
                record("github", True, result.stdout.strip())
        except (OSError, subprocess.SubprocessError):
            record("github", False, "GitHub identity query could not complete", "Check network access and GitHub CLI execution, then rerun preflight", command=["gh", "api", "user", "--jq", ".login"])

    for key in ("user.name", "user.email"):
        try:
            identity = probe(["git", "-C", str(root), "config", "--get", key])
            ready = identity.returncode == 0 and bool(identity.stdout.strip())
        except (OSError, subprocess.SubprocessError):
            ready = False
        record("git_" + key.removeprefix("user."), ready, "Configured" if ready else f"Git {key} is missing or unreadable",
               f"Provide and configure your own Git {key} before making a commit", "user")

    directory = root / ".local/toolchains/ghs-5.3.22"
    installed = ((directory / "wibo").is_file() and os.access(directory / "wibo", os.X_OK)
                 and (directory / "ghs/bin/cxppc.exe").is_file())
    supported = platform.system() == "Darwin" or (platform.system() == "Linux" and platform.machine().lower() in ("x86_64", "amd64"))
    action = ("Install the project's pinned GHS toolchain" if supported and not directory.exists()
              else "Inspect the existing incomplete GHS directory; preserve it before any repair" if directory.exists()
              else "Use a supported development host: macOS or x86-64 Linux")
    record("ghs", installed and supported, "GHS compiler and executable wibo present; compilation is checked separately" if installed and supported else "Unsupported development host" if not supported else "GHS compiler or runner missing",
           action, command=["python3", "tools/toolchain.py"] if supported and not directory.exists() else None)

    path = rpx or settings.get("rpx")
    rpx_ready = False
    if not path:
        record("rpx", False, "No RPX path supplied or configured", "Provide the path to your own Wii U v208 U-King.rpx", "user")
    else:
        path = Path(path).expanduser().resolve()
        try:
            if not path.is_file():
                raise ValueError("RPX path is not a regular file")
            target = json.loads((root / "config/target.json").read_text())
            digest = hashlib.sha256()
            with path.open("rb") as source:
                for chunk in iter(lambda: source.read(1024 * 1024), b""):
                    digest.update(chunk)
            if digest.hexdigest() != target["rpx_sha256"]:
                raise ValueError("RPX SHA-256 does not match the supported Wii U v208 original")
            rpx_ready = True
            record("rpx", True, "Supported RPX SHA-256 verified locally")
        except (OSError, ValueError, KeyError) as error:
            record("rpx", False, str(error), "Provide a readable path to your supported original RPX", "user")
    configured = (rpx_ready and cxx is not None and settings.get("rpx") == str(path)
                  and settings.get("compiler") == cxx and config_error is None)
    setup = ["python3", "tools/decomp.py", "setup", "--rpx", str(path), "--compiler", cxx] if rpx_ready and cxx else None
    record("configuration", configured, config_error or ("Local RPX and compiler configured" if configured else "Local setup is incomplete or differs from the supplied paths"),
           "After tool prerequisites pass, run setup then python3 tools/decomp.py doctor", command=setup)
    return {"status": "ready" if not actions else "action_required", "checks": checks, "actions": actions,
            "scope": "Read-only readiness assessment; doctor and exact-byte checks remain required"}


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rpx", type=Path, help="Your own supported Wii U v208 RPX; falls back to local setup")
    parser.add_argument("--compiler", help="Clang++ path; falls back to local setup and PATH")
    args = parser.parse_args(argv)
    result = assess(ROOT, args.rpx, args.compiler)
    print(json.dumps(result, indent=2))
    return 0 if result["status"] == "ready" else 1


if __name__ == "__main__":
    raise SystemExit(main())
