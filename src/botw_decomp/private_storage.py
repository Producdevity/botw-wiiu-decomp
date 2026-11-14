"""Anchor private cache writes to directory descriptors on supported POSIX hosts."""
from contextlib import contextmanager
import os
from pathlib import Path
import secrets
import stat


@contextmanager
def directory(root: Path, components):
    descriptor = os.open(root, os.O_RDONLY | os.O_DIRECTORY | os.O_NOFOLLOW)
    try:
        for name in components:
            if not name or "/" in name or name in (".", ".."):
                raise ValueError("Invalid private directory component")
            try:
                os.mkdir(name, mode=0o700, dir_fd=descriptor)
            except FileExistsError:
                pass
            next_descriptor = os.open(name, os.O_RDONLY | os.O_DIRECTORY | os.O_NOFOLLOW,
                                      dir_fd=descriptor)
            os.close(descriptor)
            descriptor = next_descriptor
        yield descriptor
    except OSError as error:
        raise ValueError("Private storage path changed or contains a symlink: " + str(error)) from error
    finally:
        os.close(descriptor)


def read_file(descriptor, name, limit):
    source = os.open(name, os.O_RDONLY | os.O_NOFOLLOW | os.O_NONBLOCK, dir_fd=descriptor)
    with os.fdopen(source, "rb") as stream:
        info = os.fstat(stream.fileno())
        if not stat.S_ISREG(info.st_mode) or info.st_size > limit:
            raise ValueError("Private cache entry is not a bounded regular file")
        result = stream.read(limit + 1)
        if len(result) > limit:
            raise ValueError("Private cache entry grew while reading")
        return result


def create_file(descriptor, name, data, mode=0o600):
    temporary = ".pending-" + secrets.token_hex(12)
    output = os.open(temporary, os.O_WRONLY | os.O_CREAT | os.O_EXCL | os.O_NOFOLLOW,
                     mode, dir_fd=descriptor)
    try:
        with os.fdopen(output, "wb") as stream:
            stream.write(data)
        try:
            os.link(temporary, name, src_dir_fd=descriptor, dst_dir_fd=descriptor,
                    follow_symlinks=False)
            return True
        except FileExistsError:
            return False
    finally:
        os.unlink(temporary, dir_fd=descriptor)
