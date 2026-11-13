import base64
from contextlib import redirect_stderr, redirect_stdout
import copy
import datetime as dt
import importlib.util
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch


spec = importlib.util.spec_from_file_location("community", Path(__file__).resolve().parents[1] / "tools/community.py")
queue = importlib.util.module_from_spec(spec)
spec.loader.exec_module(queue)
NOW = dt.datetime(2026, 1, 1, 12, tzinfo=dt.timezone.utc)


def issue(number, function="fn_03000000", owner="contributor"):
    return {"number": number, "title": f"Claim: {function}", "body": f"### Function\n\n{function}\n",
            "user": {"login": owner}, "state": "open", "labels": []}


def comment_for(request, expires=NOW + dt.timedelta(hours=1), issued=NOW - dt.timedelta(hours=1), author=None):
    record = {"function": queue.requested_function(request), "owner": request["user"]["login"],
              "issue": request["number"], "issued_at": queue.iso(issued), "expires_at": queue.iso(expires)}
    return {"user": author or {"id": queue.BOT_ID, "login": "github-actions[bot]"},
            "body": f"<!-- botw-claim-v1 {json.dumps(record)} -->"}


class FakeGitHub:
    def __init__(self, issues, comments=None):
        self.data = {row["number"]: copy.deepcopy(row) for row in issues}
        self.messages = copy.deepcopy(comments or {})
        self.updates = []

    def ensure_labels(self):
        pass

    def route(self, path):
        return path

    def issues(self):
        return [copy.deepcopy(row) for row in self.data.values() if row["state"] == "open" and queue.is_request(row)]

    def comments(self, request):
        return self.messages.get(request["number"], [])

    def comment(self, request, text):
        self.messages.setdefault(request["number"], []).append({
            "user": {"id": queue.BOT_ID, "login": "github-actions[bot]"}, "body": text})

    def update(self, request, label, close=False):
        self.updates.append((request["number"], label, close))
        self.data[request["number"]]["labels"] = [{"name": label}]
        if close:
            self.data[request["number"]]["state"] = "closed"

    def call(self, method, path, payload=None):
        if method == "GET" and path.startswith("issues/"):
            return copy.deepcopy(self.data[int(path.split("/")[1])])
        raise AssertionError((method, path, payload))


FUNCTIONS = {"fn_03000000": {"id": "fn_03000000", "size": 128, "status": "unmatched"}}


class RemoteGitHub(FakeGitHub):
    COMMIT = "a" * 40
    TREE = "b" * 40

    def __init__(self, sources=(), issues=(), comments=None):
        super().__init__(issues, comments)
        self.calls = []
        self.rows = {key: {**row, "source": f"reconstructions/{key}.cpp"}
                     for key, row in FUNCTIONS.items()}
        self.tree = {"truncated": False, "tree": [
            {"path": path, "type": "blob", "mode": "100644"} for path in sources]}

    def call(self, method, path, payload=None):
        self.calls.append((method, path, payload))
        if method == "GET":
            if path == "":
                return {"default_branch": "branch/default"}
            if path == "commits/branch%2Fdefault":
                return {"sha": self.COMMIT, "commit": {"tree": {"sha": self.TREE}}}
            if path == f"contents/config/functions.json?ref={self.COMMIT}":
                manifest = json.dumps({"functions": list(self.rows.values())}).encode()
                return {"type": "file", "encoding": "base64",
                        "content": base64.b64encode(manifest).decode()}
            if path == f"git/trees/{self.TREE}?recursive=1":
                return self.tree
        if method == "POST" and path == "issues":
            return {"number": 2, "html_url": "https://github.com/example/project/issues/2"}
        return super().call(method, path, payload)


class QueueTests(unittest.TestCase):
    def test_user_cannot_forge_authoritative_comment(self):
        request = issue(1)
        fake = comment_for(request, author={"id": 7, "login": "github-actions[bot]"})
        self.assertIsNone(queue.claim_record(request, [fake]))

    def test_duplicate_requests_resolve_oldest_first(self):
        api = FakeGitHub([issue(2, owner="second"), issue(1, owner="first")])
        self.assertEqual(queue.reconcile(api, FUNCTIONS, NOW), {"accepted": 1, "closed": 1})
        self.assertEqual(api.data[1]["state"], "open")
        self.assertEqual(api.data[2]["state"], "closed")
        self.assertEqual(queue.active_claims(api, NOW)["fn_03000000"]["owner"], "first")

    def test_accepted_claim_wins_over_older_pending_request(self):
        active = issue(3, owner="active")
        api = FakeGitHub([issue(1), active], {3: [comment_for(active)]})
        queue.reconcile(api, FUNCTIONS, NOW)
        self.assertEqual(api.data[1]["state"], "closed")
        self.assertEqual(api.data[3]["state"], "open")

    def test_expiry_releases_task_in_same_reconciliation(self):
        expired = issue(1)
        api = FakeGitHub([expired, issue(2, owner="next")], {1: [comment_for(expired, expires=NOW)]})
        queue.reconcile(api, FUNCTIONS, NOW)
        self.assertIn((1, "claim-expired", True), api.updates)
        self.assertEqual(queue.active_claims(api, NOW)["fn_03000000"]["owner"], "next")

    def test_request_edit_cannot_move_an_active_claim(self):
        request = issue(1)
        record = comment_for(request)
        request["body"] = "### Function\n\nfn_03000004\n"
        api = FakeGitHub([request], {1: [record]})
        queue.reconcile(api, FUNCTIONS, NOW)
        self.assertEqual(api.data[1]["state"], "closed")

    def test_forged_long_lease_is_rejected(self):
        request = issue(1)
        with self.assertRaises(queue.QueueError):
            queue.claim_record(request, [comment_for(request, expires=NOW + dt.timedelta(days=5))])

    def test_multiple_bot_records_fail_closed(self):
        request = issue(1)
        with self.assertRaises(queue.QueueError):
            queue.claim_record(request, [comment_for(request), comment_for(request)])

    def test_status_does_not_accept_expired_closed_or_completed_claim(self):
        request = issue(1)
        self.assertIsNone(queue.accepted_record(request, [comment_for(request, expires=NOW)], NOW))
        closed = {**request, "state": "closed"}
        self.assertIsNone(queue.accepted_record(closed, [comment_for(request)], NOW))
        complete = {"fn_03000000": {"status": "matched"}}
        self.assertIsNone(queue.accepted_record(request, [comment_for(request)], NOW, complete))

    def test_status_rejects_future_claim_and_modified_request(self):
        request = issue(1)
        future = comment_for(request, issued=NOW + dt.timedelta(minutes=1))
        with self.assertRaisesRegex(queue.QueueError, "future"):
            queue.accepted_record(request, [future], NOW)
        record = comment_for(request)
        request["body"] = "### Function\n\nfn_03000004\n"
        with self.assertRaisesRegex(queue.QueueError, "changed"):
            queue.accepted_record(request, [record], NOW)

    def test_unknown_and_matched_requests_are_rejected(self):
        api = FakeGitHub([issue(1), issue(2, "fn_03000004")])
        functions = copy.deepcopy(FUNCTIONS)
        functions["fn_03000000"]["status"] = "matched"
        result = queue.reconcile(api, functions, NOW)
        self.assertEqual(result, {"accepted": 0, "closed": 2})

    def test_all_pending_requests_are_processed_without_event_payload(self):
        functions = {f"fn_{0x03000000 + i * 4:08x}": {"status": "unmatched"} for i in range(4)}
        api = FakeGitHub([issue(i + 1, key, owner=f"person{i}") for i, key in enumerate(functions)])
        self.assertEqual(queue.reconcile(api, functions, NOW), {"accepted": 4, "closed": 0})

    def test_no_model_or_function_size_access_gate(self):
        functions = copy.deepcopy(FUNCTIONS)
        functions["fn_03000000"]["size"] = 100_000
        api = FakeGitHub([issue(1)])
        self.assertEqual(queue.reconcile(api, functions, NOW)["accepted"], 1)

    def test_account_claim_limit(self):
        functions = {f"fn_{0x03000000 + i * 4:08x}": {"status": "unmatched"} for i in range(queue.MAX_CLAIMS + 1)}
        api = FakeGitHub([issue(i + 1, key) for i, key in enumerate(functions)])
        self.assertEqual(queue.reconcile(api, functions, NOW), {"accepted": queue.MAX_CLAIMS, "closed": 1})

    def test_reconcile_is_idempotent_after_acceptance(self):
        api = FakeGitHub([issue(1)])
        queue.reconcile(api, FUNCTIONS, NOW)
        self.assertEqual(queue.reconcile(api, FUNCTIONS, NOW), {"accepted": 0, "closed": 0})
        self.assertEqual(len(api.messages[1]), 1)

    def test_naive_timestamp_is_rejected(self):
        with self.assertRaises(queue.QueueError):
            queue.timestamp("2026-01-01T12:00:00")

    def test_unrelated_issues_and_pull_requests_are_ignored(self):
        self.assertFalse(queue.is_request({"title": "Question", "labels": []}))
        self.assertFalse(queue.is_request({"title": "Claim: fn_03000000", "pull_request": {}, "labels": []}))

    def test_manifest_rejects_duplicate_or_invalid_ids(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "functions.json"
            path.write_text(json.dumps({"functions": [FUNCTIONS["fn_03000000"]] * 2}))
            with self.assertRaises(queue.QueueError):
                queue.read_functions(path)

    def test_landed_source_completes_task_without_manifest_edit(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            path = root / "config/functions.json"
            path.parent.mkdir()
            row = {**FUNCTIONS["fn_03000000"], "source": "reconstructions/fn_03000000.cpp"}
            path.write_text(json.dumps({"functions": [row]}))
            source = root / row["source"]
            source.parent.mkdir()
            source.write_text('extern "C" void fn_03000000() {}\n')
            functions = queue.read_functions(path)
            self.assertEqual(functions[row["id"]]["status"], "matched")
            self.assertEqual(json.loads(path.read_text())["functions"][0]["status"], "unmatched")
            request = issue(1)
            api = FakeGitHub([request, issue(2)], {1: [comment_for(request)]})
            self.assertEqual(queue.reconcile(api, functions, NOW), {"accepted": 0, "closed": 2})
            self.assertIn((1, "claim-complete", True), api.updates)

    def test_source_path_cannot_escape_reconstruction_directory(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "functions.json"
            row = {**FUNCTIONS["fn_03000000"], "source": "../other.cpp"}
            path.write_text(json.dumps({"functions": [row]}))
            with self.assertRaisesRegex(queue.QueueError, "Invalid source path"):
                queue.read_functions(path)

    def test_client_status_ignores_unmerged_local_source(self):
        request = issue(1)
        now = dt.datetime.now(dt.timezone.utc)
        record = comment_for(request, issued=now - dt.timedelta(minutes=1),
                             expires=now + dt.timedelta(hours=1))
        api = RemoteGitHub(issues=[request], comments={1: [record]})
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            manifest = root / "config/functions.json"
            manifest.parent.mkdir()
            manifest.write_text(json.dumps({"functions": list(api.rows.values())}))
            source = root / "reconstructions/fn_03000000.cpp"
            source.parent.mkdir()
            source.write_text("unfinished local source\n")
            output = io.StringIO()
            with patch.object(queue, "GitHub", return_value=api), redirect_stdout(output):
                result = queue.main(["--manifest", str(manifest), "status", "1"])
        self.assertEqual(result, 0)
        self.assertTrue(json.loads(output.getvalue())["accepted"])

    def test_client_list_and_claim_ignore_stale_local_manifest(self):
        api = RemoteGitHub(sources=["reconstructions/fn_03000000.cpp"])
        with tempfile.TemporaryDirectory() as directory:
            manifest = Path(directory) / "functions.json"
            manifest.write_text(json.dumps({"functions": list(api.rows.values())}))
            output, errors = io.StringIO(), io.StringIO()
            with patch.object(queue, "GitHub", return_value=api), redirect_stdout(output), redirect_stderr(errors):
                self.assertEqual(queue.main(["--manifest", str(manifest), "list"]), 0)
                self.assertEqual(queue.main(["--manifest", str(manifest), "claim", "fn_03000000"]), 1)
        self.assertEqual(json.loads(output.getvalue()), [])
        self.assertIn("No available task", errors.getvalue())
        self.assertFalse(any(call[0] == "POST" for call in api.calls))

    def test_remote_reads_pin_manifest_and_sources_to_one_commit(self):
        api = RemoteGitHub()
        self.assertEqual(queue.remote_functions(api)["fn_03000000"]["status"], "unmatched")
        self.assertEqual([path for _, path, _ in api.calls], [
            "", "commits/branch%2Fdefault",
            f"contents/config/functions.json?ref={api.COMMIT}",
            f"git/trees/{api.TREE}?recursive=1"])

    def test_incomplete_remote_tree_fails_closed(self):
        api = RemoteGitHub()
        api.tree["truncated"] = True
        with self.assertRaisesRegex(queue.QueueError, "incomplete"):
            queue.remote_functions(api)

    def test_remote_symlink_cannot_mark_task_complete(self):
        api = RemoteGitHub(sources=["reconstructions/fn_03000000.cpp"])
        api.tree["tree"][0]["mode"] = "120000"
        with self.assertRaisesRegex(queue.QueueError, "regular files"):
            queue.remote_functions(api)

    def test_github_request_timeout_is_bounded_and_handled(self):
        timeout = queue.subprocess.TimeoutExpired(["gh", "api"], 30)
        with patch.object(queue.subprocess, "run", side_effect=timeout) as run, redirect_stderr(io.StringIO()):
            self.assertEqual(queue.main(["list"]), 1)
        self.assertEqual(run.call_args.kwargs["timeout"], 30)


if __name__ == "__main__":
    unittest.main()
