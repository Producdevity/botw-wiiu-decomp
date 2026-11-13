import contextlib
import hashlib
import io
import json
from pathlib import Path
import tempfile
from types import SimpleNamespace
import unittest
from unittest.mock import patch

from botw_decomp import cli


class PacketNameTests(unittest.TestCase):
    def test_packet_keeps_symbol_and_bytes_with_proposed_or_absent_name(self):
        key = "fn_02000000"
        original = bytes.fromhex("4e800020")
        row = {"id": key, "address": "0x02000000", "size": 4,
               "sha256": hashlib.sha256(original).hexdigest(), "status": "unmatched",
               "symbol": key, "source": "reconstructions/" + key + ".cpp", "bindings": {}}
        name = {"function": key, "name": "Buffer::getStorage", "kind": "descriptive",
                "status": "proposed", "evidence": ["Synthetic caller evidence"],
                "rationale": "Fixture alias has not been reviewed."}
        for records in ([], [name]):
            with self.subTest(records=records), tempfile.TemporaryDirectory() as directory:
                root = Path(directory)
                (root / "config").mkdir()
                (root / "config/target.json").write_text(json.dumps({"id": "fixture", "rpx_sha256": "0" * 64}))
                (root / "config/functions.json").write_text(json.dumps({"schema_version": 1, "functions": [row]}))
                (root / "config/symbols.json").write_text(json.dumps({"schema_version": 1, "functions": records}))
                with patch.object(cli, "ROOT", root), patch.object(cli, "functions", return_value={key: row}), \
                     patch.object(cli, "local_config", return_value={"rpx": "private.rpx"}), \
                     patch.object(cli, "load", return_value=SimpleNamespace(read=lambda address, size: original)), \
                     patch.object(cli, "disassemble", return_value="private fixture"), \
                     patch.object(cli, "write_context"), contextlib.redirect_stdout(io.StringIO()):
                    self.assertEqual(cli.main(["packet", key]), 0)
                packet = root / ".local/packets" / key
                task = json.loads((packet / "task.json").read_text())
                self.assertEqual(task["semantic_name"], name if records else None)
                self.assertEqual(task["symbol"], key)
                self.assertEqual(task["sha256"], row["sha256"])
                self.assertEqual((packet / "original.bin").read_bytes(), original)
