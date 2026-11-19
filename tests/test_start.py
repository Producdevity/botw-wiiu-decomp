from pathlib import Path
import subprocess
import sys
import unittest
from unittest import mock

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import start  # noqa: E402


def completed(code=0, out="", err=""):
    return subprocess.CompletedProcess([], code, out, err)


class StartTests(unittest.TestCase):
    def test_runs_automatic_steps_then_doctor(self):
        states = [
            {"actions": [{"id": "ghs", "command": ["python3", "tools/toolchain.py"]}]},
            {"actions": [{"id": "configuration", "command": ["python3", "tools/decomp.py", "setup", "--game", "g"]}]},
            {"actions": []},
        ]
        commands = []
        with mock.patch.object(start, "push_access", return_value=True):
            result = start.prepare(Path("g"), assess=lambda root, game: states.pop(0),
                                   execute=lambda command: commands.append(command) or completed())
        self.assertEqual(result["status"], "ready")
        self.assertEqual(result["done"], ["ghs", "configuration", "doctor"])
        self.assertEqual(commands[-1], ["python3", "tools/decomp.py", "doctor"])
        self.assertNotIn("fork", result)

    def test_user_actions_are_reported_not_run(self):
        actions = [{"id": "rpx", "actor": "user", "detail": "Provide the path"}]
        commands = []
        result = start.prepare(None, assess=lambda root, game: {"actions": actions},
                               execute=lambda command: commands.append(command) or completed())
        self.assertEqual(result["status"], "action_required")
        self.assertEqual(result["actions"], actions)
        self.assertEqual(commands, [])

    def test_failed_step_stops_with_its_error(self):
        state = {"actions": [{"id": "ghs", "command": ["python3", "tools/toolchain.py"]}]}
        result = start.prepare(None, assess=lambda root, game: state,
                               execute=lambda command: completed(1, err="download failed"))
        self.assertEqual(result["status"], "action_required")
        self.assertIn("download failed", result["actions"][0]["detail"])

    def test_missing_push_access_suggests_fork(self):
        with mock.patch.object(start, "push_access", return_value=False):
            result = start.prepare(None, assess=lambda root, game: {"actions": []},
                                   execute=lambda command: completed())
        self.assertIn("gh repo fork", result["fork"])


if __name__ == "__main__":
    unittest.main()
