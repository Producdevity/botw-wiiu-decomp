"""Audit cross-TU and pinned source contracts using libclang's typed C++ AST."""

import argparse
import ctypes as C
import ctypes.util
import hashlib
import json
import re
import subprocess
import tempfile
from pathlib import Path

from .compiler import check_source
from .compiler import locate as locate_compiler
from .project import ROOT, functions, validate_source_contract

SHIMS = """typedef float __vec2x32float__ __attribute__((vector_size(8)));
#define __bytereversed
"""


def locate_libclang(requested=None, compiler=None, root=ROOT):
    if requested:
        return (
            str(Path(requested).resolve())
            if Path(requested).is_file()
            else str(requested)
        )
    configured = Path(root) / ".local/config.json"
    if not compiler and configured.is_file():
        compiler = json.loads(configured.read_text()).get("compiler")
    try:
        binary = Path(locate_compiler(compiler)).resolve()
    except ValueError:
        binary = None
    candidates = []
    if binary:
        for directory in (
            binary.parent,
            binary.parent.parent / "lib",
            binary.parent.parent / "lib64",
        ):
            candidates += [
                str(directory / name)
                for name in (
                    "libclang.dylib",
                    "libclang.so",
                    "libclang.so.1",
                    "libclang.dll",
                )
                if (directory / name).is_file()
            ]
            candidates += [
                str(p)
                for pattern in ("libclang.so.*", "libclang-*.so*")
                for p in sorted(directory.glob(pattern))
                if p.is_file()
            ]
    for name in ("clang", "libclang"):
        found = ctypes.util.find_library(name)
        if found:
            candidates.append(found)
    if not candidates:
        raise ValueError(
            "libclang was not found beside the configured/located Clang or through platform library lookup; pass --libclang /path/to/libclang"
        )
    return candidates[0]


SYMBOL = re.compile(r"fn_[0-9a-f]{8}\Z")


class String(C.Structure):
    _fields_ = [("data", C.c_void_p), ("flags", C.c_uint)]


class Cursor(C.Structure):
    _fields_ = [("kind", C.c_int), ("xdata", C.c_int), ("data", C.c_void_p * 3)]


class Type(C.Structure):
    _fields_ = [("kind", C.c_int), ("data", C.c_void_p * 2)]


class Location(C.Structure):
    _fields_ = [("data", C.c_void_p * 2), ("value", C.c_uint)]


Visitor = C.CFUNCTYPE(C.c_uint, Cursor, Cursor, C.c_void_p)


class ClangParser:
    def __init__(self, libclang=None, compiler=None, root=ROOT):
        self.library_path = locate_libclang(libclang, compiler, root)
        try:
            self.lib = C.CDLL(self.library_path)
        except OSError as error:
            raise ValueError(
                "could not load libclang " + self.library_path + ": " + str(error)
            ) from error
        signatures = {
            "clang_createIndex": (C.c_void_p, [C.c_int, C.c_int]),
            "clang_disposeIndex": (None, [C.c_void_p]),
            "clang_parseTranslationUnit2": (
                C.c_int,
                [
                    C.c_void_p,
                    C.c_char_p,
                    C.POINTER(C.c_char_p),
                    C.c_int,
                    C.c_void_p,
                    C.c_uint,
                    C.c_uint,
                    C.POINTER(C.c_void_p),
                ],
            ),
            "clang_disposeTranslationUnit": (None, [C.c_void_p]),
            "clang_getTranslationUnitCursor": (Cursor, [C.c_void_p]),
            "clang_visitChildren": (C.c_uint, [Cursor, Visitor, C.c_void_p]),
            "clang_getCursorSpelling": (String, [Cursor]),
            "clang_getCursorKindSpelling": (String, [C.c_int]),
            "clang_isAttribute": (C.c_uint, [C.c_int]),
            "clang_Cursor_getMangling": (String, [Cursor]),
            "clang_getCursorUSR": (String, [Cursor]),
            "clang_getCursorLinkage": (C.c_uint, [Cursor]),
            "clang_getCursorSemanticParent": (Cursor, [Cursor]),
            "clang_Cursor_isNull": (C.c_int, [Cursor]),
            "clang_getCursorType": (Type, [Cursor]),
            "clang_getCanonicalType": (Type, [Type]),
            "clang_getAddressSpace": (C.c_uint, [Type]),
            "clang_getTypeSpelling": (String, [Type]),
            "clang_getTypeKindSpelling": (String, [C.c_int]),
            "clang_getPointeeType": (Type, [Type]),
            "clang_getResultType": (Type, [Type]),
            "clang_getNumArgTypes": (C.c_int, [Type]),
            "clang_getArgType": (Type, [Type, C.c_uint]),
            "clang_isFunctionTypeVariadic": (C.c_uint, [Type]),
            "clang_getFunctionTypeCallingConv": (C.c_uint, [Type]),
            "clang_getExceptionSpecificationType": (C.c_int, [Type]),
            "clang_isConstQualifiedType": (C.c_uint, [Type]),
            "clang_isVolatileQualifiedType": (C.c_uint, [Type]),
            "clang_isRestrictQualifiedType": (C.c_uint, [Type]),
            "clang_Type_getSizeOf": (C.c_longlong, [Type]),
            "clang_Type_getAlignOf": (C.c_longlong, [Type]),
            "clang_getTypeDeclaration": (Cursor, [Type]),
            "clang_getEnumDeclIntegerType": (Type, [Cursor]),
            "clang_getElementType": (Type, [Type]),
            "clang_getNumElements": (C.c_longlong, [Type]),
            "clang_Cursor_getOffsetOfField": (C.c_longlong, [Cursor]),
            "clang_isCursorDefinition": (C.c_uint, [Cursor]),
            "clang_getCursorLocation": (Location, [Cursor]),
            "clang_getExpansionLocation": (
                None,
                [
                    Location,
                    C.POINTER(C.c_void_p),
                    C.POINTER(C.c_uint),
                    C.POINTER(C.c_uint),
                    C.POINTER(C.c_uint),
                ],
            ),
            "clang_getFileName": (String, [C.c_void_p]),
            "clang_getNumDiagnostics": (C.c_uint, [C.c_void_p]),
            "clang_getDiagnostic": (C.c_void_p, [C.c_void_p, C.c_uint]),
            "clang_getDiagnosticSeverity": (C.c_uint, [C.c_void_p]),
            "clang_formatDiagnostic": (String, [C.c_void_p, C.c_uint]),
            "clang_disposeDiagnostic": (None, [C.c_void_p]),
            "clang_getCString": (C.c_char_p, [String]),
            "clang_disposeString": (None, [String]),
            "clang_getClangVersion": (String, []),
        }
        for name, (restype, argtypes) in signatures.items():
            try:
                function = getattr(self.lib, name)
            except AttributeError as error:
                raise ValueError(
                    "libclang lacks required C API "
                    + name
                    + "; pass --libclang for a compatible library"
                ) from error
            function.restype, function.argtypes = restype, argtypes
        self.index = self.lib.clang_createIndex(0, 0)
        if not self.index:
            raise ValueError("libclang could not create an AST index")
        self.temporary = tempfile.TemporaryDirectory(prefix="botw-contract-audit-")
        self.shim = Path(self.temporary.name) / "analysis-shims.h"
        self.shim.write_text(SHIMS)

    def close(self):
        if self.index:
            self.lib.clang_disposeIndex(self.index)
            self.index = None
            self.temporary.cleanup()

    def __enter__(self):
        return self

    def __exit__(self, *exception):
        self.close()

    def record_scope(self, declaration, unit_scope):
        if self.lib.clang_getCursorLinkage(declaration) != 4 or not self.text(
            self.lib.clang_getCursorSpelling(declaration)
        ):
            return unit_scope
        parent = declaration
        while not self.lib.clang_Cursor_isNull(parent):
            if parent.kind == 22 and not self.text(
                self.lib.clang_getCursorSpelling(parent)
            ):
                return unit_scope
            parent = self.lib.clang_getCursorSemanticParent(parent)
        return "external"

    def text(self, value):
        try:
            return (self.lib.clang_getCString(value) or b"").decode("utf-8")
        finally:
            self.lib.clang_disposeString(value)

    def location(self, cursor):
        file, line, column, offset = C.c_void_p(), C.c_uint(), C.c_uint(), C.c_uint()
        self.lib.clang_getExpansionLocation(
            self.lib.clang_getCursorLocation(cursor),
            C.byref(file),
            C.byref(line),
            C.byref(column),
            C.byref(offset),
        )
        return {
            "file": self.text(self.lib.clang_getFileName(file)) if file else "",
            "line": line.value,
            "column": column.value,
        }

    def unsupported_attributes(self, cursor):
        attributes = []

        @Visitor
        def visit(child, parent, data):
            if self.lib.clang_isAttribute(child.kind):
                name = self.text(self.lib.clang_getCursorKindSpelling(child.kind))
                attributes.append(name + " at " + str(self.location(child)))
            return 2 if child.kind == 10 else 1

        self.lib.clang_visitChildren(cursor, visit, None)
        return attributes

    def type(self, original, unit_scope, top_parameter=False, depth=0):
        if depth > 12:
            raise ValueError("type nesting exceeds supported depth")
        t = self.lib.clang_getCanonicalType(original)
        kind = self.text(self.lib.clang_getTypeKindSpelling(t.kind))
        value = {"kind": kind, "spelling": self.text(self.lib.clang_getTypeSpelling(t))}
        qualifiers = [
            name
            for name, operation in [
                ("const", self.lib.clang_isConstQualifiedType),
                ("volatile", self.lib.clang_isVolatileQualifiedType),
                ("restrict", self.lib.clang_isRestrictQualifiedType),
            ]
            if operation(t)
        ]
        value["qualifiers"] = [] if top_parameter else qualifiers
        # The function type ignores top-level parameter cv qualifiers. The API's
        # display spelling may retain them, so spelling never determines equality.
        value["size"] = self.lib.clang_Type_getSizeOf(t)
        value["alignment"] = self.lib.clang_Type_getAlignOf(t)
        value["address_space"] = self.lib.clang_getAddressSpace(t)
        if kind in ("Pointer", "LValueReference", "RValueReference"):
            value["pointee"] = self.type(
                self.lib.clang_getPointeeType(t), unit_scope, depth=depth + 1
            )
        elif kind in ("FunctionProto", "FunctionNoProto"):
            count = self.lib.clang_getNumArgTypes(t)
            if count < 0:
                raise ValueError("unprototyped function type")
            value["result"] = self.type(
                self.lib.clang_getResultType(t), unit_scope, depth=depth + 1
            )
            value["parameters"] = [
                self.type(self.lib.clang_getArgType(t, i), unit_scope, True, depth + 1)
                for i in range(count)
            ]
            value["variadic"] = bool(self.lib.clang_isFunctionTypeVariadic(t))
            value["calling_convention"] = self.lib.clang_getFunctionTypeCallingConv(t)
            value["exception_specification"] = (
                self.lib.clang_getExceptionSpecificationType(t)
            )
            if value["exception_specification"] not in (0, 4):
                raise ValueError("unsupported or unresolved exception specification")
        elif kind in ("Record", "Enum"):
            declaration = self.lib.clang_getTypeDeclaration(t)
            value["usr"] = self.text(self.lib.clang_getCursorUSR(declaration))
            if not value["usr"]:
                raise ValueError("record/enum lacks a stable Clang identity")
            value["identity_scope"] = self.record_scope(declaration, unit_scope)
            if kind == "Enum":
                value["underlying"] = self.type(
                    self.lib.clang_getEnumDeclIntegerType(declaration),
                    unit_scope,
                    depth=depth + 1,
                )
            else:
                fields = []

                @Visitor
                def visit_field(cursor, parent, data):
                    if cursor.kind == 6:  # CXCursor_FieldDecl
                        field_type = self.lib.clang_getCanonicalType(
                            self.lib.clang_getCursorType(cursor)
                        )
                        fields.append(
                            {
                                "offset_bits": self.lib.clang_Cursor_getOffsetOfField(
                                    cursor
                                ),
                                "type": self.text(
                                    self.lib.clang_getTypeSpelling(field_type)
                                ),
                                "size": self.lib.clang_Type_getSizeOf(field_type),
                            }
                        )
                    return 1

                self.lib.clang_visitChildren(declaration, visit_field, None)
                value["fields"] = fields
        elif kind in ("Vector", "ExtVector"):
            value["element"] = self.type(
                self.lib.clang_getElementType(t), unit_scope, depth=depth + 1
            )
            value["count"] = self.lib.clang_getNumElements(t)
        elif kind not in {
            "Void",
            "Bool",
            "Char_U",
            "UChar",
            "Char16",
            "Char32",
            "UShort",
            "UInt",
            "ULong",
            "ULongLong",
            "UInt128",
            "Char_S",
            "SChar",
            "WChar",
            "Short",
            "Int",
            "Long",
            "LongLong",
            "Int128",
            "Float",
            "Double",
            "LongDouble",
            "NullPtr",
        }:
            raise ValueError("unsupported canonical type: " + kind)
        return value

    def parse(self, path, include):
        path = Path(path).resolve()
        args = [
            "--target=powerpc-unknown-eabi",
            "-mcpu=750",
            "-std=c++17",
            "-ffreestanding",
            "-fno-builtin",
            "-nostdinc",
            "-nostdinc++",
            "-Werror=unknown-attributes",
            "-Werror=ignored-attributes",
            "-Werror=unknown-pragmas",
            "-I" + str(Path(include).resolve()),
            "-include",
            str(self.shim),
        ]
        argv = (C.c_char_p * len(args))(*(a.encode() for a in args))
        unit = C.c_void_p()
        code = self.lib.clang_parseTranslationUnit2(
            self.index, str(path).encode(), argv, len(args), None, 0, 0, C.byref(unit)
        )
        result = {
            "file": str(path),
            "declarations": [],
            "errors": [],
            "diagnostics": [],
            "analysis_shims_present": [
                s
                for s in ("__vec2x32float__", "__bytereversed")
                if s in path.read_text()
            ],
        }
        if code or not unit:
            result["errors"].append("libclang parse failed: " + str(code))
            if unit:
                self.lib.clang_disposeTranslationUnit(unit)
            return result
        try:
            for i in range(self.lib.clang_getNumDiagnostics(unit)):
                diagnostic = self.lib.clang_getDiagnostic(unit, i)
                try:
                    severity = self.lib.clang_getDiagnosticSeverity(diagnostic)
                    text = self.text(self.lib.clang_formatDiagnostic(diagnostic, 0))
                    result["diagnostics"].append(
                        {"severity": severity, "message": text}
                    )
                    if severity >= 3:
                        result["errors"].append(text)
                finally:
                    self.lib.clang_disposeDiagnostic(diagnostic)
            if result["errors"]:
                return result  # Never consume a partial AST after errors.

            @Visitor
            def visit(cursor, parent, data):
                if cursor.kind == 8:  # CXCursor_FunctionDecl
                    name = self.text(self.lib.clang_getCursorSpelling(cursor))
                    if SYMBOL.fullmatch(name):
                        try:
                            if (
                                self.text(self.lib.clang_Cursor_getMangling(cursor))
                                != name
                                or self.lib.clang_getCursorLinkage(cursor) != 4
                            ):
                                raise ValueError(
                                    "selected function lacks external C linkage"
                                )
                            attributes = self.unsupported_attributes(cursor)
                            if attributes:
                                raise ValueError(
                                    "unsupported function/parameter attributes: "
                                    + "; ".join(attributes)
                                )
                            result["declarations"].append(
                                {
                                    "symbol": name,
                                    "definition": bool(
                                        self.lib.clang_isCursorDefinition(cursor)
                                    ),
                                    "location": self.location(cursor),
                                    "contract": self.type(
                                        self.lib.clang_getCursorType(cursor), str(path)
                                    ),
                                }
                            )
                        except ValueError as error:
                            result["errors"].append(name + ": " + str(error))
                return 2

            self.lib.clang_visitChildren(
                self.lib.clang_getTranslationUnitCursor(unit), visit, None
            )
            if result["errors"]:
                result["declarations"] = []
            return result
        finally:
            self.lib.clang_disposeTranslationUnit(unit)


    def source_contract(self, symbol, expected):
        validate_source_contract(expected)
        types = [expected["return_type"], *expected["parameter_types"]]
        records = sorted({name for spelling in types
                          for name in re.findall(r"\bstruct ([A-Za-z_][A-Za-z0-9_]*)", spelling)})
        parameters = list(expected["parameter_types"])
        if expected["variadic"]:
            parameters.append("...")
        path = Path(self.temporary.name) / "expected.cpp"
        path.write_text("".join("struct " + name + ";\n" for name in records)
                        + 'extern "C" ' + expected["return_type"] + " " + symbol
                        + "(" + ", ".join(parameters) + ");\n")
        result = self.parse(path, self.temporary.name)
        if result["errors"] or len(result["declarations"]) != 1:
            raise ValueError("unsupported source_contract analysis: " + "; ".join(result["errors"]))
        return result["declarations"][0]["contract"]


def type_identity(t):
    # Forward declarations and completed records have the same contract identity.
    if t.get("kind") == "Record":
        return {
            key: t[key]
            for key in ("kind", "usr", "qualifiers", "address_space", "identity_scope")
        }
    return {
        k: (
            [type_identity(v) if isinstance(v, dict) else v for v in value]
            if isinstance(value, list)
            else type_identity(value)
            if isinstance(value, dict)
            else value
        )
        for k, value in t.items()
        if k != "spelling"
    }


def type_findings(a, b, position):
    if type_identity(a) == type_identity(b):
        return []
    pointers = {"Pointer", "LValueReference", "RValueReference"}
    if a["kind"] in pointers and a["kind"] == b["kind"]:
        ap, bp = a["pointee"], b["pointee"]
        if ap["kind"] not in pointers | {"FunctionProto", "FunctionNoProto"} and bp[
            "kind"
        ] not in pointers | {"FunctionProto", "FunctionNoProto"}:
            return [
                {
                    "position": position,
                    "severity": "review",
                    "kind": "object_pointer_contract_difference",
                    "declaration_type": a["spelling"],
                    "definition_type": b["spelling"],
                    "reason": "Object-pointer contracts differ. Original pointee types, layout and mutability require source/context review; no original-type or ABI incompatibility is inferred.",
                }
            ]
    return [
        {
            "position": position,
            "severity": "conflict",
            "kind": "type_contract_conflict",
            "declaration_type": a["spelling"],
            "definition_type": b["spelling"],
        }
    ]


def compare_contracts(declaration, definition):
    findings = type_findings(declaration["result"], definition["result"], "return")
    if len(declaration["parameters"]) != len(definition["parameters"]):
        findings.append(
            {
                "position": "parameters",
                "severity": "conflict",
                "kind": "parameter_count_conflict",
                "declaration_count": len(declaration["parameters"]),
                "definition_count": len(definition["parameters"]),
            }
        )
    for i, (a, b) in enumerate(
        zip(declaration["parameters"], definition["parameters"])
    ):
        findings += type_findings(a, b, "parameter " + str(i + 1))
    for property in ("variadic", "calling_convention", "exception_specification"):
        if declaration[property] != definition[property]:
            findings.append(
                {
                    "position": property,
                    "severity": "conflict",
                    "kind": property + "_conflict",
                    "declaration": declaration[property],
                    "definition": definition[property],
                }
            )
    return findings


def audit_contracts(root=ROOT, libclang=None, compiler=None, reference_root=None):
    root = Path(root).resolve()
    reference_root = Path(reference_root).resolve() if reference_root is not None else root

    def git_state():
        commit = subprocess.run(
            ["git", "rev-parse", "HEAD"],
            cwd=root,
            text=True,
            capture_output=True,
            check=False,
            timeout=10,
        )
        status = subprocess.run(
            ["git", "status", "--porcelain"],
            cwd=root,
            text=True,
            capture_output=True,
            check=False,
            timeout=10,
        )
        return {
            "commit": commit.stdout.strip() if not commit.returncode else None,
            "status": status.stdout if not status.returncode else None,
        }

    vcs_before = git_state()
    manifest = reference_root / "config/functions.json"
    manifest_bytes = manifest.read_bytes()
    with tempfile.TemporaryDirectory(prefix="botw-contract-manifest-") as temporary:
        snapshot_root = Path(temporary)
        (snapshot_root / "config").mkdir()
        (snapshot_root / "config/functions.json").write_bytes(manifest_bytes)
        rows = functions(snapshot_root)
    defined = {key for key, row in rows.items() if (root / row["source"]).is_file()}
    callers = {key for key in defined if rows[key].get("bindings")}
    all_edges = sorted(
        (key, callee) for key in callers for callee in rows[key]["bindings"]
    )
    edges = [(caller, callee) for caller, callee in all_edges if callee in defined]
    unknown = sorted({callee for caller, callee in all_edges if callee not in defined})
    pinned = {key for key in defined if "source_contract" in rows[key]}
    selected = sorted(callers | {callee for caller, callee in edges} | pinned)
    include = root / "include"
    if include.is_symlink():
        raise ValueError("header directory symlinks are not accepted")
    headers = []
    for header in sorted(include.rglob("*")):
        if header.is_symlink():
            raise ValueError("header symlinks are not accepted: " + str(header))
        if header.is_file():
            headers.append(header)
    watched = [manifest] + [root / rows[key]["source"] for key in selected] + headers
    manifest_key = "config/functions.json" if reference_root == root else "<reference>/config/functions.json"
    snapshot = {manifest_key: hashlib.sha256(manifest_bytes).hexdigest()}
    for path in watched[1:]:
        if path.is_symlink() or not path.is_file() or path.stat().st_size > 256 * 1024:
            raise ValueError(
                "source/header must be a regular file below 256 KiB: " + str(path)
            )
        snapshot[str(path.relative_to(root))] = hashlib.sha256(
            path.read_bytes()
        ).hexdigest()
    for path in watched[1:]:
        check_source(path)

    with ClangParser(libclang, compiler, root) as clang:
        clang_version = clang.text(clang.lib.clang_getClangVersion())
        library_path = clang.library_path
        units = {
            key: clang.parse(root / rows[key]["source"], root / "include")
            for key in selected
        }
        source_contracts = []
        for key in sorted(pinned):
            item = {"symbol": key, "status": "unsupported", "comparisons": []}
            definitions = [d for d in units[key]["declarations"]
                           if d["symbol"] == key and d["definition"]
                           and Path(d["location"]["file"]).resolve()
                           == (root / rows[key]["source"]).resolve()]
            if units[key]["errors"]:
                item["reason"] = "translation unit parse/type error"
            elif len(definitions) != 1:
                item["reason"] = "missing unique published definition"
            else:
                expected = clang.source_contract(key, rows[key]["source_contract"])
                actual = definitions[0]["contract"]
                # Only the three explicitly pinned fields are part of this contract.
                for property in ("calling_convention", "exception_specification"):
                    expected[property] = actual[property]
                findings = compare_contracts(expected, actual)
                for finding in findings:
                    finding["severity"] = "conflict"
                item["comparisons"].append({"expected": expected, "definition": definitions[0],
                                            "findings": findings})
                item["status"] = "conflict" if findings else "matches_source_contract"
            source_contracts.append(item)
    checked = []
    for caller, callee in all_edges:
        item = {
            "caller": caller,
            "callee": callee,
            "status": "unsupported",
            "comparisons": [],
        }
        if units[caller]["errors"] or (callee in units and units[callee]["errors"]):
            item["reason"] = "translation unit parse/type error"
        else:
            declarations = [
                d for d in units[caller]["declarations"] if d["symbol"] == callee
            ]
            if not declarations:
                item["reason"] = (
                    "bound symbol has no parsed C-linkage declaration in caller"
                )
            elif callee not in defined:
                item["status"] = "definition_unavailable"
                item["declarations"] = declarations
            else:
                definitions = [
                    d
                    for d in units[callee]["declarations"]
                    if d["symbol"] == callee
                    and d["definition"]
                    and Path(d["location"]["file"]).resolve()
                    == (root / rows[callee]["source"]).resolve()
                ]
                if len(definitions) != 1:
                    item["reason"] = "missing unique published definition"
                else:
                    for declaration in declarations:
                        item["comparisons"].append(
                            {
                                "declaration": declaration,
                                "definition": definitions[0],
                                "findings": compare_contracts(
                                    declaration["contract"], definitions[0]["contract"]
                                ),
                            }
                        )
                    findings = [f for c in item["comparisons"] for f in c["findings"]]
                    item["status"] = (
                        "conflict"
                        if any(f["severity"] == "conflict" for f in findings)
                        else "review"
                        if findings
                        else "consistent_under_analysis_model"
                    )
        checked.append(item)
    repeated = []
    for symbol in unknown:
        declarations = {}
        for unit_id in selected:
            if units[unit_id]["errors"]:
                continue
            for declaration in units[unit_id]["declarations"]:
                if declaration["symbol"] != symbol or declaration["definition"]:
                    continue
                key = json.dumps(
                    {
                        "location": declaration["location"],
                        "contract": type_identity(declaration["contract"]),
                    },
                    sort_keys=True,
                )
                if key not in declarations:
                    declarations[key] = dict(declaration, translation_units=[])
                declarations[key]["translation_units"].append(unit_id)
        entries = sorted(
            declarations.values(),
            key=lambda d: (
                d["location"]["file"],
                d["location"]["line"],
                d["location"]["column"],
            ),
        )
        units_declaring = sorted(
            {
                unit
                for declaration in entries
                for unit in declaration["translation_units"]
            }
        )
        if len(units_declaring) < 2:
            continue
        contracts = {}
        for declaration in entries:
            contracts.setdefault(
                json.dumps(type_identity(declaration["contract"]), sort_keys=True),
                declaration,
            )
        unique = list(contracts.values())
        comparisons = []
        for other in unique[1:]:
            findings = compare_contracts(unique[0]["contract"], other["contract"])
            for finding in findings:
                for old, new in [
                    ("declaration_type", "first_declaration_type"),
                    ("definition_type", "second_declaration_type"),
                    ("declaration_count", "first_declaration_count"),
                    ("definition_count", "second_declaration_count"),
                    ("declaration", "first_declaration"),
                    ("definition", "second_declaration"),
                ]:
                    if old in finding:
                        finding[new] = finding.pop(old)
            comparisons.append(
                {
                    "first_declaration": unique[0],
                    "second_declaration": other,
                    "findings": findings,
                }
            )
        findings = [f for c in comparisons for f in c["findings"]]
        repeated.append(
            {
                "symbol": symbol,
                "definition_available": False,
                "translation_units": units_declaring,
                "declarations": entries,
                "comparisons": comparisons,
                "status": "conflict"
                if any(f["severity"] == "conflict" for f in findings)
                else "review"
                if findings
                else "declarations_consistent_under_analysis_model",
            }
        )
    drift = [
        manifest_key if p == manifest else str(p.relative_to(root))
        for p in watched
        if p.is_symlink()
        or not p.is_file()
        or hashlib.sha256(p.read_bytes()).hexdigest()
        != snapshot[manifest_key if p == manifest else str(p.relative_to(root))]
    ]
    vcs_after = git_state()
    if vcs_before != vcs_after:
        drift.append("<git state changed during audit>")
    errors = [
        {"function": key, "source": rows[key]["source"], "errors": units[key]["errors"]}
        for key in selected
        if units[key]["errors"]
    ]
    incomplete = bool(
        drift or errors or any(e["status"] == "unsupported" for e in checked + source_contracts)
    )
    findings_present = any(
        e["status"] in ("conflict", "review") for e in checked + repeated + source_contracts
    )
    return {
        "schema_version": 1,
        "mode": "source contracts under analysis model; no machine-code validation or original-type inference",
        "canonical_root": str(root),
        "reference_root": str(reference_root),
        "git_commit": vcs_before["commit"],
        "git_status": vcs_before["status"],
        "clang": clang_version,
        "libclang": library_path,
        "analysis_model": {
            "target": "powerpc-unknown-eabi",
            "language": "C++17",
            "analysis_shim_sha256": hashlib.sha256(SHIMS.encode()).hexdigest(),
            "shims": {
                "__vec2x32float__": "analysis-only Clang two-float vector typedef",
                "__bytereversed": "analysis-only erased GHS qualifier; memory byte-order semantics are not checked",
            },
            "limits": "Return/parameter types, arity, variadicness, calling convention, exception specifications and address spaces are compared. Function/parameter attribute cursors are unsupported and fail closed. Object-pointer differences require C++ contract review; pointer ABI equality does not establish consistency. Record ODR/layout equivalence is not proven; record descriptions are analysis-model observations, not recovered original layouts. Repeated declarations without definitions do not establish the correct callee contract.",
        },
        "coverage": {
            "references": len(rows),
            "published_sources": len(defined),
            "published_sources_with_source_contract": len(pinned),
            "callers_with_bindings": len(callers),
            "binding_edges": len(all_edges),
            "binding_edges_with_published_definitions": len(edges),
            "selected_translation_units": len(selected),
            "parsed_translation_units": len(selected) - len(errors),
            "unchecked_binding_targets": unknown,
            "repeated_unknown_callee_groups": len(repeated),
        },
        "source_snapshot_sha256": snapshot,
        "source_drift": drift,
        "unsupported_files": errors,
        "units": units,
        "edges": checked,
        "source_contracts": source_contracts,
        "repeated_unknown_declarations": repeated,
        "status": "incomplete"
        if incomplete
        else "findings"
        if findings_present
        else "no_cross_tu_conflicts_in_checked_scope",
    }



def compact_report(report):
    result = {key: report[key] for key in ("schema_version", "status", "coverage", "error", "source_drift", "unsupported_files") if key in report}
    result["findings"] = []
    for item in report.get("edges", []) + report.get("repeated_unknown_declarations", []) + report.get("source_contracts", []):
        if item["status"] in ("conflict", "review", "unsupported"):
            result["findings"].append({
                **{key: item[key] for key in ("caller", "callee", "symbol", "status", "reason") if key in item},
                "details": [finding for comparison in item.get("comparisons", []) for finding in comparison["findings"]],
            })
    return result


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--reference-root", type=Path,
                        help="read expected metadata from this trusted checkout; source/header inputs still come from --root")
    parser.add_argument("--output", type=Path)
    parser.add_argument("--summary", action="store_true", help="print coverage and findings; --output still saves the full report")
    parser.add_argument(
        "--libclang", help="libclang shared library path or library name"
    )
    parser.add_argument(
        "--compiler", help="Clang binary used to locate a neighboring libclang"
    )
    parser.add_argument(
        "--strict",
        action="store_true",
        help="return nonzero for contract conflicts or review findings",
    )
    args = parser.parse_args(argv)
    try:
        result = audit_contracts(args.root, args.libclang, args.compiler, args.reference_root)
    except (
        OSError,
        ValueError,
        KeyError,
        TypeError,
        subprocess.SubprocessError,
    ) as error:
        result = {"schema_version": 1, "status": "incomplete", "error": str(error)}
    rendered = json.dumps(result, indent=2, sort_keys=True) + "\n"
    if args.output:
        try:
            args.output.parent.mkdir(parents=True, exist_ok=True)
            args.output.write_text(rendered)
        except OSError as error:
            print(
                json.dumps(
                    {
                        "schema_version": 1,
                        "status": "incomplete",
                        "error": "could not write report: " + str(error),
                    },
                    sort_keys=True,
                )
            )
            return 2
    print(json.dumps(compact_report(result), indent=2, sort_keys=True) if args.summary else rendered, end="\n" if args.summary else "")
    if result["status"] == "incomplete":
        return 2
    return 1 if args.strict and result["status"] == "findings" else 0
