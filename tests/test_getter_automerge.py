import copy
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import Mock, patch


sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import getter_automerge as auto


WORD, POINTER = "fn_10000000", "fn_10000100"
BASE, HEAD, MERGED = "a" * 40, "b" * 40, "c" * 40
REPOSITORY = "example/decomp"
BODY = f"""## Functions

{WORD}

## Models

| Role | Model | Reasoning / effort |
| --- | --- | --- |
| Implementation | human | human |
"""


def row(key, result):
    symbol = "data_20000000"
    return {"id": key, "symbol": key, "address": "0x" + key[3:], "size": 12,
            "source": f"reconstructions/{key}.cpp", "sha256": "d" * 64,
            "status": "unmatched", "original_profile": "cafe-data-address-v1",
            "data_bindings": {symbol: "0x20000000"},
            "data_relocations": [{"offset": 2, "symbol": symbol, "type": 6},
                                 {"offset": 6, "symbol": symbol, "type": 4}],
            "source_contract": {"return_type": result, "parameter_types": [], "variadic": False}}


class GetterPolicyTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.base = Path(directory.name) / "base"
        self.head = Path(directory.name) / "head"
        self.rows = [row(WORD, "unsigned int"), row(POINTER, "struct Opaque_10000100 *")]
        self.write(self.base, "config/functions.json",
                   json.dumps({"schema_version": 1, "functions": self.rows}).encode())
        self.write(self.base, "config/batches.json",
                   json.dumps({"batches": [{"id": auto.BATCH, "functions": [WORD, POINTER]}]}).encode())
        self.write(self.base, "README.md", b"Base\n")
        self.git(self.base, "init", "-q")
        self.git(self.base, "add", ".")
        shutil.copytree(self.base, self.head)

    @staticmethod
    def git(root, *args):
        subprocess.run(["git", "-C", str(root), *args], check=True, capture_output=True)

    @staticmethod
    def write(root, name, data):
        path = root / name
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(data)

    def classify(self):
        self.git(self.head, "add", "-A")
        return auto.classify(self.base, self.head)

    def test_accepts_only_canonical_new_getters(self):
        self.assertEqual(self.classify(), [])
        for item in self.rows:
            self.write(self.head, item["source"], auto.getter_source(item))
        self.assertEqual(self.classify(), [WORD, POINTER])
        self.write(self.head, self.rows[0]["source"],
                   auto.getter_source(self.rows[0]).replace(b"return data_", b"return ++data_"))
        self.assertEqual(self.classify(), [])

    def test_docs_existing_source_or_executable_mode_require_review(self):
        item = self.rows[0]
        self.write(self.head, item["source"], auto.getter_source(item))
        self.write(self.head, "README.md", b"Changed\n")
        self.assertEqual(self.classify(), [])
        self.write(self.head, "README.md", b"Base\n")
        self.git(self.head, "add", "-A")
        self.git(self.head, "update-index", "--chmod=+x", item["source"])
        self.assertEqual(auto.classify(self.base, self.head), [])
        self.git(self.head, "update-index", "--chmod=-x", item["source"])
        self.write(self.base, item["source"], b"Previously reviewed source\n")
        self.git(self.base, "add", "-A")
        self.assertEqual(auto.classify(self.base, self.head), [])

    def test_requires_pinned_interface_and_verified_data_shape(self):
        for changed in ({"source_contract": {}}, {"data_relocations": []},
                        {"compile_with": [POINTER]}, {"size": 16}):
            with self.subTest(changed=changed):
                self.assertIsNone(auto.getter_source({**self.rows[0], **changed}))


class GetterMergeTests(unittest.TestCase):
    def setUp(self):
        repository = {"full_name": REPOSITORY, "default_branch": "master"}
        self.current = {"number": 7, "state": "open", "draft": False, "body": BODY,
                        "base": {"sha": BASE, "ref": "master", "repo": repository},
                        "head": {"sha": HEAD}, "user": {"login": "owner"},
                        "mergeable": True, "mergeable_state": "clean"}
        self.event = {"repository": repository, "pull_request": copy.deepcopy(self.current)}
        self.api = Mock(repository=REPOSITORY)
        self.api.route.side_effect = lambda path: path
        self.api.call.side_effect = self.request

    def request(self, method, path, payload=None):
        if (method, path) == ("GET", "pulls/7"):
            return self.current
        if (method, path) == ("PUT", "pulls/7/merge"):
            return {"merged": True, "sha": MERGED}
        self.assertEqual((method, path), ("POST", "dispatches"))

    def merge(self, claims=None):
        if claims is None:
            claims = {WORD: {"owner": "owner"}}
        with patch.object(auto.community, "active_claims", return_value=claims):
            return auto.merge_verified(self.api, self.event, [WORD], wait=Mock())

    def test_merges_exact_head_and_dispatches_post_merge_checks(self):
        self.assertEqual(self.merge(), {"merged": True, "sha": MERGED})
        self.api.call.assert_any_call("PUT", "pulls/7/merge", {"sha": HEAD, "merge_method": "merge"})
        self.api.call.assert_called_with("POST", "dispatches", {"event_type": "getter_merged"})

    def test_falls_back_to_review_for_changed_head_base_draft_or_required_checks(self):
        original = copy.deepcopy(self.current)
        for changed in ({"head": {"sha": BASE}}, {"base": {**original["base"], "sha": HEAD}},
                        {"draft": True}, {"mergeable_state": "blocked"}):
            with self.subTest(changed=changed):
                self.api.call.reset_mock()
                self.current = {**original, **changed}
                self.assertFalse(self.merge()["merged"])
                self.assertTrue(all(call.args[0] == "GET" for call in self.api.call.call_args_list))

    def test_requires_current_function_list_metadata_and_author_claim(self):
        self.assertFalse(self.merge({WORD: {"owner": "another-user"}})["merged"])
        self.current["body"] = BODY.replace(WORD, POINTER)
        self.assertFalse(self.merge()["merged"])
        self.current["body"] = f"## Functions\n\n{WORD}\n"
        self.assertFalse(self.merge()["merged"])
        self.assertTrue(all(call.args[0] == "GET" for call in self.api.call.call_args_list))
