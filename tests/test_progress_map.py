import unittest

from botw_decomp.progress_map import render, squarify, tile_states, tiles


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

    def test_tile_states_split_references_across_blocks(self):
        target = {"text": [{"address": "0x8000", "size": 0x10000}]}
        rows = {"fn_0000fff0": {"address": "0xfff0", "size": 0x20},
                "fn_00010100": {"address": "0x10100", "size": 0x10}}
        blocks = tile_states(target, rows, {"fn_0000fff0"})
        self.assertEqual(blocks[0x8000], {"matched": 0x10, "admitted": 0, "excluded": 0x7FF0})
        self.assertEqual(blocks[0x10000], {"matched": 0x10, "admitted": 0x10, "excluded": 0x7FE0})
        rows["fn_00010100"]["address"] = "0xfff8"
        with self.assertRaises(ValueError):
            tile_states(target, rows, set())

    def test_units_replace_blocks_where_they_exist(self):
        target = {"text": [{"address": "0x8000", "size": 0x10000}]}
        units = [{"start": "0x00009000", "end": "0x00011000"}]
        self.assertEqual(tiles(target, units),
                         [(0x8000, 0x9000), (0x9000, 0x11000), (0x11000, 0x18000)])
        rows = {"fn_0000fff0": {"address": "0xfff0", "size": 0x20}}
        states = tile_states(target, rows, {"fn_0000fff0"}, units)
        self.assertEqual(states[0x9000], {"matched": 0x20, "admitted": 0, "excluded": 0x7FE0})
        self.assertEqual(states[0x8000]["excluded"], 0x1000)
        with self.assertRaises(ValueError):
            tiles(target, units + [{"start": "0x00010000", "end": "0x00012000"}])
        with self.assertRaises(ValueError):
            tiles(target, [{"start": "0x00017000", "end": "0x00019000"}])

    def test_render_reports_state_shares(self):
        target = {"text": [{"address": "0x0", "size": 0x100}]}
        rows = {"fn_00000000": {"address": "0x0", "size": 0x40},
                "fn_00000040": {"address": "0x40", "size": 0x40}}
        svg = render(target, rows, {"fn_00000000"})
        self.assertIn("Matched 25.00%", svg)
        self.assertIn("Ready to reconstruct 25.00%", svg)
        self.assertIn("Not yet admitted 50.00%", svg)
