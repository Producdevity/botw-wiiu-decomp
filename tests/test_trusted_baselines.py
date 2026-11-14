"""Regressions for preserving trusted published definition interfaces."""
import hashlib
import io
import json
from contextlib import redirect_stdout
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from botw_decomp.compiler import compile_source, locate
from botw_decomp.contracts import ClangParser, audit_contracts, compact_report, main
from botw_decomp.elf import parse_object
from botw_decomp.matching import compare_function_hash

SYMBOL = 'fn_00000010'


class TrustedDefinitionBaselines(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.parser = ClangParser()
        cls.addClassCleanup(cls.parser.close)

    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix='botw-trusted-baseline-test-')
        self.addCleanup(self.temp.cleanup)
        self.trusted = Path(self.temp.name) / 'trusted'
        self.candidate = Path(self.temp.name) / 'candidate'
        self.row = {'id': SYMBOL, 'address': '0x00000010', 'size': 8,
                    'sha256': '0' * 64, 'symbol': SYMBOL,
                    'source': 'reconstructions/' + SYMBOL + '.cpp', 'status': 'unmatched'}
        for root in (self.trusted, self.candidate):
            (root / 'config').mkdir(parents=True)
            (root / 'include/botw').mkdir(parents=True)
            (root / 'reconstructions').mkdir()
            self.manifest(root)
            self.source(root, 'extern "C" int ' + SYMBOL + '() { return 7; }')

    def manifest(self, root, **changes):
        (root / 'config/functions.json').write_text(json.dumps({'schema_version': 1, 'functions': [dict(self.row, **changes)]}))

    def source(self, root, value):
        (root / self.row['source']).write_text(value)

    def audit(self):
        return audit_contracts(self.candidate, reference_root=self.trusted, libclang=self.parser.library_path)

    def strict(self):
        with redirect_stdout(io.StringIO()):
            return main(['--root', str(self.candidate), '--reference-root', str(self.trusted),
                         '--libclang', self.parser.library_path, '--strict', '--summary'])

    def test_unchanged_separate_root_definition_is_selected_and_matches(self):
        report = self.audit()
        self.assertEqual(report['coverage']['selected_translation_units'], 1)
        self.assertEqual(report['coverage']['trusted_definition_contracts'], 1)
        self.assertEqual(report['trusted_definition_contracts'][0]['status'], 'matches_trusted_definition')
        self.assertEqual(self.strict(), 0)
        self.assertEqual(report, self.audit())

    def test_unused_argument_and_same_width_return_change_with_equal_bytes_fail(self):
        compiler = locate()
        original = compile_source(compiler, self.candidate / self.row['source'], self.candidate / 'include')
        obj = parse_object(original)
        symbol = next(s for s in obj.symbols if s.name == SYMBOL)
        code = obj.sections[symbol.section_index].data[symbol.value:symbol.value + symbol.size]
        for signature, kind in [('int ' + SYMBOL + '(void *)', 'parameter_count_conflict'),
                                ('long ' + SYMBOL + '()', 'type_contract_conflict')]:
            with self.subTest(signature=signature):
                self.source(self.candidate, 'extern "C" ' + signature + ' { return 7; }')
                changed = compile_source(compiler, self.candidate / self.row['source'], self.candidate / 'include')
                self.assertTrue(compare_function_hash(changed, SYMBOL, hashlib.sha256(code).hexdigest(), len(code), 0x10, {})['matched'])
                summary = compact_report(self.audit())
                self.assertEqual(summary['findings'][0]['details'][0]['kind'], kind)
                self.assertEqual(self.strict(), 1)

    def test_candidate_metadata_and_coherent_header_cannot_rewrite_baseline(self):
        for root in (self.trusted, self.candidate):
            (root / 'include/botw/api.h').write_text('typedef int Word;')
            self.source(root, '#include "botw/api.h"\nextern "C" Word ' + SYMBOL + '() { return 7; }')
        (self.candidate / 'include/botw/api.h').write_text('typedef long Word;')
        self.manifest(self.candidate, source='reconstructions/removed.cpp',
                      source_contract={'return_type': 'long', 'parameter_types': [], 'variadic': False})
        self.assertEqual(self.strict(), 1)
        (self.candidate / 'config/functions.json').unlink()
        self.assertEqual(self.strict(), 1)
        (self.candidate / self.row['source']).unlink()
        self.assertEqual(self.strict(), 2)

    def test_explicit_trusted_metadata_has_priority_over_trusted_definition(self):
        self.manifest(self.trusted, source_contract={'return_type': 'long', 'parameter_types': [], 'variadic': False})
        self.source(self.candidate, 'extern "C" long ' + SYMBOL + '() { return 7; }')
        report = self.audit()
        self.assertEqual(report['trusted_definition_contracts'], [])
        self.assertEqual(report['source_contracts'][0]['status'], 'matches_source_contract')
        self.assertEqual(self.strict(), 0)

    def test_missing_candidate_even_with_explicit_contract_fails(self):
        self.manifest(self.trusted, source_contract={'return_type': 'int', 'parameter_types': [], 'variadic': False})
        (self.candidate / self.row['source']).unlink()
        self.assertEqual(self.strict(), 2)

    def test_unsupported_missing_and_ambiguous_trusted_analysis_fails(self):
        variants = ['extern "C" int ' + SYMBOL + '();',
                    'extern "C" int ' + SYMBOL + '(int (*value)[3]) { return 7; }',
                    'extern "C" int ' + SYMBOL + '() { return 7; }\nextern "C" int ' + SYMBOL + '() { return 8; }']
        for value in variants:
            with self.subTest(source=value):
                self.source(self.trusted, value)
                self.assertEqual(self.audit()['status'], 'incomplete')
                self.assertEqual(self.strict(), 2)

    def test_unsupported_missing_and_ambiguous_candidate_analysis_fails(self):
        for value in ['extern "C" int ' + SYMBOL + '();',
                      'extern "C" int ' + SYMBOL + '(int (*value)[3]) { return 7; }',
                      'extern "C" int ' + SYMBOL + '() { return 7; }\nextern "C" int ' + SYMBOL + '() { return 8; }']:
            with self.subTest(source=value):
                self.source(self.candidate, value)
                self.assertEqual(self.audit()['status'], 'incomplete')
                self.assertEqual(self.strict(), 2)

    def test_tu_local_records_normalize_only_for_same_source_across_roots(self):
        for value in ['namespace { struct Local { int value; }; }\nextern "C" int ' + SYMBOL + '(Local *v) { return v->value; }',
                      'typedef struct { int value; } Local;\nextern "C" int ' + SYMBOL + '(Local *v) { return v->value; }']:
            with self.subTest(source=value):
                for root in (self.trusted, self.candidate): self.source(root, value)
                self.assertEqual(self.strict(), 0)

    def test_foreign_internal_scopes_cannot_collapse_in_same_id_comparison(self):
        source = ('namespace { struct Local { int value; }; }\nextern "C" int '
                  + SYMBOL + '(Local *v) { return v->value; }')
        for root in (self.trusted, self.candidate):
            self.source(root, source)
        original = ClangParser.parse
        for roles in ((self.trusted,), (self.candidate,), (self.trusted, self.candidate)):
            def foreign_scope(parser, path, include):
                result = original(parser, path, include)
                for root in roles:
                    if Path(path).resolve() == (root / self.row['source']).resolve():
                        for declaration in result['declarations']:
                            declaration['contract']['parameters'][0]['pointee']['identity_scope'] = str(
                                (root / 'reconstructions/fn_00000020.cpp').resolve())
                return result
            with self.subTest(roles=roles), patch.object(ClangParser, 'parse', foreign_scope):
                report = self.audit()
                item = report['trusted_definition_contracts'][0]
                self.assertEqual(report['status'], 'incomplete')
                self.assertEqual(item['status'], 'unsupported')
                self.assertIn('unexpected internal type identity scope', item['reason'])
                self.assertEqual(item['comparisons'], [])
                self.assertEqual(self.strict(), 2)

    def test_parameter_order_variadicness_qualifiers_and_exception_specification(self):
        self.source(self.trusted, 'extern "C" int ' + SYMBOL + '(int, float, const void *) noexcept { return 7; }')
        variants = ['extern "C" int ' + SYMBOL + '(float, int, const void *) noexcept { return 7; }',
                    'extern "C" int ' + SYMBOL + '(int, float, void *) noexcept { return 7; }',
                    'extern "C" int ' + SYMBOL + '(int, float, const void *, ...) noexcept { return 7; }',
                    'extern "C" int ' + SYMBOL + '(int, float, const void *) { return 7; }']
        for value in variants:
            with self.subTest(source=value):
                self.source(self.candidate, value)
                self.assertEqual(self.strict(), 1)

    def test_typedef_and_top_level_parameter_cv_normalize(self):
        self.source(self.trusted, 'typedef unsigned Word; extern "C" int ' + SYMBOL + '(const Word) { return 7; }')
        self.source(self.candidate, 'extern "C" int ' + SYMBOL + '(unsigned) { return 7; }')
        self.assertEqual(self.strict(), 0)

    def test_trusted_source_and_header_drift_are_incomplete(self):
        original = ClangParser.parse
        for target in (self.trusted / self.row['source'], self.trusted / 'include/botw/api.h'):
            target.write_text(target.read_text() if target.exists() else '// initial\n')
            def mutate(parser, path, include):
                target.write_text(target.read_text() + '\n// drift\n')
                return original(parser, path, include)
            with self.subTest(target=target), patch.object(ClangParser, 'parse', mutate):
                report = self.audit()
                self.assertEqual(report['status'], 'incomplete')
                self.assertIn('<reference>/' + str(target.relative_to(self.trusted)), report['source_drift'])

    def test_new_header_inventory_and_trusted_source_removal_fail_closed(self):
        original = ClangParser.parse
        def mutate(parser, path, include):
            result = original(parser, path, include)
            (self.trusted / 'include/botw/new.h').write_text('// new\n')
            return result
        with patch.object(ClangParser, 'parse', mutate):
            self.assertEqual(self.audit()['status'], 'incomplete')
        source = self.trusted / self.row['source']
        def remove(parser, path, include):
            result = original(parser, path, include)
            if Path(path).resolve() == source.resolve(): source.unlink()
            return result
        with patch.object(ClangParser, 'parse', remove):
            self.assertEqual(self.audit()['status'], 'incomplete')

    def test_new_unimplemented_and_legacy_rows_without_trusted_source_keep_old_rules(self):
        (self.trusted / self.row['source']).unlink()
        self.assertEqual(self.audit()['trusted_definition_contracts'], [])
        self.assertEqual(self.audit()['coverage']['selected_translation_units'], 0)
        self.assertEqual(self.strict(), 0)
        (self.candidate / self.row['source']).unlink()
        self.assertEqual(self.strict(), 0)


if __name__ == '__main__': unittest.main()
