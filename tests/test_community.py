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
        self.login = "contributor"
        self.patches = []
        self.pulls = []

    def ensure_labels(self):
        pass

    def route(self, path):
        return path

    def open_issues(self):
        return [copy.deepcopy(row) for row in self.data.values() if row["state"] == "open"]

    def open_pulls(self):
        return copy.deepcopy(self.pulls)

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
        if method == "GET" and path == "user":
            return {"login": self.login}
        if method == "PATCH" and path.startswith("issues/"):
            self.patches.append((path, payload))
            row = self.data[int(path.split("/")[1])]
            row.update(payload)
            return copy.deepcopy(row)
        if method == "GET" and path.startswith("issues/"):
            return copy.deepcopy(self.data[int(path.split("/")[1])])
        raise AssertionError((method, path, payload))


FUNCTIONS = {"fn_03000000": {"id": "fn_03000000", "size": 128, "status": "unmatched"}}


class RemoteGitHub(FakeGitHub):
    pages = queue.GitHub.pages
    open_pulls = queue.GitHub.open_pulls
    COMMIT = "a" * 40
    TREE = "b" * 40
    BLOB = "c" * 40

    def __init__(self, sources=(), issues=(), comments=None):
        super().__init__(issues, comments)
        self.calls = []
        self.rows = {key: {**row, "source": f"reconstructions/{key}.cpp"}
                     for key, row in FUNCTIONS.items()}
        self.set_manifest({"functions": list(self.rows.values())})
        self.tree = {"truncated": False, "tree": [
            {"path": path, "type": "blob", "mode": "100644"} for path in sources] + [
                {"path": "config/functions.json", "type": "blob", "mode": "100644",
                 "sha": self.BLOB, "size": self.blob["size"]}]}

    def set_manifest(self, value):
        manifest = json.dumps(value).encode()
        self.blob = {"sha": self.BLOB, "encoding": "base64", "size": len(manifest),
                     "content": base64.b64encode(manifest).decode()}

    def call(self, method, path, payload=None):
        self.calls.append((method, path, payload))
        if method == "GET":
            if path.startswith("pulls?state=open&sort=created&direction=asc&per_page=100&page="):
                return copy.deepcopy(self.pulls)
            if path == "":
                return {"default_branch": "branch/default"}
            if path == "commits/branch%2Fdefault":
                return {"sha": self.COMMIT, "commit": {"tree": {"sha": self.TREE}}}
            if path == f"git/blobs/{self.BLOB}":
                return self.blob
            if path == f"git/trees/{self.TREE}?recursive=1":
                return self.tree
        if method == "POST" and path == "issues":
            return {"number": 2, "html_url": "https://github.com/example/project/issues/2"}
        return super().call(method, path, payload)


class QueueTests(unittest.TestCase):
    def run_main(self, api, args):
        output, errors = io.StringIO(), io.StringIO()
        with patch.object(queue, "GitHub", return_value=api), redirect_stdout(output), redirect_stderr(errors):
            code = queue.main(args)
        return code, json.loads(output.getvalue()) if output.getvalue() else None, errors.getvalue()

    def test_stale_matched_manifest_without_landed_source_is_available(self):
        api = RemoteGitHub()
        api.rows["fn_03000000"]["status"] = "matched"
        api.set_manifest({"functions": list(api.rows.values())})
        api.tree["tree"][-1]["size"] = api.blob["size"]
        self.assertEqual(queue.remote_functions(api)["fn_03000000"]["status"], "unmatched")
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            path = root / "config/functions.json"
            path.parent.mkdir()
            path.write_text(json.dumps({"functions": list(api.rows.values())}))
            self.assertEqual(queue.read_functions(path)["fn_03000000"]["status"], "unmatched")

    def test_summary_counts_one_pinned_reference_snapshot_and_advisory_blockers(self):
        now = dt.datetime.now(dt.timezone.utc)
        request = issue(1)
        blocker = {**issue(3), "title": "Missing layout", "html_url": "https://example/3",
                   "labels": [{"name": "blocker"}], "body": "### Functions\n\nfn_03000000\nfn_03000004\nfn_ffffffff\n\n### Evidence\nlayout"}
        api = RemoteGitHub(issues=[request, blocker], comments={1: [comment_for(request, issued=now - dt.timedelta(minutes=1), expires=now + dt.timedelta(hours=1))]})
        api.rows["fn_03000004"] = {"id": "fn_03000004", "size": 32, "status": "unmatched", "source": "reconstructions/fn_03000004.cpp", "category": "loops"}
        api.rows["fn_03000008"] = {"id": "fn_03000008", "size": 12, "status": "unmatched", "source": "reconstructions/fn_03000008.cpp", "category": "integer"}
        api.set_manifest({"functions": list(api.rows.values())})
        api.tree["tree"][-1]["size"] = api.blob["size"]
        api.tree["tree"].append({"path": "reconstructions/fn_03000008.cpp", "type": "blob", "mode": "100644"})
        code, result, errors = self.run_main(api, ["summary"])
        self.assertEqual((code, errors), (0, ""))
        self.assertEqual(result["snapshot"]["commit"], api.COMMIT)
        self.assertEqual([result[key] for key in ("reference_functions", "implemented_functions", "available_functions", "claimed_functions", "reported_blocked_functions")], [3, 1, 1, 1, 2])
        self.assertEqual(result["implemented_bytes"], 12)
        self.assertNotIn("fn_ffffffff", result["blockers"])
        self.assertEqual(result["categories"]["loops"]["available_functions"], 1)
        self.assertEqual([row["id"] for row in queue.task_list(queue.remote_functions(api), {}, queue.reported_blockers([blocker], api.rows))], ["fn_03000004", "fn_03000000"])

    def test_blocker_fields_are_advisory_and_ignore_unrelated_or_closed_issues(self):
        blocker = {**issue(1), "labels": [{"name": "blocker"}], "body": "### Functions\nfn_03000000\n"}
        for changed in ({"state": "closed"}, {"labels": []}, {"pull_request": {}}, {"body": "fn_03000000"}, {"body": blocker["body"] * 2}):
            self.assertEqual(queue.reported_blockers([{**blocker, **changed}], FUNCTIONS), {})
        rows = queue.task_list(FUNCTIONS, {}, queue.reported_blockers([blocker], FUNCTIONS))
        self.assertEqual(rows[0]["blocker_issues"][0]["issue"], 1)

    def test_submission_reports_multiple_draft_and_ready_prs_and_ignores_unknown_ids(self):
        pulls = [{"number": number, "html_url": f"https://example/pull/{number}", "state": "open", "draft": draft,
                  "body": "## Functions\n\nfn_03000000\nfn_03000000\nfn_ffffffff\n\n## Verification\nfn_03000004\n"}
                 for number, draft in ((3, True), (1, False))]
        reports = queue.reported_submissions(pulls, FUNCTIONS)
        self.assertEqual(list(reports), ["fn_03000000"])
        self.assertEqual(reports["fn_03000000"], [
            {"number": 1, "url": "https://example/pull/1", "draft": False},
            {"number": 3, "url": "https://example/pull/3", "draft": True}])
        self.assertEqual(queue.reported_submissions([{**pulls[0], "state": "closed"}], FUNCTIONS), {})
        api = RemoteGitHub()
        summary = queue.queue_summary(api, queue.remote_functions(api), {}, {}, reports)
        self.assertEqual(summary["reported_submission_functions"], 1)
        self.assertEqual(summary["reported_submission_prs"], 2)

    def test_submission_parser_requires_one_explicit_section_and_one_id_per_line(self):
        bodies = ["fn_03000000", "## Function\nfn_03000000\n", "## Functions\n- fn_03000000\n",
                  "## Functions\nfn_03000000 with prose\n", "## Functions\nfn_03000000,fn_03000004\n",
                  "## Functions\nfn_03000000\n## Functions\nfn_03000000\n",
                  "## Functions\n### Notes\nfn_03000000\n"]
        for body in bodies:
            with self.subTest(body=body):
                self.assertEqual(queue.reported_submissions([{"number": 1, "state": "open", "body": body}], FUNCTIONS), {})

    def test_open_prs_are_advisory_prefer_other_tasks_and_do_not_change_completion_counts(self):
        api = RemoteGitHub(sources=["reconstructions/fn_03000008.cpp"])
        api.rows["fn_03000004"] = {"id": "fn_03000004", "size": 256, "status": "unmatched", "source": "reconstructions/fn_03000004.cpp"}
        api.rows["fn_03000008"] = {"id": "fn_03000008", "size": 16, "status": "unmatched", "source": "reconstructions/fn_03000008.cpp"}
        api.set_manifest({"functions": list(api.rows.values())})
        api.tree["tree"][-1]["size"] = api.blob["size"]
        api.pulls = [{"number": 4, "html_url": "https://example/pull/4", "draft": True, "state": "open",
                      "body": "## Functions\nfn_03000000\nfn_03000008\n"}]
        code, result, errors = self.run_main(api, ["summary"])
        self.assertEqual((code, errors), (0, ""))
        self.assertEqual([result[key] for key in ("implemented_functions", "implemented_bytes", "available_functions", "reported_submission_functions", "reported_submission_prs")], [1, 16, 2, 2, 1])
        code, result, _ = self.run_main(api, ["list"])
        self.assertEqual(code, 0)
        self.assertEqual([row["id"] for row in result], ["fn_03000004", "fn_03000000"])
        self.assertEqual(result[1]["submission_prs"][0]["number"], 4)
        code, _, _ = self.run_main(api, ["claim"])
        self.assertEqual(code, 0)
        self.assertEqual(next(payload["title"] for method, route, payload in reversed(api.calls) if method == "POST"), "Claim: fn_03000004")
        code, _, _ = self.run_main(api, ["claim", "fn_03000000"])
        self.assertEqual(code, 0)
        self.assertEqual(next(payload["title"] for method, route, payload in reversed(api.calls) if method == "POST"), "Claim: fn_03000000")
        pull_calls = [(method, route) for method, route, _ in api.calls if route.startswith("pulls")]
        self.assertTrue(pull_calls)
        self.assertTrue(all(method == "GET" and route == "pulls?state=open&sort=created&direction=asc&per_page=100&page=1" for method, route in pull_calls))

    def test_list_filters_size_category_and_deterministic_priority(self):
        rows = {f"fn_{i:08x}": {"id": f"fn_{i:08x}", "size": size, "category": category, "priority": priority, "status": "unmatched"}
                for i, size, category, priority in [(4, 32, "loops", 0), (8, 64, "calls", 1), (12, 16, "loops", 0), (16, 64, "loops", 1)]}
        self.assertEqual([row["id"] for row in queue.task_list(rows, {}, {}, 20, 64, ["loops"])], ["fn_00000010", "fn_00000004"])
        self.assertEqual([row["id"] for row in queue.task_list(rows, {"fn_00000010": {}}, {}, 20, 64, ["loops", "calls"])], ["fn_00000008", "fn_00000004"])

    def test_invalid_filters_and_waits_fail_before_github(self):
        for args in (["list", "--min-size", "-1"], ["claim", "--min-size", "100", "--max-size", "10"], ["claim", "--wait", "601"], ["status", "--wait", "1"]):
            with self.subTest(args=args), patch.object(queue, "GitHub") as github, redirect_stderr(io.StringIO()):
                self.assertEqual(queue.main(args), 1)
                github.assert_not_called()

    def test_claim_filter_failure_does_not_create_issue_and_errors_are_json(self):
        api = RemoteGitHub()
        code, _, errors = self.run_main(api, ["claim", "fn_03000000", "--max-size", "32"])
        self.assertEqual(code, 1)
        self.assertIn("No available task", json.loads(errors)["error"])
        self.assertFalse(any(method == "POST" for method, _, _ in api.calls))

    def test_wait_returns_accepted_or_pending_at_deadline_without_infinite_polling(self):
        pending = {"state": "pending", "accepted": False}
        accepted = {"state": "active", "accepted": True}
        with patch.object(queue, "request_status", side_effect=[pending, accepted]) as status, patch.object(queue.time, "monotonic", side_effect=[0, 0, 5]), patch.object(queue.time, "sleep") as sleep:
            self.assertEqual(queue.wait_for_request(None, 1, {}, 10), accepted)
            self.assertEqual(status.call_count, 2)
            sleep.assert_called_once_with(5)
        with patch.object(queue, "request_status", return_value=pending) as status, patch.object(queue.time, "monotonic", side_effect=[0, 10]), patch.object(queue.time, "sleep") as sleep:
            self.assertEqual(queue.wait_for_request(None, 1, {}, 10), pending)
            self.assertEqual(status.call_count, 1)
            sleep.assert_not_called()

    def test_claim_wait_returns_terminal_result_without_stale_pending_next_action(self):
        api = RemoteGitHub()
        accepted = {"issue": 2, "state": "active", "accepted": True, "claim": {"function": "fn_03000000"}}
        with patch.object(queue, "wait_for_request", return_value=accepted) as wait:
            code, result, errors = self.run_main(api, ["claim", "fn_03000000", "--wait", "10"])
        self.assertEqual((code, errors), (0, ""))
        self.assertEqual(result["state"], "active")
        self.assertNotIn("next", result)
        self.assertEqual(wait.call_args.args[1::2], (2, 10))

    def test_invalid_repository_commit_metadata_fail_with_queue_errors(self):
        cases = [("", None), ("", []), ("commits/branch%2Fdefault", None),
                 ("commits/branch%2Fdefault", {"sha": "a" * 40, "commit": {"tree": None}}),
                 ("commits/branch%2Fdefault", {"sha": 7, "commit": {"tree": {"sha": "b" * 40}}})]
        for path, value in cases:
            with self.subTest(path=path, value=value):
                api = RemoteGitHub()
                original = api.call
                with patch.object(api, "call", side_effect=lambda method, route, payload=None: value if route == path else original(method, route, payload)):
                    with self.assertRaises(queue.QueueError):
                        queue.remote_functions(api)

    def test_status_exposes_rejected_expired_and_complete_terminal_states(self):
        request = issue(1)
        api = FakeGitHub([request], {1: [comment_for(request, expires=NOW)]})
        self.assertEqual(queue.request_status(api, 1, FUNCTIONS, NOW)["state"], "expired")
        self.assertEqual(queue.request_status(api, 1, {"fn_03000000": {"status": "matched"}}, NOW)["state"], "complete")
        api.messages = {}
        api.data[1].update(state="closed", labels=[{"name": "claim-rejected"}])
        result = queue.request_status(api, 1, FUNCTIONS, NOW)
        self.assertEqual(result["state"], "rejected")
        self.assertFalse(result["accepted"])

    def test_release_only_current_owners_claim_and_immediately_frees_it(self):
        for owner, allowed in (("contributor", True), ("other", False)):
            request = issue(1, owner=owner)
            api = FakeGitHub([request], {1: [comment_for(request)]})
            code, result, errors = self.run_main(api, ["release", "1"])
            self.assertEqual(code, 0 if allowed else 1)
            self.assertEqual(len(api.patches), int(allowed))
            if allowed:
                self.assertEqual(result, {"issue": 1, "state": "closed"})
                self.assertEqual(queue.active_claims(api, NOW, FUNCTIONS), {})
            else:
                self.assertIn("own claim", json.loads(errors)["error"])

    def test_invalid_manifest_filter_fields_fail_closed(self):
        for fields in ({"size": True}, {"size": "32"}, {"size": 0}, {"category": []}, {"priority": "high"}):
            with self.subTest(fields=fields), self.assertRaises(queue.QueueError):
                queue.parse_functions([{**FUNCTIONS["fn_03000000"], **fields}])

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
            f"git/trees/{api.TREE}?recursive=1", f"git/blobs/{api.BLOB}"])

    def test_remote_manifest_larger_than_contents_limit_uses_pinned_blob(self):
        api = RemoteGitHub(sources=["reconstructions/fn_03000000.cpp"])
        api.set_manifest({"functions": list(api.rows.values()), "padding": "x" * 1_100_000})
        api.tree["tree"][-1]["size"] = api.blob["size"]
        self.assertGreater(api.blob["size"], 1_000_000)
        self.assertEqual(queue.remote_functions(api)["fn_03000000"]["status"], "matched")
        self.assertEqual([path for _, path, _ in api.calls], [
            "", "commits/branch%2Fdefault",
            f"git/trees/{api.TREE}?recursive=1", f"git/blobs/{api.BLOB}"])

    def test_remote_manifest_metadata_rejects_unsafe_or_oversized_blobs(self):
        invalid = [{"mode": "120000"}, {"type": "commit"}, {"sha": "main"},
                   {"sha": None}, {"size": 0}, {"size": True}, {"size": "100"},
                   {"size": queue.MAX_REMOTE_MANIFEST_BYTES + 1}]
        for fields in invalid:
            with self.subTest(fields=fields):
                api = RemoteGitHub()
                api.tree["tree"][-1].update(fields)
                with self.assertRaises(queue.QueueError):
                    queue.remote_functions(api)
                self.assertFalse(any("git/blobs/" in path for _, path, _ in api.calls))

    def test_remote_manifest_requires_one_tree_entry(self):
        for entries in ([], ["duplicate"], [None], [{"path": None}]):
            with self.subTest(entries=entries):
                api = RemoteGitHub()
                if entries == ["duplicate"]:
                    api.tree["tree"].append(dict(api.tree["tree"][-1]))
                else:
                    api.tree["tree"] = entries
                with self.assertRaises(queue.QueueError):
                    queue.remote_functions(api)

    def test_remote_manifest_blob_rejects_invalid_responses(self):
        invalid = [None, [], {"sha": "d" * 40}, {"encoding": "none"},
                   {"size": -1}, {"size": True}, {"content": None}, {"content": 12},
                   {"content": "!" * 180}, {"content": ""},
                   {"content": base64.b64encode(b"invalid json").decode(), "size": 12}]
        for fields in invalid:
            with self.subTest(fields=fields):
                api = RemoteGitHub()
                if isinstance(fields, dict):
                    api.blob.update(fields)
                else:
                    api.blob = fields
                with self.assertRaises(queue.QueueError):
                    queue.remote_functions(api)

    def test_remote_manifest_rejects_invalid_base64_and_json_with_matching_sizes(self):
        for encoded, size in (("!!!!", 3), ("eA==", 2), ("eA==", 1)):
            with self.subTest(encoded=encoded, size=size):
                api = RemoteGitHub()
                api.blob.update(content=encoded, size=size)
                api.tree["tree"][-1]["size"] = size
                with self.assertRaises(queue.QueueError):
                    queue.remote_functions(api)

    def test_remote_manifest_invalid_schema_fails_with_clean_json_output(self):
        for value in ({}, {"functions": None}, [None]):
            with self.subTest(value=value):
                api = RemoteGitHub()
                api.set_manifest(value)
                api.tree["tree"][-1]["size"] = api.blob["size"]
                output, errors = io.StringIO(), io.StringIO()
                with patch.object(queue, "GitHub", return_value=api), redirect_stdout(output), redirect_stderr(errors):
                    self.assertEqual(queue.main(["list"]), 1)
                self.assertEqual(output.getvalue(), "")
                self.assertIn("Function", errors.getvalue())

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

    def test_github_json_disables_inherited_forced_color(self):
        environment = {"CLICOLOR_FORCE": "1", "GH_FORCE_TTY": "100%", "CLICOLOR": "1",
                       "NO_COLOR": "0", "TEST_COMMUNITY_ENV": "preserved"}
        response = queue.subprocess.CompletedProcess(["gh", "api"], 0, '{"ok": true}', "")
        with patch.dict(queue.os.environ, environment), patch.object(queue.subprocess, "run", return_value=response) as run:
            self.assertEqual(queue.GitHub("example/project").call("GET", "user"), {"ok": True})
            child = run.call_args.kwargs["env"]
            self.assertNotIn("CLICOLOR_FORCE", child)
            self.assertNotIn("GH_FORCE_TTY", child)
            self.assertEqual(child["CLICOLOR"], "0")
            self.assertEqual(child["NO_COLOR"], "1")
            self.assertEqual(child["TEST_COMMUNITY_ENV"], "preserved")
            self.assertEqual(queue.os.environ["CLICOLOR_FORCE"], "1")


if __name__ == "__main__":
    unittest.main()
