import hashlib
from pathlib import Path
import struct
import tempfile
import unittest
import zlib

from botw_decomp.rpx import RpxError, load, parse


CODE = bytes.fromhex("386000074e800020")
START = 0x02000000


def make_rpx(code=CODE, relocations=(), compressed=False, entry=START):
    names = b"\0.text\0.symtab\0.strtab\0.rela.text\0.shstrtab\0"
    payload = struct.pack(">I", len(code)) + zlib.compress(code) if compressed else code
    blocks = [b"", payload, bytes(16), b"\0",
              b"".join(struct.pack(">IIi", site, kind, 0) for site, kind in relocations), names]
    kinds = [0, 1, 2, 3, 4, 3]
    labels = [b"", b".text", b".symtab", b".strtab", b".rela.text", b".shstrtab"]
    result = bytearray(64 + len(blocks) * 40)
    result[:16] = b"\x7fELF\x01\x02\x01\xca\xfe" + bytes(7)
    struct.pack_into(">HHIIIIIHHHHHH", result, 16, 0xFE01, 20, 1, entry, 0, 64,
                     0, 52, 0, 0, 40, len(blocks), 5)
    for index, block in enumerate(blocks):
        if index == 0:
            continue
        result.extend(bytes(-len(result) % 4))
        offset = len(result)
        result.extend(block)
        flags = (6 | (0x08000000 if compressed else 0)) if index == 1 else 0
        struct.pack_into(">10I", result, 64 + 40 * index,
                         names.index(labels[index]), kinds[index], flags,
                         START if index == 1 else 0, offset, len(block),
                         3 if index == 2 else 2 if index == 4 else 0,
                         1 if index in (2, 4) else 0,
                         4 if index in (1, 2, 4) else 1,
                         16 if index == 2 else 12 if index == 4 else 0)
    return bytes(result)


def set_header(data, section, field, value):
    result = bytearray(data)
    struct.pack_into(">I", result, 64 + 40 * section + field * 4, value)
    return bytes(result)


class RpxTests(unittest.TestCase):
    def test_original_bytes_and_file_hash_are_preserved(self):
        data = make_rpx()
        image = parse(data)
        self.assertEqual(image.read(START, 8), CODE)
        self.assertEqual(image.sha256, hashlib.sha256(data).hexdigest())

    def test_compressed_text_is_decoded_without_changing_addresses(self):
        image = parse(make_rpx(compressed=True))
        self.assertEqual(image.read(START, 8), CODE)
        self.assertEqual(image.sections[1].size, 8)

    def test_hash_pin_is_checked_before_parsing(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "synthetic.rpx"
            path.write_bytes(make_rpx())
            with self.assertRaisesRegex(RpxError, "wrong RPX"):
                load(path, "0" * 64)
            self.assertEqual(load(path, hashlib.sha256(path.read_bytes()).hexdigest()).entry, START)

    def test_relocation_start_before_read_range_still_blocks_it(self):
        image = parse(make_rpx(relocations=[(START, 1)]))
        with self.assertRaisesRegex(RpxError, "canonicalisation"):
            image.read(START + 2, 2)
        self.assertEqual(image.read(START + 4, 4), CODE[4:])

    def test_halfword_relocation_uses_its_exact_write_width(self):
        image = parse(make_rpx(relocations=[(START + 2, 4)]))
        self.assertEqual(image.read(START, 2), CODE[:2])
        self.assertTrue(image.has_relocation(START, 4))
        self.assertFalse(image.has_relocation(START + 4, 4))
        with self.assertRaises(RpxError):
            image.read(START, 8)

    def test_relocation_at_exclusive_end_does_not_block_range(self):
        image = parse(make_rpx(relocations=[(START + 4, 1)]))
        self.assertEqual(image.read(START, 4), CODE[:4])

    def test_bad_relocations_fail_closed(self):
        cases = [[(START + 6, 1)], [(START - 4, 1)], [(START, 255)],
                 [(START + 1, 4)], [(START, 1), (START + 2, 4)],
                 [(START, 1), (START, 1)], [(START, (1 << 8) | 1)]]
        for relocations in cases:
            with self.subTest(relocations=relocations), self.assertRaises(RpxError):
                parse(make_rpx(relocations=relocations))

    def test_bad_relocation_tables_fail_closed(self):
        data = make_rpx(relocations=[(START, 1)])
        for section, field, value in ((4, 6, 0), (4, 7, 0), (4, 7, 9),
                                      (4, 9, 8), (2, 9, 12), (4, 1, 9)):
            with self.subTest(field=field, value=value), self.assertRaises(RpxError):
                parse(set_header(data, section, field, value))

    def test_invalid_ranges_are_rejected(self):
        image = parse(make_rpx())
        for address, size in ((START - 4, 8), (START, 0), (START, 12),
                              (-1, 4), (0xFFFFFFFC, 8), (True, 4), (START, 4.0)):
            with self.subTest(address=address, size=size), self.assertRaises(RpxError):
                image.read(address, size)

    def test_truncation_is_rejected(self):
        data = make_rpx()
        for length in (0, 16, 51, 63, 303, len(data) - 1):
            with self.subTest(length=length), self.assertRaises(RpxError):
                parse(data[:length])

    def test_bad_section_metadata_is_rejected(self):
        data = make_rpx()
        for section, field, value in ((0, 5, 1), (1, 4, len(data)),
                                      (1, 3, 0xFFFFFFFC), (1, 8, 3),
                                      (5, 1, 1), (1, 0, 9999)):
            with self.subTest(section=section, field=field), self.assertRaises(RpxError):
                parse(set_header(data, section, field, value))

    def test_compressed_length_and_trailing_stream_are_rejected(self):
        original = make_rpx(compressed=True)
        offset, size = struct.unpack_from(">II", original, 64 + 40 + 16)
        wrong_length = bytearray(original)
        struct.pack_into(">I", wrong_length, offset, len(CODE) - 1)
        bad_stream = bytearray(original)
        bad_stream[offset + 4] = 0
        extra_stream = set_header(original, 1, 5, size + 1)
        for data in (bytes(wrong_length), bytes(bad_stream), extra_stream):
            with self.subTest(data=data[:16]), self.assertRaises(RpxError):
                parse(data)


if __name__ == "__main__":
    unittest.main()
