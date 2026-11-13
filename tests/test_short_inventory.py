import contextlib
import hashlib
import importlib.util
import io
import json
import os
from pathlib import Path
import struct
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp.inventory import discover
from botw_decomp.rpx import parse
from botw_decomp.short_inventory import discover_extended
from tests.test_rpx import START, make_rpx


LI, NOP, BLR = 0x38600007, 0x60000000, 0x4E800020
spec = importlib.util.spec_from_file_location(
    "local_inventory", Path(__file__).resolve().parents[1] / "tools/inventory.py")
inventory_cli = importlib.util.module_from_spec(spec)
spec.loader.exec_module(inventory_cli)


def branch(site: int, target: int, link: bool = False) -> int:
    return 0x48000000 | ((target - site) & 0x03FFFFFC) | int(link)


def image(words: list[int], relocations=()):
    code = b"".join(struct.pack(">I", word) for word in words)
    return parse(make_rpx(code, relocations))


def fixture(helper=(LI, None), target=(LI, BLR), call_target=True) -> list[int]:
    words = [branch(0, 16, True), branch(4, 32, True) if call_target else NOP,
             BLR, NOP, *helper]
    words += [NOP] * (8 - len(words))
    words += list(target)
    return [branch(index * 4, 32) if word is None else word
            for index, word in enumerate(words)]


def additions(original, **options):
    rows, summary = discover_extended(original, **options)
    return {row["address"]: row for row in rows if "discovery_evidence" in row}, summary


class ShortInventoryTests(unittest.TestCase):
    def test_disabled_is_identical_to_canonical_default(self):
        for words in (fixture(), fixture(helper=(BLR,)), fixture(helper=(0x4E800420,))):
            original = image(words)
            rows, summary = discover_extended(original)
            self.assertEqual(rows, discover(original))
            self.assertFalse(summary["enabled"])

    def test_direct_tail_has_exact_span_hash_and_binding(self):
        original = image(fixture())
        baseline = discover(original)
        combined, _ = discover_extended(original, short_tails=True)
        self.assertEqual(combined[:len(baseline)], baseline)
        rows, _ = additions(original, short_tails=True)
        row = rows[f"0x{START + 16:08x}"]
        self.assertEqual(row["size"], 8)
        self.assertEqual(row["sha256"], hashlib.sha256(original.read(START + 16, 8)).hexdigest())
        self.assertEqual(row["bindings"], {f"fn_{START + 32:08x}": f"0x{START + 32:08x}"})
        self.assertEqual(row["discovery_evidence"]["tail_target_proof"], "baseline bounded body")

    def test_single_branch_tail_has_no_padding_in_span(self):
        rows, _ = additions(image(fixture(helper=(branch(16, 32),))), short_tails=True)
        self.assertEqual(rows[f"0x{START + 16:08x}"]["size"], 4)

    def test_relocated_link_does_not_establish_target(self):
        original = image(fixture(), [(START + 6, 4)])
        self.assertFalse(additions(original, short_tails=True, tail_target_policy="direct-call")[0])

    def test_tail_cycle_cannot_bootstrap_target_proofs(self):
        words = fixture(helper=(branch(16, 32),), target=(branch(32, 16),))
        self.assertFalse(additions(image(words), short_tails=True, tail_target_policy="direct-call")[0])

    def test_four_byte_leaf_is_opt_in_and_does_not_infer_identity(self):
        original = image(fixture(helper=(BLR,)))
        self.assertFalse(additions(original, short_tails=True)[0])
        rows, _ = additions(original, blr_leaves=True)
        row = rows[f"0x{START + 16:08x}"]
        self.assertEqual(row["size"], 4)
        self.assertEqual(row["bindings"], {})
        self.assertIn("no original C++ ABI", row["discovery_evidence"]["limitations"])

    def test_unknown_target_is_not_invented_by_tail(self):
        original = image(fixture(call_target=False))
        self.assertFalse(additions(original, short_tails=True, tail_target_policy="direct-call")[0])

    def test_outside_executable_target_is_rejected(self):
        original = image(fixture(helper=(LI, branch(20, 0x1000))))
        self.assertFalse(additions(original, short_tails=True, tail_target_policy="direct-call")[0])

    def test_indirect_tail_is_rejected(self):
        for word in (0x4E800420, 0x4E800421, 0x4E800021):
            with self.subTest(word=hex(word)):
                self.assertFalse(additions(image(fixture(helper=(LI, word))), short_tails=True)[0])

    def test_conditional_external_branch_is_rejected(self):
        self.assertFalse(additions(image(fixture(helper=(LI, 0x4182000C))), short_tails=True)[0])

    def test_interior_unlinked_target_blocks_candidate(self):
        words = fixture()
        words[3] = branch(12, 20)
        self.assertNotIn(f"0x{START + 16:08x}", additions(image(words), short_tails=True)[0])

    def test_interior_entry_blocks_candidate(self):
        words = fixture()
        words[3] = branch(12, 20, True)
        self.assertNotIn(f"0x{START + 16:08x}", additions(image(words), short_tails=True)[0])

    def test_overlapping_adapters_keep_only_independently_called_inner_span(self):
        words = [branch(0, 16, True), branch(4, 20, True), branch(8, 40, True),
                 BLR, LI, LI, branch(24, 40), NOP, NOP, NOP, LI, BLR]
        rows, summary = additions(image(words), short_tails=True)
        self.assertEqual(set(rows), {f"0x{START + 20:08x}"})
        self.assertEqual(rows[f"0x{START + 20:08x}"]["size"], 8)
        self.assertEqual(rows[f"0x{START + 20:08x}"]["bindings"],
                         {f"fn_{START + 40:08x}": f"0x{START + 40:08x}"})
        self.assertEqual(summary["rejected"]["interior direct target"], 1)
        self.assertEqual(summary["additions"], 1)

    def test_candidate_prefix_and_branch_relocations_reject(self):
        for site in (START + 18, START + 22):
            with self.subTest(site=hex(site)):
                original = image(fixture(), [(site, 4)])
                self.assertNotIn(f"0x{START + 16:08x}", additions(original, short_tails=True)[0])

    def test_leaf_relocation_rejects(self):
        original = image(fixture(helper=(BLR,)), [(START + 18, 4)])
        self.assertFalse(additions(original, blr_leaves=True)[0])

    def test_invalid_target_entry_is_not_proven_by_a_call(self):
        for word in (0, 0x4E800420, 0x44000002):
            with self.subTest(word=hex(word)):
                original = image(fixture(target=(word, BLR)))
                self.assertFalse(additions(original, short_tails=True, tail_target_policy="direct-call")[0])

    def test_target_entry_relocation_rejects(self):
        original = image(fixture(), [(START + 34, 4)])
        self.assertFalse(additions(original, short_tails=True, tail_target_policy="direct-call")[0])

    def test_target_body_relocation_requires_weaker_explicit_policy(self):
        original = image(fixture(target=(LI, NOP, BLR)), [(START + 38, 4)])
        self.assertFalse(additions(original, short_tails=True)[0])
        rows, _ = additions(original, short_tails=True, tail_target_policy="direct-call")
        self.assertEqual(rows[f"0x{START + 16:08x}"]["discovery_evidence"]["tail_target_proof"],
                         "independent direct-call entry only")

    def test_tail_to_single_blr_has_complete_target_body(self):
        rows, _ = additions(image(fixture(target=(BLR,))), short_tails=True)
        self.assertEqual(rows[f"0x{START + 16:08x}"]["discovery_evidence"]["tail_target_proof"],
                         "single-blr body")

    def test_limit_and_invalid_instruction_reject(self):
        self.assertFalse(additions(image(fixture(helper=(LI, NOP, None))),
                                   short_tails=True, max_size=8)[0])
        for word in (0, 0x44000002, 0x7C0803A6, 0xE0230008):
            with self.subTest(word=hex(word)):
                self.assertFalse(additions(image(fixture(helper=(word, None))), short_tails=True)[0])

    def test_linked_jump_is_never_tail_extension(self):
        rows, _ = additions(image(fixture(helper=(LI, branch(20, 32, True)))), short_tails=True)
        self.assertFalse(rows)

    def test_malformed_text_and_entry_fail_closed(self):
        for original in (parse(make_rpx(b"abc")),
                         parse(make_rpx(entry=START + 1))):
            with self.subTest(entry=original.entry), self.assertRaises(ValueError):
                discover_extended(original, short_tails=True, blr_leaves=True)

    def test_invalid_options_fail_closed(self):
        original = image(fixture())
        for options in ({"max_size": True}, {"max_size": 0}, {"max_size": 6},
                        {"max_size": 260}, {"short_tails": 1}, {"blr_leaves": 1},
                        {"tail_target_policy": "anything"}):
            with self.subTest(options=options), self.assertRaises(ValueError):
                discover_extended(original, **options)


class InventoryCliTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.original = make_rpx(b"".join(struct.pack(">I", word) for word in fixture()))
        self.rpx = self.root / "U-King.rpx"
        self.rpx.write_bytes(self.original)
        (self.root / "config").mkdir()
        (self.root / "config/target.json").write_text(json.dumps({
            "rpx_sha256": hashlib.sha256(self.original).hexdigest(),
        }))
        (self.root / ".local").mkdir()
        (self.root / ".local/config.json").write_text(json.dumps({"rpx": str(self.rpx)}))
        self.root_patch = patch.object(inventory_cli.project, "ROOT", self.root)
        self.root_patch.start()
        self.addCleanup(self.root_patch.stop)
        self.config_patch = patch.object(inventory_cli.project, "local_config", return_value={"rpx": str(self.rpx)})
        self.config_patch.start()
        self.addCleanup(self.config_patch.stop)

    def run_cli(self, *arguments):
        stdout, stderr = io.StringIO(), io.StringIO()
        with contextlib.redirect_stdout(stdout), contextlib.redirect_stderr(stderr):
            status = inventory_cli.main(list(arguments))
        return status, stdout.getvalue(), stderr.getvalue()

    def test_default_cli_rows_equal_canonical_inventory(self):
        status, stdout, stderr = self.run_cli()
        self.assertEqual(status, 0)
        self.assertEqual(stderr, "")
        self.assertEqual(json.loads(stdout)["functions"], discover(parse(self.original)))

    def test_policy_alone_does_not_enable_discovery(self):
        status, stdout, stderr = self.run_cli("--tail-target-policy", "direct-call")
        self.assertEqual((status, stderr), (0, ""))
        report = json.loads(stdout)
        self.assertEqual(report["functions"], discover(parse(self.original)))
        self.assertFalse(report["summary"]["enabled"])

    def test_output_cannot_overwrite_rpx_through_path_symlink_or_hardlink(self):
        symlink = self.root / "alias.rpx"
        symlink.symlink_to(self.rpx)
        hardlink = self.root / "hardlink.rpx"
        os.link(self.rpx, hardlink)
        for output in (self.rpx, symlink, hardlink):
            with self.subTest(output=output):
                status, stdout, stderr = self.run_cli("--output", str(output))
                self.assertEqual((status, stdout), (2, ""))
                self.assertIn("must not overwrite", json.loads(stderr)["error"])
                self.assertEqual(self.rpx.read_bytes(), self.original)

    def test_explicit_flags_and_output_file(self):
        output = self.root / ".local/nested/inventory.json"
        status, stdout, stderr = self.run_cli(
            "--rpx", str(self.rpx), "--short-tails", "--blr-leaves",
            "--tail-target-policy", "direct-call", "--max-size", "32", "--output", str(output))
        self.assertEqual((status, stdout, stderr), (0, "", ""))
        report = json.loads(output.read_text())
        self.assertEqual(report["summary"]["additions"], 1)
        self.assertEqual(report["options"]["tail_target_policy"], "direct-call")
        self.assertEqual(report["options"]["max_size"], 32)

    def test_wrong_original_hash_fails_without_output(self):
        self.rpx.write_bytes(self.original + b"changed")
        output = self.root / "output.json"
        status, stdout, stderr = self.run_cli("--output", str(output))
        self.assertEqual((status, stdout), (2, ""))
        self.assertIn("wrong RPX", json.loads(stderr)["error"])
        self.assertFalse(output.exists())

    def test_malformed_hash_pinned_image_fails_without_output(self):
        malformed = b"not an RPX"
        self.rpx.write_bytes(malformed)
        (self.root / "config/target.json").write_text(json.dumps({
            "rpx_sha256": hashlib.sha256(malformed).hexdigest(),
        }))
        status, stdout, stderr = self.run_cli()
        self.assertEqual((status, stdout), (2, ""))
        self.assertIn("expected ELF32", json.loads(stderr)["error"])

    def test_invalid_flags_are_rejected_by_argument_parser(self):
        for arguments in (("--tail-target-policy", "unknown"),
                          ("--max-size", "not-an-integer"), ("--unknown",)):
            with self.subTest(arguments=arguments), self.assertRaises(SystemExit) as raised:
                self.run_cli(*arguments)
            self.assertEqual(raised.exception.code, 2)

    def test_invalid_span_limit_is_reported_as_json_error(self):
        status, stdout, stderr = self.run_cli("--max-size", "6")
        self.assertEqual((status, stdout), (2, ""))
        self.assertIn("max_size", json.loads(stderr)["error"])


if __name__ == "__main__":
    unittest.main()
