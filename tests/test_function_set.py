import hashlib
import unittest

from botw_decomp.matching import compare_function
from tests.test_elf import make_object


TARGET_ADDRESS = 0x02001000
HELPER_ADDRESS = 0x02002000
TARGET = bytes.fromhex("386000074e800020")
HELPER = bytes.fromhex("386000084e800020")


def digest(data):
    return hashlib.sha256(data).hexdigest()


def references(target=TARGET, helper=HELPER, *, bindings=None,
               data_bindings=None, data_relocations=None):
    target_row = {
        "symbol": "target",
        "address": f"0x{TARGET_ADDRESS:08x}",
        "size": len(target),
        "sha256": digest(target),
    }
    helper_row = {
        "symbol": "helper",
        "address": f"0x{HELPER_ADDRESS:08x}",
        "size": len(helper),
        "sha256": digest(helper),
    }
    if bindings is not None:
        target_row["bindings"] = bindings
    if data_bindings is not None:
        helper_row["data_bindings"] = data_bindings
        helper_row["data_relocations"] = data_relocations or []
    return [target_row, helper_row]


def two_functions(target=TARGET, helper=HELPER, *, relocations=(),
                  extra_symbols=(), rodata=None, text_alignment=4):
    symbols = [("helper", len(target), len(helper), 0x12, 0, "text"), *extra_symbols]
    return make_object(target + helper, symbol_size=len(target), extra_symbols=symbols,
                       relocations=relocations, rodata=rodata,
                       text_alignment=text_alignment)


class FunctionSetTests(unittest.TestCase):
    def test_hash_references_match_every_function(self):
        from botw_decomp.matching import compare_function_set

        report = compare_function_set(two_functions(), references())
        self.assertTrue(report["matched"])
        self.assertEqual(report["status"], "match")
        self.assertEqual([row["symbol"] for row in report["results"]], ["target", "helper"])
        self.assertTrue(all(row["matched"] for row in report["results"]))

    def test_local_original_bytes_match_every_function(self):
        from botw_decomp.matching import compare_function_set

        report = compare_function_set(two_functions(), references(),
                                      {"target": TARGET, "helper": HELPER})
        self.assertTrue(report["matched"])
        self.assertTrue(all(row["matched"] for row in report["results"]))

    def test_single_function_api_still_rejects_compound_object(self):
        result = compare_function(two_functions(), "target", TARGET, TARGET_ADDRESS, {})
        self.assertFalse(result["matched"])
        self.assertEqual(result["status"], "rejected")

    def test_changed_helper_atomically_rejects_matching_target(self):
        from botw_decomp.matching import compare_function_set

        changed = bytes.fromhex("386000094e800020")
        report = compare_function_set(two_functions(helper=changed), references(helper=HELPER))
        self.assertFalse(report["matched"])
        self.assertTrue(report["results"])
        self.assertTrue(all(not row["matched"] for row in report["results"]))
        self.assertTrue(any(row.get("individually_matched") for row in report["results"]))

    def test_extra_missing_duplicate_and_overlapping_functions_reject(self):
        from botw_decomp.matching import compare_function_set

        expected = references()
        cases = {
            "extra": make_object(TARGET + HELPER + TARGET, symbol_size=8,
                                 extra_symbols=[("helper", 8, 8, 0x12, 0, "text"),
                                                ("extra", 16, 8, 0x12, 0, "text")]),
            "missing": make_object(TARGET + HELPER, symbol_size=8),
            "duplicate": two_functions(extra_symbols=[("helper", 8, 8, 0x12, 0, "text")]),
            "overlap": make_object(TARGET + HELPER, symbol_size=8,
                                    extra_symbols=[("helper", 4, 8, 0x12, 0, "text")]),
        }
        for label, obj in cases.items():
            with self.subTest(label=label):
                self.assertFalse(compare_function_set(obj, expected)["matched"])

    def test_symbol_size_mismatch_rejects_set(self):
        from botw_decomp.matching import compare_function_set

        obj = make_object(TARGET + HELPER, symbol_size=4,
                          extra_symbols=[("helper", 8, 8, 0x12, 0, "text")])
        self.assertFalse(compare_function_set(obj, references())["matched"])

    def test_unresolved_cross_function_relocation_rejects(self):
        from botw_decomp.matching import compare_function_set

        branch = bytes.fromhex("480000014e800020")
        obj = two_functions(target=branch, relocations=[(0, 10, "helper", 0)])
        self.assertFalse(compare_function_set(obj, references(target=branch))["matched"])

    def test_extra_allocated_data_and_stray_text_bytes_reject(self):
        from botw_decomp.matching import compare_function_set

        with_rodata = two_functions(rodata=b"hidden")
        stray = make_object(TARGET + bytes.fromhex("12345678") + HELPER,
                            symbol_size=8, text_alignment=16,
                            extra_symbols=[("helper", 12, 8, 0x12, 0, "text")])
        for obj in (with_rodata, stray):
            with self.subTest(object_length=len(obj)):
                self.assertFalse(compare_function_set(obj, references())["matched"])

    def test_short_zero_or_nop_alignment_gap_is_allowed(self):
        from botw_decomp.matching import compare_function_set

        for padding in (bytes(4), bytes.fromhex("60000000")):
            obj = make_object(TARGET + padding + HELPER, symbol_size=8,
                              text_alignment=16,
                              extra_symbols=[("helper", 12, 8, 0x12, 0, "text")])
            with self.subTest(padding=padding.hex()):
                self.assertTrue(compare_function_set(obj, references())["matched"])

    def test_relocation_crossing_function_boundary_rejects(self):
        from botw_decomp.matching import compare_function_set

        external = ("outside", 0, 0, 0x10, 0, "undef")
        obj = two_functions(relocations=[(6, 1, "outside", 0)], extra_symbols=[external])
        refs = references(bindings={"outside": "0x02003000"})
        self.assertFalse(compare_function_set(obj, refs)["matched"])

    def test_direct_branch_uses_trusted_original_function_address(self):
        from botw_decomp.matching import compare_function_set

        branch = bytes.fromhex("480000014e800020")
        relocated = bytes.fromhex("480010014e800020")
        obj = two_functions(target=branch, relocations=[(0, 10, "helper", 0)])
        refs = references(target=relocated, bindings={"helper": f"0x{HELPER_ADDRESS:08x}"})
        report = compare_function_set(obj, refs)
        self.assertTrue(report["matched"])

    def test_missing_or_conflicting_function_binding_rejects(self):
        from botw_decomp.matching import compare_function_set

        branch = bytes.fromhex("480000014e800020")
        relocated = bytes.fromhex("480010014e800020")
        obj = two_functions(target=branch, relocations=[(0, 10, "helper", 0)])
        for binding in (None, {"helper": "0x02002004"}, {"invented": "0x02003000"}):
            refs = references(target=relocated, bindings=binding)
            with self.subTest(binding=binding):
                self.assertFalse(compare_function_set(obj, refs)["matched"])

    def test_reference_original_keys_and_hashes_are_validated(self):
        from botw_decomp.matching import compare_function_set

        for originals in ({"target": TARGET}, {"target": TARGET, "helper": b"wrong!!!"},
                          {"target": TARGET, "helper": HELPER + bytes(4)}):
            with self.subTest(keys=tuple(originals)):
                self.assertFalse(compare_function_set(two_functions(), references(), originals)["matched"])

        bad_hashes = references()
        bad_hashes[1] = {**bad_hashes[1], "sha256": "0" * 64}
        report = compare_function_set(two_functions(), bad_hashes)
        self.assertFalse(report["matched"])
        self.assertTrue(all(not row["matched"] for row in report["results"]))

    def test_helper_data_relocation_checks_full_address_provenance(self):
        from botw_decomp.matching import compare_function_set

        data_name = "data_12348000"
        data_binding = {data_name: "0x12348000"}
        fields = [{"offset": 2, "type": 5, "symbol": data_name}]
        helper = bytes.fromhex("3c6012344e800020")
        symbol = (data_name, 0, 0, 0x11, 0, "undef")
        correct = two_functions(helper=bytes.fromhex("3c6000004e800020"),
                                relocations=[(10, 5, data_name, 0)],
                                extra_symbols=[symbol])
        refs = references(helper=helper, data_bindings=data_binding, data_relocations=fields)
        self.assertTrue(compare_function_set(correct, refs)["matched"])

        same_high_half_wrong_addend = two_functions(
            helper=bytes.fromhex("3c6000004e800020"),
            relocations=[(10, 5, data_name, 4)], extra_symbols=[symbol])
        report = compare_function_set(same_high_half_wrong_addend, refs)
        self.assertFalse(report["matched"])

    def test_negative_helper_addend_resolves_from_original_address(self):
        from botw_decomp.matching import compare_function_set

        branch = bytes.fromhex("480000014e800020")
        expected = bytes.fromhex("48000ff94e800020")
        obj = two_functions(target=branch,
                            relocations=[(0, 10, "helper", -8)])
        refs = references(target=expected,
                          bindings={"helper": f"0x{HELPER_ADDRESS:08x}"})
        report = compare_function_set(obj, refs)
        self.assertTrue(report["matched"])


if __name__ == "__main__":
    unittest.main()
