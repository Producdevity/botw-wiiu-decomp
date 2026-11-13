from contextlib import redirect_stdout
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import cli, contracts


class ReportOutputTests(unittest.TestCase):
    def test_check_summary_still_checks_every_source_and_retains_failure(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / "config").mkdir()
            (root / "config/target.json").write_text(json.dumps({"id": "fixture"}))
            (root / "reconstructions").mkdir()
            rows = {}
            for number in range(2):
                key = f"fn_0200000{number * 4}"
                source = f"reconstructions/{key}.cpp"
                (root / source).write_text("fixture")
                rows[key] = {"id": key, "size": 4, "source": source}
            results = [{"function": key, "matched": index == 0, "reason": "exact" if index == 0 else "mismatch"}
                       for index, key in enumerate(rows)]
            output = io.StringIO()
            with patch.object(cli, "ROOT", root), patch.object(cli, "functions", return_value=rows), \
                 patch.object(cli.compiler, "locate", return_value="clang"), \
                 patch.object(cli.compiler, "version", return_value="fixture"), \
                 patch.object(cli.compiler, "identity", return_value="fixture"), \
                 patch.object(cli, "verify", side_effect=results) as verify, redirect_stdout(output):
                self.assertEqual(cli.main(["check", "--all", "--hash-only", "--summary"]), 1)
            compact = json.loads(output.getvalue())
            full = json.loads((root / ".local/last-check.json").read_text())
            self.assertEqual(verify.call_count, 2)
            self.assertEqual(compact["matched_functions"], 1)
            self.assertEqual(compact["failures"], results[1:])
            self.assertNotIn("results", compact)
            self.assertEqual(full["results"], results)

    def test_contract_summary_preserves_findings_exit_and_full_output(self):
        finding = {"kind": "parameter_count", "severity": "conflict"}
        report = {"schema_version": 1, "status": "findings", "coverage": {"binding_edges": 1},
                  "units": {"verbose": "details"}, "source_drift": [], "unsupported_files": [],
                  "edges": [{"caller": "fn_02000000", "callee": "fn_02000004", "status": "conflict",
                             "comparisons": [{"findings": [finding]}]}]}
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "report.json"
            output = io.StringIO()
            with patch.object(contracts, "audit_contracts", return_value=report), redirect_stdout(output):
                self.assertEqual(contracts.main(["--strict", "--summary", "--output", str(path)]), 1)
            compact = json.loads(output.getvalue())
            self.assertEqual(compact["findings"][0]["details"], [finding])
            self.assertEqual(compact["coverage"], report["coverage"])
            self.assertNotIn("units", compact)
            self.assertEqual(json.loads(path.read_text()), report)

    def test_contract_summary_preserves_incomplete_failure(self):
        output = io.StringIO()
        with patch.object(contracts, "audit_contracts", side_effect=ValueError("unsupported fixture")), redirect_stdout(output):
            self.assertEqual(contracts.main(["--summary"]), 2)
        self.assertEqual(json.loads(output.getvalue())["error"], "unsupported fixture")
