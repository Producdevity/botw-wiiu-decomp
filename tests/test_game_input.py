import hashlib
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp import game_input, wua


class GameInputTests(unittest.TestCase):
    payload = b"synthetic updated executable"
    entry = "0005000e101c9400_v208/code/U-King.rpx"

    def root(self, temporary):
        root = Path(temporary).resolve() / "project"
        (root / "config").mkdir(parents=True)
        digest = hashlib.sha256(self.payload).hexdigest()
        (root / "config/target.json").write_text(json.dumps({"rpx_sha256": digest}))
        return root

    def archive(self, temporary):
        path = Path(temporary).resolve() / "Game with spaces.wua"
        path.write_bytes(b"synthetic archive stand-in; backend is mocked")
        return path

    def backend(self):
        return patch.multiple(wua, reader_ready=lambda root: True,
                              candidates=lambda archive, root: [{"path": self.entry, "size": len(self.payload)}],
                              read_rpx=lambda archive, entry, root: self.payload)

    def test_dump_folder_selects_update_without_copying_or_changing_files(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            dump = Path(temporary) / "Dumpling"
            base = dump / "Games/BotW/code/U-King.rpx"
            update = dump / "Updates/BotW/code/U-King.rpx"
            base.parent.mkdir(parents=True)
            update.parent.mkdir(parents=True)
            base.write_bytes(b"old executable")
            update.write_bytes(self.payload)
            result = game_input.resolve_game(dump, root, prepare=True)
            self.assertEqual(result.rpx, update.resolve())
            self.assertEqual(result.format, "folder")
            self.assertEqual(base.read_bytes(), b"old executable")
            self.assertFalse((root / ".local").exists())

    def test_folder_does_not_follow_symlinks_or_search_content(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            dump = Path(temporary) / "dump"
            outside = Path(temporary) / "outside"
            outside.mkdir()
            (outside / "U-King.rpx").write_bytes(self.payload)
            (dump / "content").mkdir(parents=True)
            (dump / "content/U-King.rpx").write_bytes(self.payload)
            (dump / "linked").symlink_to(outside, target_is_directory=True)
            with self.assertRaisesRegex(ValueError, "No supported"):
                game_input.resolve_game(dump, root)

    def test_explicit_executable_remains_supported_without_installation(self):
        with tempfile.TemporaryDirectory() as temporary, patch.object(wua, "install_reader") as install:
            root = self.root(temporary)
            path = Path(temporary) / "U-King.rpx"
            path.write_bytes(self.payload)
            self.assertEqual(game_input.resolve_game(path, root).rpx, path.resolve())
            install.assert_not_called()

    def test_wrong_original_is_rejected_without_creating_local_data(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            path = Path(temporary) / "U-King.rpx"
            path.write_bytes(b"wrong version")
            with self.assertRaisesRegex(ValueError, "SHA-256"):
                game_input.resolve_game(path, root, prepare=True)
            self.assertFalse((root / ".local").exists())

    def test_readonly_wua_assessment_does_not_install_or_extract(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            archive = self.archive(temporary)
            with patch.object(wua, "reader_ready", return_value=False), patch.object(wua, "install_reader") as install:
                with self.assertRaises(wua.ReaderUnavailable):
                    game_input.resolve_game(archive, root)
                install.assert_not_called()
            with self.backend():
                result = game_input.resolve_game(archive, root)
                self.assertEqual(result.archive_entry, self.entry)
                self.assertFalse(result.rpx.exists())
                self.assertFalse((root / ".local").exists())

    def test_setup_installs_reader_and_keeps_only_verified_executable(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            archive = self.archive(temporary)
            original = archive.read_bytes()
            with self.backend(), patch.object(wua, "reader_ready", return_value=False), patch.object(wua, "install_reader") as install:
                result = game_input.resolve_game(archive, root, prepare=True, compiler="clang++")
                install.assert_called_once_with(root, compiler="clang++")
            self.assertEqual(result.rpx.read_bytes(), self.payload)
            self.assertEqual(archive.read_bytes(), original)
            files = [p for p in (root / ".local").rglob("*") if p.is_file()]
            self.assertEqual(files, [result.rpx])
            with self.backend():
                before = result.rpx.stat().st_ino
                again = game_input.resolve_game(archive, root, prepare=True)
                self.assertEqual(again.rpx.stat().st_ino, before)

    def test_wua_prefers_correct_update_and_does_not_trust_filename(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            archive = self.archive(temporary)
            entries = [{"path": "00050000101c9400_v0/code/U-King.rpx", "size": len(self.payload)},
                       {"path": self.entry, "size": len(self.payload)}]
            read = []
            def payload(archive, entry, root):
                read.append(entry)
                return self.payload if entry == self.entry else b"x" * len(self.payload)
            with self.backend(), patch.object(wua, "candidates", return_value=entries), patch.object(wua, "read_rpx", side_effect=payload):
                result = game_input.resolve_game(archive, root)
                self.assertEqual(result.archive_entry, self.entry)
                self.assertEqual(read, [self.entry])
            with self.backend(), patch.object(wua, "read_rpx", return_value=b"x" * len(self.payload)):
                with self.assertRaisesRegex(ValueError, "correct game update"):
                    game_input.resolve_game(archive, root, prepare=True)
            self.assertFalse((root / ".local").exists())

    def test_truncated_or_oversized_wua_payload_fails_closed(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            archive = self.archive(temporary)
            with self.backend(), patch.object(wua, "read_rpx", return_value=b"truncated"):
                with self.assertRaisesRegex(ValueError, "Truncated"):
                    game_input.resolve_game(archive, root, prepare=True)
            with self.backend(), patch.object(wua, "candidates", return_value=[{"path": self.entry, "size": game_input.MAX_RPX_BYTES + 1}]), patch.object(wua, "read_rpx") as read:
                with self.assertRaisesRegex(ValueError, "size"):
                    game_input.resolve_game(archive, root)
                read.assert_not_called()

    def test_corrupt_cache_and_symlink_are_preserved(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            archive = self.archive(temporary)
            cache = root / ".local/game-input" / hashlib.sha256(self.payload).hexdigest() / "U-King.rpx"
            cache.parent.mkdir(parents=True)
            cache.write_bytes(b"existing unrelated content")
            with self.backend(), self.assertRaisesRegex(ValueError, "preserve"):
                game_input.resolve_game(archive, root, prepare=True)
            self.assertEqual(cache.read_bytes(), b"existing unrelated content")
            cache.unlink()
            outside = Path(temporary) / "outside.rpx"
            outside.write_bytes(self.payload)
            cache.symlink_to(outside)
            with self.backend(), self.assertRaisesRegex(ValueError, "symlinks"):
                game_input.resolve_game(archive, root, prepare=True)
            self.assertTrue(cache.is_symlink())
            self.assertEqual(outside.read_bytes(), self.payload)

    def test_parent_symlink_swap_cannot_redirect_cache_writes(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            archive = self.archive(temporary)
            outside = Path(temporary) / "outside-cache"
            outside.mkdir()
            original = game_input._cache_path
            def swapped(project, expected):
                result = original(project, expected)
                (project / ".local").symlink_to(outside, target_is_directory=True)
                return result
            with self.backend(), patch.object(game_input, "_cache_path", side_effect=swapped):
                with self.assertRaisesRegex(ValueError, "symlink"):
                    game_input.resolve_game(archive, root, prepare=True)
            self.assertEqual(list(outside.iterdir()), [])

    def test_folder_entry_budget_counts_non_executable_files(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            dump = Path(temporary) / "dump"
            dump.mkdir()
            for number in range(4):
                (dump / f"other-{number}").write_text("unrelated")
            with patch.object(game_input, "MAX_FOLDER_ENTRIES", 2):
                with self.assertRaisesRegex(ValueError, "too many entries"):
                    game_input.resolve_game(dump, root)

    def test_encrypted_dump_gets_actionable_error(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = self.root(temporary)
            path = Path(temporary) / "game.wux"
            path.write_bytes(b"encrypted stand-in")
            with self.assertRaisesRegex(ValueError, "Dumpling"):
                game_input.resolve_game(path, root)


if __name__ == "__main__":
    unittest.main()
