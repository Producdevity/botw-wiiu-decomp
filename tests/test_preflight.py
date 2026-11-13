from contextlib import ExitStack, redirect_stdout
import hashlib
import importlib.util
import io
import json
from pathlib import Path
import subprocess
import tempfile
import unittest
from unittest.mock import patch

spec = importlib.util.spec_from_file_location("preflight", Path(__file__).resolve().parents[1] / "tools/preflight.py")
preflight = importlib.util.module_from_spec(spec)
spec.loader.exec_module(preflight)


class PreflightTests(unittest.TestCase):
    def root(self, directory, configured=True):
        root = Path(directory).resolve()
        (root / "config").mkdir()
        (root / "config/target.json").write_text(json.dumps({"rpx_sha256": hashlib.sha256(b"original").hexdigest()}))
        rpx = root / "U-King.rpx"
        rpx.write_bytes(b"original")
        toolchain = root / ".local/toolchains/ghs-5.3.22"
        (toolchain / "ghs/bin").mkdir(parents=True)
        (toolchain / "ghs/bin/cxppc.exe").write_bytes(b"compiler")
        (toolchain / "wibo").write_bytes(b"runner")
        (toolchain / "wibo").chmod(0o755)
        if configured:
            (root / ".local/config.json").write_text(json.dumps({"rpx": str(rpx), "compiler": "/llvm/clang++"}))
        return root, rpx

    def probes(self, command):
        if "--print-targets" in command:
            output = "Registered Targets:\n ppc32 - PowerPC 32\n"
        elif "--version" in command:
            output = "LLVM version 18\nRegistered Targets:\n powerpc - PowerPC 32\n"
        elif "api" in command:
            output = "contributor\n"
        elif "config" in command:
            output = "Configured identity\n"
        else:
            raise AssertionError(command)
        return subprocess.CompletedProcess(command, 0, output, "")

    def ready_environment(self):
        stack = ExitStack()
        stack.enter_context(patch.object(preflight.compiler, "locate", return_value="/llvm/clang++"))
        stack.enter_context(patch.object(preflight.compiler, "version", return_value="clang version 18"))
        stack.enter_context(patch.object(preflight.contracts, "locate_libclang", return_value="/llvm/libclang.so"))
        stack.enter_context(patch.object(preflight.contracts, "ClangParser"))
        stack.enter_context(patch.object(preflight.disassembly, "locate", return_value="/llvm/llvm-objdump"))
        stack.enter_context(patch.object(preflight.shutil, "which", return_value="/bin/gh"))
        stack.enter_context(patch.object(preflight, "probe", side_effect=self.probes))
        return stack

    def test_ready_uses_existing_config_and_does_not_write_or_install(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            before = {path.relative_to(root): path.read_bytes() for path in root.rglob("*") if path.is_file()}
            result = preflight.assess(root)
            self.assertEqual(result["status"], "ready")
            self.assertEqual(result["actions"], [])
            self.assertEqual(before, {path.relative_to(root): path.read_bytes() for path in root.rglob("*") if path.is_file()})

    def test_new_setup_requests_configure_command_without_changing_settings(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory, configured=False)
            result = preflight.assess(root, rpx)
            self.assertEqual(result["status"], "action_required")
            self.assertEqual([action["id"] for action in result["actions"]], ["configuration"])
            self.assertEqual(result["actions"][0]["command"], ["python3", "tools/decomp.py", "setup", "--rpx", str(rpx), "--compiler", "/llvm/clang++"])
            self.assertFalse((root / ".local/config.json").exists())

    def test_missing_rpx_requests_only_local_path_not_an_upload(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, _ = self.root(directory, configured=False)
            result = preflight.assess(root)
            action = next(action for action in result["actions"] if action["id"] == "rpx")
            self.assertEqual(action["actor"], "user")
            self.assertNotIn("command", action)

    def test_bad_or_missing_original_is_reported_without_configuring(self):
        for missing in (True, False):
            with self.subTest(missing=missing), tempfile.TemporaryDirectory() as directory, self.ready_environment():
                root, rpx = self.root(directory)
                if missing:
                    rpx.unlink()
                else:
                    rpx.write_bytes(b"wrong version")
                result = preflight.assess(root, rpx)
                checks = {row["id"]: row for row in result["checks"]}
                self.assertEqual(checks["rpx"]["status"], "action_required")
                self.assertEqual(checks["configuration"]["status"], "action_required")
                self.assertFalse(any(action.get("command", [None, None])[1:2] == ["tools/decomp.py"] for action in result["actions"]))

    def test_apple_clang_without_powerpc_and_missing_objdump_have_agent_actions(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment(), patch.object(preflight.disassembly, "locate", side_effect=ValueError("missing objdump")):
            root, rpx = self.root(directory)
            with patch.object(preflight, "probe", return_value=subprocess.CompletedProcess([], 0, "arm64 - ARM64", "")):
                result = preflight.assess(root, rpx)
            actions = {row["id"]: row for row in result["actions"]}
            self.assertIn("clang_powerpc", actions)
            self.assertIn("llvm_objdump", actions)
            self.assertEqual(actions["clang_powerpc"]["actor"], "agent")

    def test_missing_or_incompatible_libclang_requires_agent_setup(self):
        for target in ("locate_libclang", "ClangParser"):
            with self.subTest(target=target), tempfile.TemporaryDirectory() as directory, self.ready_environment(), patch.object(preflight.contracts, target, side_effect=ValueError("libclang C API unavailable")):
                root, rpx = self.root(directory)
                result = preflight.assess(root, rpx)
                action = next(row for row in result["actions"] if row["id"] == "libclang")
                self.assertEqual(action["actor"], "agent")
                self.assertIn("strict contract audit", action["detail"])

    def test_missing_git_identity_requests_user_values_without_inventing_them(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            with patch.object(preflight, "probe", side_effect=lambda command: subprocess.CompletedProcess(command, 1, "", "") if "config" in command else self.probes(command)):
                result = preflight.assess(root, rpx)
            actions = {row["id"]: row for row in result["actions"]}
            for key in ("git_name", "git_email"):
                self.assertEqual(actions[key]["actor"], "user")
                self.assertNotIn("command", actions[key])

    def test_present_ghs_is_not_ready_on_unsupported_host(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment(), patch.object(preflight.platform, "system", return_value="Linux"), patch.object(preflight.platform, "machine", return_value="aarch64"):
            root, rpx = self.root(directory)
            result = preflight.assess(root, rpx)
            self.assertEqual(next(row for row in result["checks"] if row["id"] == "ghs")["status"], "action_required")

    def test_missing_github_cli_differs_from_login_needed(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            with patch.object(preflight.shutil, "which", return_value=None):
                result = preflight.assess(root, rpx)
            self.assertEqual(next(row for row in result["actions"] if row["id"] == "github")["actor"], "agent")
            with patch.object(preflight, "probe", side_effect=lambda command: subprocess.CompletedProcess(command, 1, "", "To get started, run gh auth login") if "api" in command else self.probes(command)):
                result = preflight.assess(root, rpx)
            login = next(row for row in result["actions"] if row["id"] == "github")
            self.assertEqual(login["actor"], "user")
            self.assertEqual(login["command"], ["gh", "auth", "login"])

    def test_network_failure_does_not_request_another_github_login(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            with patch.object(preflight, "probe", side_effect=lambda command: subprocess.CompletedProcess(command, 1, "", "error connecting to api.github.com") if "api" in command else self.probes(command)):
                result = preflight.assess(root, rpx)
            action = next(row for row in result["actions"] if row["id"] == "github")
            self.assertEqual(action["actor"], "agent")
            self.assertEqual(action["command"], ["gh", "api", "user", "--jq", ".login"])

    def test_missing_toolchain_offers_pinned_installer_only_on_supported_host(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            import shutil
            shutil.rmtree(root / ".local/toolchains/ghs-5.3.22")
            with patch.object(preflight.platform, "system", return_value="Linux"), patch.object(preflight.platform, "machine", return_value="x86_64"):
                result = preflight.assess(root, rpx)
            action = next(row for row in result["actions"] if row["id"] == "ghs")
            self.assertEqual(action["command"], ["python3", "tools/toolchain.py"])
            with patch.object(preflight.platform, "system", return_value="Linux"), patch.object(preflight.platform, "machine", return_value="aarch64"):
                result = preflight.assess(root, rpx)
            self.assertNotIn("command", next(row for row in result["actions"] if row["id"] == "ghs"))

    def test_partial_toolchain_is_preserved_without_reinstall_command(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            runner = root / ".local/toolchains/ghs-5.3.22/wibo"
            runner.chmod(0o644)
            result = preflight.assess(root, rpx)
            action = next(row for row in result["actions"] if row["id"] == "ghs")
            self.assertNotIn("command", action)
            self.assertTrue(runner.exists())
            self.assertIn("preserve", action["detail"])

    def test_malformed_local_config_yields_repair_action_instead_of_traceback(self):
        for value in ("{", "[]", '{"rpx": 7}', '{"compiler": false}'):
            with self.subTest(value=value), tempfile.TemporaryDirectory() as directory, self.ready_environment():
                root, rpx = self.root(directory)
                (root / ".local/config.json").write_text(value)
                result = preflight.assess(root, rpx)
                self.assertEqual(result["status"], "action_required")
                self.assertTrue(any(row["id"] == "configuration" for row in result["actions"]))

    def test_timeout_is_an_action_and_command_exit_code_follows_readiness(self):
        with tempfile.TemporaryDirectory() as directory, self.ready_environment():
            root, rpx = self.root(directory)
            with patch.object(preflight, "probe", side_effect=subprocess.TimeoutExpired([], 15)):
                result = preflight.assess(root, rpx)
            self.assertEqual(result["status"], "action_required")
            output = io.StringIO()
            with patch.object(preflight, "ROOT", root), redirect_stdout(output):
                self.assertEqual(preflight.main(["--rpx", str(rpx)]), 0)
            self.assertEqual(json.loads(output.getvalue())["status"], "ready")
            output = io.StringIO()
            with patch.object(preflight, "ROOT", root), patch.object(preflight, "assess", return_value=result), redirect_stdout(output):
                self.assertEqual(preflight.main([]), 1)


if __name__ == "__main__":
    unittest.main()
