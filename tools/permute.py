#!/usr/bin/env python3
"""Search source variants of a near miss with decomp-permuter; never accept one.

decomp.py check remains the only acceptance. The best candidate is written to
.local/permuter/FUNCTION/best.cpp with a JSON summary beside it.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shlex
import shutil
import signal
import subprocess
import sys
import tempfile
import time

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "src"))
from botw_decomp import compiler, permuter, project
from botw_decomp.cli import verify
from botw_decomp.disassembly import _wrap
from botw_decomp.elf import parse_object
from botw_decomp.rpx import load, reference_bytes

ROOT = project.ROOT


def compile_candidate(job: Path, source: Path, output: Path) -> int:
    """compile.sh entry point: checker compile, then bindings-resolved bytes."""
    settings = json.loads((job / "job.json").read_text(encoding="utf-8"))
    with tempfile.TemporaryDirectory(prefix="botw-permute-") as temporary:
        candidate = Path(temporary) / "candidate.cpp"
        candidate.write_text(source.read_text(encoding="utf-8"), encoding="utf-8")
        obj = compiler.compile_source(settings["compiler"], candidate, ROOT / "include", settings["profile"])
    bindings = {name: int(value, 16) for name, value in settings["bindings"].items()}
    code = permuter.resolve_for_score(obj, settings["symbol"], int(settings["address"], 16), bindings)
    output.write_bytes(_wrap(code, settings["symbol"]))
    return 0


def objdump(address: str, path: Path) -> int:
    """objdump_command entry point for upstream's scorer."""
    obj = parse_object(path.read_bytes())
    symbol = next(item for item in obj.symbols if item.section_index == 1 and item.size)
    code = obj.sections[1].data[symbol.value:symbol.value + symbol.size]
    sys.stdout.write(permuter.objdump_rows(permuter.disassemble(code, int(address, 16), symbol.name)))
    return 0


def run(command: list[str], log: Path, seconds: float | None, cwd: Path) -> float:
    started = time.monotonic()
    with log.open("w", encoding="utf-8") as stream:
        process = subprocess.Popen(command, cwd=cwd, stdout=stream, stderr=subprocess.STDOUT,
                                   start_new_session=True)
        try:
            process.wait(timeout=seconds)
        except subprocess.TimeoutExpired:
            os.killpg(process.pid, signal.SIGINT)
            try:
                process.wait(timeout=20)
            except subprocess.TimeoutExpired:
                os.killpg(process.pid, signal.SIGKILL)
                process.wait()
        except BaseException:
            os.killpg(process.pid, signal.SIGKILL)
            raise
    return time.monotonic() - started


def prepare(job: Path, row: dict, original: bytes, base: str, settings: dict, profile: str):
    if job.exists():
        shutil.rmtree(job)
    job.mkdir(parents=True)
    (job / "base.c").write_text(base, encoding="utf-8")
    (job / "target.o").write_bytes(_wrap(original, row["symbol"]))
    bindings = {**row.get("bindings", {}), **row.get("data_bindings", {})}
    (job / "job.json").write_text(json.dumps({
        "symbol": row["symbol"], "address": row["address"], "bindings": bindings,
        "compiler": settings["compiler"], "profile": profile}, indent=2) + "\n", encoding="utf-8")
    tool = [sys.executable, str(Path(__file__).resolve())]
    (job / "compile.sh").write_text(
        "#!/bin/bash\nexec " + shlex.join([*tool, "--compile-candidate", str(job)]) + ' "$@"\n', encoding="utf-8")
    (job / "compile.sh").chmod(0o755)
    objdump_command = shlex.join([*tool, "--objdump", row["address"]])
    (job / "settings.toml").write_text(
        f'func_name = "{row["symbol"]}"\ncompiler_type = "base"\nobjdump_command = {json.dumps(objdump_command)}\n',
        encoding="utf-8")


def set_profile(job: Path, profile: str):
    path = job / "job.json"
    settings = json.loads(path.read_text(encoding="utf-8"))
    settings["profile"] = profile
    path.write_text(json.dumps(settings, indent=2) + "\n", encoding="utf-8")


def upstream(job: Path, *arguments: str) -> list[str]:
    return [str(permuter.python_executable()), str(permuter.tool_directory() / "permuter.py"),
            str(job), "--stack-diffs", *arguments]


def best_output(job: Path) -> tuple[int, Path] | None:
    found = []
    for directory in job.glob("output-*"):
        match = re.fullmatch(r"output-(\d+)-(\d+)", directory.name)
        if match and (directory / "source.c").is_file():
            found.append((int(match[1]), int(match[2]), directory))
    if not found:
        return None
    score, _, directory = min(found)
    return score, directory / "source.c"


def main(argv=None) -> int:
    argv = sys.argv[1:] if argv is None else argv
    if argv[:1] == ["--compile-candidate"] and len(argv) == 5 and argv[3] == "-o":
        try:
            return compile_candidate(Path(argv[1]), Path(argv[2]), Path(argv[4]))
        except (ValueError, OSError, subprocess.SubprocessError) as error:
            print(error, file=sys.stderr)
            return 1
    if argv[:1] == ["--objdump"] and len(argv) == 3:
        return objdump(argv[1], Path(argv[2]))
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("function")
    parser.add_argument("--source", type=Path, required=True, help="near-miss source to permute")
    parser.add_argument("--minutes", type=float, default=10, help="wall-clock budget (default 10)")
    parser.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 2) // 2), help="permuter worker threads")
    parser.add_argument("--profile", help="compiler profile; default: the reference's, or the closest auto profile")
    args = parser.parse_args(argv)
    try:
        if args.minutes <= 0 or args.jobs <= 0:
            raise ValueError("--minutes and --jobs must be positive")
        rows = project.functions()
        row = rows.get(args.function)
        if row is None:
            raise ValueError("unknown function")
        if row.get("compile_with"):
            raise ValueError("compilation sets are not supported; permute a single-function reference")
        allowed = compiler.profiles(row)
        profiles = [args.profile] if args.profile else allowed
        if any(profile not in allowed for profile in profiles):
            raise ValueError(f"profile not allowed for this reference: {args.profile}")
        if not permuter.installed():
            print(json.dumps({"installing": permuter.REPOSITORY, "commit": permuter.COMMIT}), file=sys.stderr)
            permuter.install()
        settings = project.local_config()
        target = project.read_json(ROOT / "config/target.json")
        image = load(Path(settings["rpx"]), target["rpx_sha256"])
        original = reference_bytes(image, row)
        if hashlib.sha256(original).hexdigest() != row["sha256"]:
            raise ValueError("reference manifest disagrees with supplied RPX")
        source = args.source.resolve()
        expanded = permuter.preprocess(source, ROOT / "include", profiles[0])
        bridge = permuter.build_base(expanded, row["symbol"])

        output = ROOT / ".local/permuter" / row["id"]
        job = output / "job"
        prepare(job, row, original, bridge["base"], settings, profiles[0])
        scores = {}
        for profile in profiles:
            set_profile(job, profile)
            probe = job / "probe"
            probe.mkdir(exist_ok=True)
            run(upstream(job, "--debug"), output / "probe.log", 300, probe)
            log = (output / "probe.log").read_text(encoding="utf-8", errors="replace")
            scores[profile] = permuter.status(log)["base_score"]
            shutil.rmtree(probe)
            if scores[profile] is None and len(profiles) == 1:
                raise ValueError("permuter could not score the base source:\n" + log[-4000:])
        usable = {profile: score for profile, score in scores.items() if score is not None}
        if not usable:
            raise ValueError("permuter could not score the base source with any profile:\n" + log[-4000:])
        profile = min(usable, key=lambda item: (usable[item], profiles.index(item)))
        set_profile(job, profile)
        (output / "probe.log").unlink()

        elapsed = 0.0
        if usable[profile]:
            elapsed = run(upstream(job, "-j", str(args.jobs), "--stop-on-zero", "--best-only"),
                          output / "permuter.log", args.minutes * 60, job)
        log = (output / "permuter.log").read_text(encoding="utf-8", errors="replace") if elapsed else ""
        progress = permuter.status(log)
        best = best_output(job)
        best_score = usable[profile]
        best_path = output / "best.cpp"
        original_text = source.read_text(encoding="utf-8")
        if best and best[0] <= best_score:
            best_score = best[0]
            text = permuter.decode_pragmas(best[1].read_text(encoding="utf-8"))
            best_path.write_text(permuter.splice(original_text, text, row["symbol"],
                                                 bridge["prototype"], bridge["epilogue"]), encoding="utf-8")
        else:
            best_path.write_text(original_text, encoding="utf-8")
        checked = verify(row, settings["compiler"], root=ROOT, image=image, source=best_path, references=rows)
        summary = {
            "function": row["id"], "source": str(args.source), "best_source": str(best_path.relative_to(ROOT)),
            "compiler_profile": profile, "profile_scores": scores,
            "start_score": usable[profile], "best_score": best_score, "reached_zero": best_score == 0,
            "iterations": progress["iterations"], "compile_errors": progress["errors"],
            "minutes": round(elapsed / 60, 2), "jobs": args.jobs,
            "check": {key: checked.get(key) for key in ("matched", "status", "reason", "compiler_profile")},
            "permuter_commit": permuter.COMMIT,
            "acceptance": "Score is a search heuristic. Only decomp.py check accepts a source.",
        }
        project.write_json(output / "summary.json", summary)
        print(json.dumps(summary, indent=2, sort_keys=True))
        return 0 if checked.get("matched") else 1
    except (ValueError, KeyError, OSError, subprocess.SubprocessError) as error:
        print(json.dumps({"status": "error", "reason": str(error)}), file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
