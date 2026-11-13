import io
from pathlib import Path
import tarfile
import tempfile
import unittest
from botw_decomp.toolchain import unpack


class ArchiveTests(unittest.TestCase):
    def test_rejects_escape_symlink_and_duplicate(self):
        for names, kind in [(['../escape'], tarfile.REGTYPE), (['/absolute'], tarfile.REGTYPE),
                            (['link'], tarfile.SYMTYPE), (['same', 'same'], tarfile.REGTYPE)]:
            with self.subTest(names=names), tempfile.TemporaryDirectory() as directory:
                root = Path(directory)
                archive = root / 'test.tgz'
                with tarfile.open(archive, 'w:gz') as bundle:
                    for name in names:
                        entry = tarfile.TarInfo(name)
                        entry.type = kind
                        entry.linkname = '/etc/passwd' if kind == tarfile.SYMTYPE else ''
                        bundle.addfile(entry, io.BytesIO())
                with self.assertRaises(ValueError):
                    unpack(archive, root / 'out')
