import json
from pathlib import Path
import tempfile
import unittest

from botw_decomp.verification_report import text_size, write_progress


class VerificationReportTests(unittest.TestCase):
    def test_denominator_requires_all_references_to_fit_the_target_text(self):
        target = {"text": [{"address": "0x20", "size": 64}, {"address": "0x100", "size": 32}]}
        rows = {"fn_00000100": {"address": "0x100", "size": 4}}
        self.assertEqual(text_size(target, rows), 96)
        rows["fn_00000100"]["size"] = 36
        with self.assertRaisesRegex(ValueError, "outside target text"):
            text_size(target, rows)
        with self.assertRaisesRegex(ValueError, "overlapping"):
            text_size({"text": [target["text"][0]] * 2}, {})

    def test_only_successful_report_for_the_exact_commit_can_publish(self):
        commit = "a" * 40
        report = {"commit": commit, "base_commit": commit, "target": "fixture",
                  "matched_bytes": 4, "text_bytes": 12, "matched_functions": 1, "failed_functions": 0}
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            for invalid in ({"failed_functions": 1}, {"base_commit": "b" * 40},
                            {"commit": "b" * 40}, {"matched_bytes": 16}, {"extra": "unexpected"}):
                with self.subTest(invalid=invalid), self.assertRaises(ValueError):
                    write_progress(root, report | invalid, commit, "123")
            self.assertFalse(list(root.iterdir()))
            write_progress(root, report, commit, "123")
            self.assertIn("33.33%", (root / "exact-text.svg").read_text())
            self.assertEqual(json.loads((root / "progress.json").read_text()),
                             {"schema_version": 1, "run_id": 123, **report})
