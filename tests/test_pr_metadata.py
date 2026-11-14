import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

sys.dont_write_bytecode = True
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import pr_metadata


TABLE = """| Role | Model | Reasoning / effort |
| --- | --- | --- |
| Implementation | GPT-6 Luna | medium |
"""


class ValidateBodyTests(unittest.TestCase):
    def test_maintenance_table_without_models_heading(self):
        self.assertTrue(pr_metadata.validate_body("## Change\nmaintenance\n\n" + TABLE)[0])

    def test_multiple_tables_rows_all_must_be_complete(self):
        body = """| Other | Value |
| --- | --- |
| x | y |

| Role | Model | Reasoning / Effort |
| --- | --- | --- |
| Implementation | Provider/model-v9 | exploratory, 2 passes |
| Review | GPT-6 Astra | not exposed |
"""
        self.assertTrue(pr_metadata.validate_body(body)[0])
        self.assertFalse(pr_metadata.validate_body(body + "| Assistant | | high |\n")[0])

    def test_fenced_and_commented_examples_do_not_count(self):
        hidden = """```markdown
| Role | Model | Effort |
| --- | --- | --- |
| Implementation | GPT-6 | high |
```
<!--
| Role | Model | Effort |
| --- | --- | --- |
| Review | human | any truthful setting |
-->
"""
        self.assertFalse(pr_metadata.validate_body(hidden)[0])
        self.assertTrue(pr_metadata.validate_body(hidden + "Visible table:\n\n" + TABLE)[0])
        tilde_hidden = "~~~\n" + TABLE + "~~~\n"
        self.assertFalse(pr_metadata.validate_body(tilde_hidden)[0])

    def test_table_followed_by_heading_or_paragraph(self):
        self.assertTrue(pr_metadata.validate_body(TABLE + "## Change\nDetails follow.")[0])
        self.assertTrue(pr_metadata.validate_body(TABLE + "A plain paragraph follows.")[0])

    def test_unclosed_comment_marker_in_fence_does_not_hide_real_table(self):
        body = "```text\n<!-- literal example\n```\n" + TABLE
        self.assertTrue(pr_metadata.validate_body(body)[0])

    def test_bare_pipes_and_escaped_content(self):
        bare = """Role | Model | Effort
--- | --- | ---
Implementation | Provider model\\|variant | exploratory \\| second pass
"""
        self.assertTrue(pr_metadata.validate_body(bare)[0])
        self.assertTrue(pr_metadata.validate_body("""Role | Model | Reasoning
:--- | ---: | :---:
Review | human | not applicable
""")[0])

    def test_missing_table_or_blank_template_cells_rejected(self):
        self.assertFalse(pr_metadata.validate_body("## Models\nNo table")[0])
        self.assertFalse(pr_metadata.validate_body("""| Role | Model | Reasoning / effort |
| --- | --- | --- |
| Implementation | | |
""")[0])

    def test_malformed_rows_and_separators_rejected(self):
        self.assertFalse(pr_metadata.validate_body("""| Role | Model | Reasoning / effort |
| --- | --- | --- |
| Implementation | GPT-6 | high | extra |
""")[0])
        self.assertFalse(pr_metadata.validate_body("""| Role | Model | Effort |
| --- | --- |
| Implementation | GPT-6 | high |
""")[0])
        for separator in ("::: | --- | ---", ":: | --- | ---", "-:- | --- | ---"):
            body = f"Role | Model | Effort\n{separator}\nAuthor | GPT-6 | high\n"
            self.assertFalse(pr_metadata.validate_body(body)[0], separator)

    def test_human_effort_is_self_reported(self):
        body = """Role | Model | Effort
--- | --- | ---
Author | human | not applicable
"""
        self.assertTrue(pr_metadata.validate_body(body)[0])

    def test_malformed_event_rejected(self):
        for event in (None, [], {}, {"pull_request": []}, {"pull_request": {"body": None}}):
            self.assertFalse(pr_metadata.validate_event(event)[0])

    def test_untrusted_strings_are_data_not_executed(self):
        with tempfile.TemporaryDirectory() as directory:
            marker = Path(directory) / "should-not-exist"
            payload = f"__import__('pathlib').Path({str(marker)!r}).touch()"
            body = f"""| Role | Model | Reasoning / effort |
| --- | --- | --- |
| Implementation | {payload} | not exposed |
"""
            event_path = Path(directory) / "event.json"
            event_path.write_text(json.dumps({"pull_request": {"body": body}}))
            result = subprocess.run(
                [sys.executable, str(Path(pr_metadata.__file__)), str(event_path)],
                capture_output=True, text=True, check=False,
            )
            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertFalse(marker.exists())


if __name__ == "__main__":
    unittest.main()
