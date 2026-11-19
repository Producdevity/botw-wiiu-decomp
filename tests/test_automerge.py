import base64
import json
from pathlib import Path
import sys
import tempfile
import unittest
import unittest.mock


sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import automerge


KEY, OTHER = "fn_03000000", "fn_03000004"
HEAD, BASE, MERGED = "b" * 40, "a" * 40, "c" * 40
BLOB = "d" * 40
BODY = f"""## Functions

{KEY}

## Models

| Role | Model | Reasoning / effort |
| --- | --- | --- |
| Implementation | human | human |
"""
SOURCE = b'extern "C" void fn_03000000() {}\n'


class FakeApi:
    repository = "example/decomp"

    def __init__(self, files=None, checks=("success", "success"), body=BODY):
        self.files = files if files is not None else [
            {"filename": f"reconstructions/{KEY}.cpp", "status": "added", "sha": BLOB}]
        self.checks = checks
        self.body = body
        self.master = BASE
        self.calls = []

    def route(self, suffix):
        return f"repos/{self.repository}/{suffix}"

    def open_pulls(self):
        return [{"number": 7, "draft": False, "body": self.body, "base": {"ref": "master"},
                 "head": {"sha": HEAD, "repo": {"full_name": "someone/decomp"}}}]

    def pages(self, path):
        return list(self.files)

    def call(self, method, path, payload=None):
        self.calls.append((method, path, payload))
        if path.endswith("check-runs?per_page=100"):
            return {"check_runs": [{"id": 1, "name": name, "conclusion": conclusion}
                                   for name, conclusion in zip(automerge.REQUIRED_CHECKS, self.checks)]}
        if path == f"repos/someone/decomp/git/blobs/{BLOB}":
            return {"sha": BLOB, "encoding": "base64", "size": len(SOURCE),
                    "content": base64.b64encode(SOURCE).decode()}
        if path.endswith("git/ref/heads/master"):
            return {"object": {"sha": self.master}}
        if path.endswith("pulls/7") and method == "GET":
            return {"state": "open", "head": {"sha": HEAD}, "base": {"ref": "master"}}
        if path.endswith("pulls/7/merge"):
            self.master = MERGED
            return {"merged": True, "sha": MERGED}
        if path.endswith("dispatches"):
            return None
        raise AssertionError(path)


class AutomergeTests(unittest.TestCase):
    rows = {KEY: {"id": KEY}, OTHER: {"id": OTHER}}

    def test_only_new_sources_for_trusted_references_are_eligible(self):
        added = {"filename": f"reconstructions/{KEY}.cpp", "status": "added", "sha": BLOB}
        self.assertEqual(automerge.eligible_sources([added], self.rows, set()), {added["filename"]: BLOB})
        for change in ({"status": "modified"}, {"filename": "include/botw/x.h"},
                       {"filename": "reconstructions/fn_04000000.cpp"}, {"filename": "docs/x.md"},
                       {"sha": "main"}):
            with self.subTest(change=change):
                self.assertIsNone(automerge.eligible_sources([{**added, **change}], self.rows, set()))
        self.assertIsNone(automerge.eligible_sources([added], self.rows, {added["filename"]}))
        self.assertIsNone(automerge.eligible_sources([], self.rows, set()))

    def test_candidates_require_metadata_declared_functions_and_green_checks(self):
        self.assertEqual([p["functions"] for p in automerge.candidates(FakeApi(), self.rows, set())], [[KEY]])
        self.assertEqual(automerge.candidates(FakeApi(checks=("success", "failure")), self.rows, set()), [])
        self.assertEqual(automerge.candidates(FakeApi(body=BODY.replace(KEY, OTHER)), self.rows, set()), [])
        self.assertEqual(automerge.candidates(FakeApi(body=BODY.replace("| human | human |", "| | |")),
                                              self.rows, set()), [])
        pull, = automerge.candidates(FakeApi(), self.rows, set())
        self.assertEqual(pull["contents"], {f"reconstructions/{KEY}.cpp": SOURCE})

    def test_second_pr_adding_the_same_file_is_skipped(self):
        api = FakeApi()
        api.open_pulls = lambda: [dict(FakeApi.open_pulls(api)[0], number=7), dict(FakeApi.open_pulls(api)[0], number=8)]
        self.assertEqual([p["number"] for p in automerge.candidates(api, self.rows, set())], [7])

    def test_merge_stops_when_master_moved(self):
        with tempfile.TemporaryDirectory() as directory:
            plan = Path(directory) / "plan.json"
            plan.write_text(json.dumps({"base": BASE, "pulls": [{"number": 7, "head": HEAD, "functions": [KEY]}]}))
            api = FakeApi()
            with unittest.mock.patch.object(automerge.community, "GitHub", return_value=api), \
                    unittest.mock.patch.dict(automerge.os.environ, {"GITHUB_REPOSITORY": api.repository}):
                self.assertEqual(automerge.merge(plan), {"merged": [7]})
                self.assertTrue(any(path.endswith("dispatches") for _, path, _ in api.calls))
                api = FakeApi()
                api.master = MERGED
                with unittest.mock.patch.object(automerge.community, "GitHub", return_value=api):
                    self.assertEqual(automerge.merge(plan), {"merged": []})
                self.assertFalse(any(path.endswith("/merge") for _, path, _ in api.calls))


if __name__ == "__main__":
    unittest.main()
