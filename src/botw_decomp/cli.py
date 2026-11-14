"""Local contributor commands and public hash verification."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys

from . import compiler, symbols
from .game_input import resolve_game
from .context import write_context
from .disassembly import disassemble
from .matching import compare_function, compare_function_hash, compare_function_set
from .project import ROOT, compilation_members, functions, local_config, read_json, write_json
from .rpx import load, reference_bytes


def emit(value):
    print(json.dumps(value, indent=2, sort_keys=True))


def verify(row: dict, cxx: str, root: Path = ROOT, image=None, source: Path | None = None, references: dict | None = None) -> dict:
    attempts = []
    for profile in compiler.profiles(row):
        result = verify_profile(row, cxx, root, image, source, profile, references)
        if result.get("matched"):
            return result
        attempts.append(result)
    return {**attempts[-1], "attempts": attempts} if len(attempts) > 1 else attempts[0]


def verify_profile(row: dict, cxx: str, root: Path, image, source: Path | None, profile: str, references: dict | None = None) -> dict:
    source = source or root / row["source"]
    result = {"function": row["id"], "compiler_profile": profile}
    if not source.is_file():
        return {**result, "status": "unimplemented", "matched": False}
    try:
        if row.get("compile_with"):
            members = compilation_members(row, functions(root) if references is None else references)
            paths = [source if member["id"] == row["id"] else root / member["source"] for member in members]
            obj = compiler.compile_sources(cxx, paths, root / "include", profile)
            originals = None if image is None else {member["symbol"]: reference_bytes(image, member) for member in members}
            group = compare_function_set(obj, members, originals)
            compared = next((item for item in group["results"] if item["symbol"] == row["symbol"]),
                            {"matched": False, "status": "rejected", "reason": group["reason"]})
            return {**result, **compared, "compiler": compiler.identity(cxx, profile),
                    "source_sha256": hashlib.sha256(source.read_bytes()).hexdigest(),
                    "compilation_set": [member["id"] for member in members],
                    "supporting_source_sha256": {member["id"]: hashlib.sha256(path.read_bytes()).hexdigest()
                                                 for member, path in zip(members, paths)},
                    "supporting_checks": [item for item in group["results"] if item["symbol"] != row["symbol"]]}
        obj = compiler.compile_source(cxx, source, root / "include", profile)
        address = int(row["address"], 16)
        bindings = {key: int(value, 16) for key, value in row.get("bindings", {}).items()}
        data_bindings = {key: int(value, 16) for key, value in row.get("data_bindings", {}).items()}
        if image is not None:
            original = reference_bytes(image, row)
            if hashlib.sha256(original).hexdigest() != row["sha256"]:
                raise ValueError("reference manifest disagrees with supplied RPX")
            compared = compare_function(obj, row["symbol"], original, address, bindings, data_bindings=data_bindings, data_relocations=row.get("data_relocations", []))
        else:
            compared = compare_function_hash(obj, row["symbol"], row["sha256"], row["size"], address, bindings, data_bindings=data_bindings, data_relocations=row.get("data_relocations", []))
        return {**result, **compared, "compiler": compiler.identity(cxx, profile),
                "source_sha256": hashlib.sha256(source.read_bytes()).hexdigest()}
    except (ValueError, OSError, subprocess.TimeoutExpired) as error:
        return {**result, "status": "rejected", "matched": False, "reason": str(error)}


def summary(rows: dict, results: list[dict], batches: dict | None = None) -> dict:
    matched = [r for r in results if r["matched"]]
    report = {"pilot_functions": len(rows), "implemented_functions": len(results),
              "matched_functions": len(matched),
              "matched_bytes": sum(rows[r["function"]]["size"] for r in matched),
              "pilot_bytes": sum(r["size"] for r in rows.values()),
              "scope": "pilot only; not whole-game completion", "results": results}
    if batches is not None:
        if (not isinstance(batches, dict) or batches.get("schema_version") != 1 or
                not isinstance(batches.get("batches"), list)):
            raise ValueError("unsupported batch catalog schema")
        batch_ids, assigned = set(), set()
        report["batches"] = []
        for batch in batches["batches"]:
            if not isinstance(batch, dict):
                raise ValueError("invalid batch entry")
            key, members = batch.get("id"), batch.get("functions")
            if (not isinstance(key, str) or not key or key in batch_ids or
                    not isinstance(members, list) or
                    any(not isinstance(member, str) or member not in rows for member in members) or
                    len(set(members)) != len(members) or assigned.intersection(members)):
                raise ValueError("invalid batch identifier or function membership")
            batch_ids.add(key)
            assigned.update(members)
            selected = [r for r in results if r["function"] in members]
            accepted = [r for r in selected if r["matched"]]
            report["batches"].append({
                "id": key, "functions": len(members),
                "bytes": sum(rows[member]["size"] for member in members),
                "checked_functions": len(selected),
                "checked_bytes": sum(rows[r["function"]]["size"] for r in selected),
                "matched_functions": len(accepted),
                "matched_bytes": sum(rows[r["function"]]["size"] for r in accepted),
                "scope": "checked and matched counts cover this invocation only; not whole-game completion",
            })
    return report


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest="command", required=True)
    setup = commands.add_parser("setup", help="select your dump executable and configure a local compiler")
    setup.add_argument("--game", "--rpx", dest="rpx", metavar="PATH", type=Path, required=True,
                       help="Your own dump folder, .wua archive or U-King.rpx")
    setup.add_argument("--compiler")
    commands.add_parser("doctor", help="check original, compiler and reference manifest")
    commands.add_parser("list", help="list pilot tasks without requiring the game")
    packet = commands.add_parser("packet", help="prepare private context from your original")
    packet.add_argument("function")
    check = commands.add_parser("check", help="compile and compare reconstructed functions")
    check.add_argument("function", nargs="?")
    check.add_argument("--all", action="store_true")
    check.add_argument("--source", type=Path)
    check.add_argument("--hash-only", action="store_true", help="use public hashes; no RPX required")
    check.add_argument("--compiler")
    check.add_argument("--summary", action="store_true", help="print totals and failures; keep the full report in .local/last-check.json")
    progress = commands.add_parser("progress", help="rebuild implementations and report pilot matches")
    progress.add_argument("--compiler")
    progress.add_argument("--summary", action="store_true", help="print totals and failures; keep the full report in .local/last-check.json")
    args = parser.parse_args(argv)
    try:
        rows = functions()
        target = read_json(ROOT / "config/target.json")
        if args.command == "setup":
            game = resolve_game(args.rpx, ROOT, prepare=True, compiler=args.compiler)
            image = load(game.rpx, target["rpx_sha256"])
            for row in rows.values():
                if hashlib.sha256(reference_bytes(image, row)).hexdigest() != row["sha256"]:
                    raise ValueError(f"reference disagrees with original: {row['id']}")
            cxx = compiler.locate(args.compiler)
            identity = compiler.version(cxx)
            profiles = {p for r in rows.values() for p in compiler.profiles(r)}
            identities = {profile: compiler.identity(cxx, profile) for profile in sorted(profiles)}
            write_json(ROOT / ".local/config.json", {"rpx": str(game.rpx), "game": str(game.source),
                       "compiler": cxx, "compiler_version": identity})
            emit({"status": "configured", "target": target["id"], "rpx_sha256": image.sha256, "input": game.describe(),
                  "compilers": identities, "verified_reference_functions": len(rows)})
            return 0
        if args.command == "list":
            emit({"target": target["id"], "functions": list(rows.values())})
            return 0
        if args.command == "doctor":
            settings = local_config()
            image = load(Path(settings["rpx"]), target["rpx_sha256"])
            identity = compiler.version(settings["compiler"])
            profiles = {p for r in rows.values() for p in compiler.profiles(r)}
            identities = {profile: compiler.identity(settings["compiler"], profile) for profile in sorted(profiles)}
            for row in rows.values():
                if hashlib.sha256(reference_bytes(image, row)).hexdigest() != row["sha256"]:
                    raise ValueError(f"reference disagrees with original: {row['id']}")
            emit({"status": "ready", "target": target["id"], "compilers": identities,
                  "reference_functions": len(rows), "gh_available": shutil.which("gh") is not None,
                  "historical_ghs_version": "unconfirmed"})
            return 0
        if args.command == "packet":
            row = rows.get(args.function)
            if row is None:
                raise ValueError("unknown function")
            semantic_name = symbols.load(ROOT).get(args.function)
            settings = local_config()
            image = load(Path(settings["rpx"]), target["rpx_sha256"])
            data = reference_bytes(image, row)
            if hashlib.sha256(data).hexdigest() != row["sha256"]:
                raise ValueError("reference mismatch")
            path = ROOT / ".local/packets" / args.function
            path.mkdir(parents=True, exist_ok=True)
            (path / "original.bin").write_bytes(data)
            (path / "disassembly.txt").write_text(disassemble(data, int(row["address"], 16), row["symbol"]), encoding="utf-8")
            write_json(path / "task.json", {**row, "target": target["id"], "semantic_name": semantic_name,
                       "compiler_profiles": {p: compiler.flags(p) for p in compiler.profiles(row)},
                       "local_only": "Do not publish original.bin, disassembly or compiled objects.",
                       "source_contract": "Reconstruct readable C++; use the exact exported symbol. Determine types from the original, not an invented stub."})
            write_context(ROOT, path, row, rows, image)
            emit({"packet": str(path), "context": str(path / "context.json"),
                  "source": row["source"], "symbol": row["symbol"]})
            return 0
        hash_only = args.command == "progress" or args.hash_only
        settings = {} if hash_only else local_config()
        cxx = compiler.locate(args.compiler or settings.get("compiler"))
        identity = compiler.version(cxx)
        image = None if hash_only else load(Path(settings["rpx"]), target["rpx_sha256"])
        all_requested = args.command == "progress" or args.all
        if all_requested:
            if getattr(args, "function", None) or getattr(args, "source", None):
                raise ValueError("--all cannot be combined with a function or source override")
            selected = [r for r in rows.values() if (ROOT / r["source"]).is_file()]
        else:
            if not args.function or args.function not in rows:
                raise ValueError("select a function or --all")
            selected = [rows[args.function]]
        if not selected:
            raise ValueError("no reconstructed sources selected")
        batch_path = ROOT / "config/batches.json"
        batches = read_json(batch_path) if batch_path.is_file() else None
        results = [verify(row, cxx, image=image, source=getattr(args, "source", None), references=rows) for row in selected]
        profiles = {p for r in selected for p in compiler.profiles(r)}
        report = {"target": target["id"], "compilers": {p: compiler.identity(cxx, p) for p in sorted(profiles)},
                  "reference": "public SHA-256" if hash_only else "local original bytes", **summary(rows, results, batches)}
        write_json(ROOT / ".local/last-check.json", report)
        if args.summary:
            emit({**{key: value for key, value in report.items() if key not in ("results", "batches")},
                  "failures": [result for result in results if not result["matched"]]})
        else:
            emit(report)
        return 0 if all(r["matched"] for r in results) else 1
    except (ValueError, KeyError, OSError, subprocess.TimeoutExpired) as error:
        emit({"status": "error", "reason": str(error)})
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
