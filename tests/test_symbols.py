import copy
from contextlib import redirect_stderr, redirect_stdout
import importlib.util
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import symbols

spec = importlib.util.spec_from_file_location("symbols_cli", Path(__file__).resolve().parents[1] / "tools/symbols.py")
cli = importlib.util.module_from_spec(spec)
spec.loader.exec_module(cli)


class SymbolsTests(unittest.TestCase):
    def setUp(self):
        self.functions = {"fn_03000000": {}, "fn_03000004": {}}
        self.record = {"function": "fn_03000000", "name": "local::copyValues",
                       "kind": "descriptive", "status": "proposed",
                       "evidence": ["Caller fn_03000004 passes two buffers."],
                       "rationale": "Describes observed copying; owning class is unknown."}
        self.catalog = {"schema_version": 1, "functions": [self.record]}

    def test_empty_and_overloaded_names_preserve_stable_ids(self):
        self.assertEqual(symbols.validate({"schema_version": 1, "functions": []}, self.functions), {})
        other = dict(self.record, function="fn_03000004")
        self.catalog["functions"].append(other)
        self.assertEqual(set(symbols.validate(self.catalog, self.functions)), set(self.functions))

    def test_original_reviewed_is_metadata_not_machine_verified_identity(self):
        self.record.update(kind="original", status="reviewed")
        self.assertEqual(symbols.validate(self.catalog, self.functions)["fn_03000000"], self.record)

    def test_invalid_records_fail_closed(self):
        cases = [("function", "fn_03000008"), ("function", 1), ("name", "bad-name"),
                 ("name", "thing::class"), ("name", "copy()"), ("name", ""),
                 ("kind", []), ("kind", "known"), ("status", {}), ("status", "accepted"),
                 ("evidence", []), ("evidence", "url"), ("evidence", [3]),
                 ("evidence", ["\x1b[31m"]), ("rationale", "  "),
                 ("rationale", "hidden\u202econtrol"), ("rationale", None)]
        for field, value in cases:
            with self.subTest(field=field, value=value):
                catalog = copy.deepcopy(self.catalog)
                catalog["functions"][0][field] = value
                with self.assertRaises(ValueError):
                    symbols.validate(catalog, self.functions)

    def test_schema_unknown_fields_and_duplicates_fail(self):
        for catalog in ([], {"schema_version": True, "functions": []},
                        {"schema_version": 1, "functions": {}},
                        dict(self.catalog, extra=True),
                        {"schema_version": 1, "functions": [dict(self.record, extra=True)]},
                        {"schema_version": 1, "functions": [self.record, self.record]}):
            with self.subTest(catalog=catalog), self.assertRaises(ValueError):
                symbols.validate(catalog, self.functions)

    def test_loader_rejects_duplicate_json_fields(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "config").mkdir()
            (root / "config/symbols.json").write_text('{"schema_version":1,"schema_version":1,"functions":[]}')
            with self.assertRaisesRegex(ValueError, "duplicate JSON field"):
                symbols.load(root)

    def test_cli_lists_status_and_reports_consistency_separately(self):
        with patch.object(symbols, "load", return_value={self.record["function"]: self.record}), \
             patch.object(cli.project, "functions", return_value=self.functions):
            output = io.StringIO()
            with redirect_stdout(output):
                self.assertEqual(cli.main(["list", "--function", "fn_03000000"]), 0)
            self.assertEqual(json.loads(output.getvalue())[0]["status"], "proposed")
            output = io.StringIO()
            with redirect_stdout(output):
                self.assertEqual(cli.main(["check"]), 0)
            self.assertTrue(json.loads(output.getvalue())["consistent"])
            with redirect_stderr(io.StringIO()):
                self.assertEqual(cli.main(["list", "--function", "fn_09999999"]), 1)

    def test_repository_catalog_is_valid(self):
        self.assertIsInstance(symbols.load(), dict)
