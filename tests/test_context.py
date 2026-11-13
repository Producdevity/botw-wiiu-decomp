from dataclasses import replace
import hashlib
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import cli
from botw_decomp.context import PREVIEW_LIMIT, preview_bytes, write_context
from botw_decomp.rpx import RpxError, Section, parse
from tests.test_rpx import START, make_rpx


CODE = bytes.fromhex("60000000") * 128


def row(address, code, bindings=None):
    symbol = f"fn_{address:08x}"
    return {"id": symbol, "symbol": symbol, "address": f"0x{address:08x}",
            "size": len(code), "sha256": hashlib.sha256(code).hexdigest(),
            "source": f"reconstructions/{symbol}.cpp", "bindings": bindings or {}}


class ContextTests(unittest.TestCase):
    def test_unknown_preview_is_capped_and_clipped_to_text(self):
        image = parse(make_rpx(code=CODE))
        self.assertEqual(preview_bytes(image, START)[0], CODE[:PREVIEW_LIMIT])
        self.assertEqual(preview_bytes(image, START + len(CODE) - 8)[0], CODE[-8:])

    def test_unknown_preview_preserves_bytes_and_annotates_relocations(self):
        image = parse(make_rpx(code=CODE, relocations=[(START + 2, 4), (START + 8, 1)]))
        data, relocations = preview_bytes(image, START, 8)
        self.assertEqual(data, CODE[:8])
        self.assertEqual(relocations, [{"address": f"0x{START + 2:08x}", "width": 2}])
        with self.assertRaisesRegex(RpxError, "canonicalisation"):
            image.read(START, 8)

    def test_invalid_addresses_and_limits_are_rejected(self):
        image = parse(make_rpx(code=CODE))
        for address in (-4, START + 2, True, START - 4, START + len(CODE), 1 << 32):
            with self.subTest(address=address), self.assertRaises(RpxError):
                preview_bytes(image, address)
        for limit in (-4, 0, 2, 260, True, 4.0):
            with self.subTest(limit=limit), self.assertRaises(RpxError):
                preview_bytes(image, START, limit)

    def test_imports_and_other_executable_sections_are_not_previews(self):
        image = parse(make_rpx(code=CODE))
        text = image.sections[1]
        for changed in (replace(text, name=".imports"), replace(text, flags=2),
                        replace(text, kind=8)):
            with self.subTest(section=changed.name), self.assertRaisesRegex(RpxError, "exactly one executable .text"):
                preview_bytes(replace(image, sections=(changed,)), START)

    def test_overlapping_sections_are_rejected(self):
        image = parse(make_rpx(code=CODE))
        for extra in (replace(image.sections[1], index=2),
                      Section(2, ".data", 1, 2, START + 8, 4, b"abcd")):
            with self.subTest(section=extra.name), self.assertRaises(RpxError):
                preview_bytes(replace(image, sections=(*image.sections, extra)), START)

    def test_misaligned_or_out_of_range_text_is_rejected(self):
        image = parse(make_rpx(code=CODE))
        text = image.sections[1]
        for changed, address in ((replace(text, address=START - 2), START),
                                 (replace(text, data=CODE[:-1]), START),
                                 (replace(text, address=0xFFFFFF00), 0xFFFFFF00)):
            with self.subTest(address=address), self.assertRaises(RpxError):
                preview_bytes(replace(image, sections=(changed,)), address)

    def test_context_links_sources_headers_and_hash_verified_full_callee(self):
        target = row(START, CODE[:8], {f"fn_{START + 8:08x}": f"0x{START + 8:08x}"})
        callee = row(START + 8, CODE[8:400])
        caller = row(START + 400, CODE[400:408], {target["id"]: hex(START)})
        rows = {item["id"]: item for item in (target, callee, caller)}
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "include/botw").mkdir(parents=True)
            (root / "include/botw/types.h").write_text("struct Pair;\n")
            (root / "reconstructions").mkdir()
            (root / callee["source"]).write_text("void callee();\n")
            packet = root / ".local/packets" / target["id"]
            with patch("botw_decomp.context.disassemble", return_value="synthetic\n") as disasm:
                result = write_context(root, packet, target, rows, parse(make_rpx(code=CODE)))
            self.assertTrue((packet / "context.json").is_file())
            self.assertEqual(result["shared_headers"], ["include/botw/types.h"])
            self.assertEqual(result["callers"][0]["id"], caller["id"])
            self.assertTrue(result["callees"][0]["source_exists"])
            self.assertEqual(result["callees"][0]["preview_label"], "VERIFIED_MANIFEST_SPAN")
            self.assertEqual(disasm.call_args.args[0], CODE[8:400])

    def test_unknown_boundary_clips_at_next_manifest_span_and_labels_relocations(self):
        callee = START + 8
        target = row(START, CODE[:8], {f"fn_{callee:08x}": hex(callee)})
        next_known = row(START + 20, CODE[20:28])
        image = parse(make_rpx(code=CODE, relocations=[(callee + 2, 4)]))
        with tempfile.TemporaryDirectory() as directory:
            packet = Path(directory) / ".local/packets" / target["id"]
            with patch("botw_decomp.context.disassemble", return_value="synthetic\n") as disasm:
                result = write_context(Path(directory), packet, target,
                                       {r["id"]: r for r in (target, next_known)}, image)
            item = result["callees"][0]
            self.assertEqual(disasm.call_args.args[0], CODE[8:20])
            self.assertEqual(item["preview_size"], 12)
            self.assertFalse(item["manifest_known"])
            text = (packet / item["preview"]).read_text()
            self.assertIn("UNVERIFIED_BOUNDARY", text)
            self.assertIn(f"ORIGINAL_RPX_RELOCATION 0x{callee + 2:08x} width=2", text)
            self.assertIn("no relocation applied or masked", text)

    def test_bad_known_reference_is_skipped_without_unverified_fallback(self):
        target = row(START, CODE[:8], {f"fn_{START + 8:08x}": hex(START + 8)})
        for image, callee in ((parse(make_rpx(code=CODE)), row(START + 8, b"bad!")),
                              (parse(make_rpx(code=CODE, relocations=[(START + 8, 1)])), row(START + 8, CODE[8:16]))):
            with self.subTest(callee=callee), tempfile.TemporaryDirectory() as directory:
                packet = Path(directory) / ".local/packets" / target["id"]
                with patch("botw_decomp.context.disassemble") as disasm:
                    result = write_context(Path(directory), packet, target,
                                           {r["id"]: r for r in (target, callee)}, image)
                self.assertIn("preview_skipped", result["callees"][0])
                disasm.assert_not_called()

    def test_skips_unknown_import_and_interior_manifest_addresses_and_removes_stale_preview(self):
        image = parse(make_rpx(code=CODE))
        known = row(START + 8, CODE[8:24])
        for callee in (START + len(CODE), START + 12):
            target = row(START, CODE[:8], {f"fn_{callee:08x}": hex(callee)})
            with self.subTest(callee=callee), tempfile.TemporaryDirectory() as directory:
                packet = Path(directory) / ".local/packets" / target["id"]
                stale = packet / "callees" / f"fn_{callee:08x}.txt"
                stale.parent.mkdir(parents=True)
                stale.write_text("old preview")
                with patch("botw_decomp.context.disassemble") as disasm:
                    result = write_context(Path(directory), packet, target,
                                           {r["id"]: r for r in (target, known)}, image)
                self.assertIn("preview_skipped", result["callees"][0])
                self.assertFalse(stale.exists())
                disasm.assert_not_called()

    def test_packet_keeps_exact_original_and_adds_private_context(self):
        target = row(START, CODE[:8])
        image = parse(make_rpx(code=CODE))
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            with patch.object(cli, "ROOT", root), patch.object(cli, "functions", return_value={target["id"]: target}), \
                    patch.object(cli, "read_json", return_value={"id": "test", "rpx_sha256": image.sha256}), \
                    patch.object(cli, "local_config", return_value={"rpx": "/private/original.rpx"}), \
                    patch.object(cli, "load", return_value=image), patch.object(cli, "disassemble", return_value="synthetic\n"), \
                    patch.object(cli, "emit"):
                self.assertEqual(cli.main(["packet", target["id"]]), 0)
            packet = root / ".local/packets" / target["id"]
            self.assertEqual((packet / "original.bin").read_bytes(), CODE[:8])
            self.assertTrue((packet / "task.json").is_file())
            self.assertTrue((packet / "context.json").is_file())

    def test_packet_rejects_target_hash_mismatch_before_context(self):
        target = row(START, b"bad!")
        image = parse(make_rpx(code=CODE))
        with patch.object(cli, "functions", return_value={target["id"]: target}), \
                patch.object(cli, "read_json", return_value={"id": "test", "rpx_sha256": image.sha256}), \
                patch.object(cli, "local_config", return_value={"rpx": "/private/original.rpx"}), \
                patch.object(cli, "load", return_value=image), patch.object(cli, "write_context") as context, \
                patch.object(cli, "emit"):
            self.assertEqual(cli.main(["packet", target["id"]]), 2)
        context.assert_not_called()


class BatchSummaryTests(unittest.TestCase):
    def setUp(self):
        first, second, third = (row(START + offset, CODE[:size])
                                for offset, size in ((0, 8), (8, 12), (20, 16)))
        self.rows = {r["id"]: r for r in (first, second, third)}
        self.ids = list(self.rows)
        self.catalog = {"schema_version": 1, "batches": [
            {"id": "bootstrap", "functions": self.ids[:2]},
            {"id": "larger-functions", "functions": self.ids[2:]},
        ]}

    def test_optional_catalog_preserves_existing_summary(self):
        result = cli.summary(self.rows, [{"function": self.ids[0], "matched": True}])
        self.assertEqual(result["pilot_functions"], 3)
        self.assertEqual(result["pilot_bytes"], 36)
        self.assertEqual(result["matched_bytes"], 8)
        self.assertNotIn("batches", result)

    def test_batch_totals_distinguish_catalog_from_this_invocation(self):
        results = [{"function": self.ids[0], "matched": True},
                   {"function": self.ids[1], "matched": False}]
        summary = cli.summary(self.rows, results, self.catalog)
        bootstrap, larger = summary["batches"]
        self.assertEqual({k: bootstrap[k] for k in ("functions", "bytes", "checked_functions", "checked_bytes", "matched_functions", "matched_bytes")},
                         {"functions": 2, "bytes": 20, "checked_functions": 2, "checked_bytes": 20, "matched_functions": 1, "matched_bytes": 8})
        self.assertEqual(larger["functions"], 1)
        self.assertEqual(larger["bytes"], 16)
        self.assertEqual(larger["checked_functions"], 0)
        self.assertEqual(larger["matched_bytes"], 0)
        self.assertIn("this invocation only", larger["scope"])

    def test_invalid_batch_membership_and_schema_fail_closed(self):
        cases = [[], {"schema_version": 1, "batches": [None]},
                 {"schema_version": 2, "batches": []},
                 {"schema_version": 1, "batches": {}},
                 {"schema_version": 1, "batches": [{"id": "a", "functions": ["fn_unknown"]}]},
                 {"schema_version": 1, "batches": [{"id": "a", "functions": [self.ids[0], self.ids[0]]}]},
                 {"schema_version": 1, "batches": [{"id": "a", "functions": [self.ids[0]]}, {"id": "b", "functions": [self.ids[0]]}]},
                 {"schema_version": 1, "batches": [{"id": "a", "functions": []}, {"id": "a", "functions": []}]}]
        for catalog in cases:
            with self.subTest(catalog=catalog), self.assertRaises(ValueError):
                cli.summary(self.rows, [], catalog)


if __name__ == "__main__":
    unittest.main()
