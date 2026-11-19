import unittest

from botw_decomp.progress_map import block_states, render, squarify


class ProgressMapTests(unittest.TestCase):
    def test_squarify_fills_the_area_in_input_order(self):
        rects = squarify([6, 6, 4, 3, 2, 2, 1], 0, 0, 6, 4)
        self.assertEqual(len(rects), 7)
        self.assertAlmostEqual(sum(w * h for _, _, w, h in rects), 24)
        for (x, y, w, h), size in zip(rects, [6, 6, 4, 3, 2, 2, 1]):
            self.assertAlmostEqual(w * h, size)
            self.assertTrue(-1e-9 <= x and x + w <= 6 + 1e-9 and -1e-9 <= y and y + h <= 4 + 1e-9)
        with self.assertRaises(ValueError):
            squarify([1, 0], 0, 0, 1, 1)

    def test_block_states_split_references_across_blocks(self):
        target = {"text": [{"address": "0x8000", "size": 0x10000}]}
        rows = {"fn_0000fff0": {"address": "0xfff0", "size": 0x20},
                "fn_00010100": {"address": "0x10100", "size": 0x10}}
        blocks = block_states(target, rows, {"fn_0000fff0"})
        self.assertEqual(blocks[0x8000], {"matched": 0x10, "admitted": 0, "excluded": 0x7FF0})
        self.assertEqual(blocks[0x10000], {"matched": 0x10, "admitted": 0x10, "excluded": 0x7FE0})
        rows["fn_00010100"]["address"] = "0xfff8"
        with self.assertRaises(ValueError):
            block_states(target, rows, set())

    def test_render_reports_state_shares(self):
        target = {"text": [{"address": "0x0", "size": 0x100}]}
        rows = {"fn_00000000": {"address": "0x0", "size": 0x40},
                "fn_00000040": {"address": "0x40", "size": 0x40}}
        svg = render(target, rows, {"fn_00000000"})
        self.assertIn("Matched 25.00%", svg)
        self.assertIn("Ready to reconstruct 25.00%", svg)
        self.assertIn("Not yet admitted 50.00%", svg)
