# Function names and evidence

Keep `fn_XXXXXXXX` as the stable function identity in the manifest, queue, symbol
bindings and verification. A recovered semantic name supplements that identity;
it does not replace it or require renaming a matching entry point.

Use `config/symbols.json` for public semantic-name evidence and review status.
The initial catalog is empty. Propose names and evidence in a reconstruction
PR's description or ordinary documentation. Promotion into this catalog requires
a separate maintainer-reviewed maintenance PR; it is trusted metadata, outside
the ordinary source acceptance allowlist. Inspect or validate it without an RPX:

```sh
python3 tools/symbols.py list
python3 tools/symbols.py list --function fn_02041364
python3 tools/symbols.py check
```

Packets include the selected naming record as `semantic_name` in `task.json`, including its review status.

Commands emit JSON. `list` retains stable IDs and review status; a known function
without a naming record returns an empty list. `check` validates catalog
consistency, not factual truth.

The catalog has `schema_version: 1` and a `functions` array. Each record requires
exactly these fields:

| Field | Meaning |
| --- | --- |
| `function` | Existing stable `fn_XXXXXXXX` manifest ID; one record per function. |
| `name` | C++ identifier, optionally namespace-qualified with `::`; overloads across IDs are allowed. |
| `kind` | `descriptive` for a behavioral alias, or `original` for a claimed recovered identity. |
| `status` | `proposed` or `reviewed`; record maintainer review, not just a byte match. |
| `evidence` | Nonempty list of text references supporting the claim. |
| `rationale` | Nonempty text explaining the mapping and its limits. |

Unknown fields, duplicate IDs, malformed types and unsafe control characters
fail validation. Record what observation supports a name and distinguish a
descriptive alias from a recovered identity. Do not claim an original historical name without evidence.
Keep game-derived disassembly and packet contents private; cite function IDs,
source locations and public references instead.

Prefer a neutral description of local behavior while the owning domain is
unknown. For example, an observed strided copy can justify a descriptive copy
name; it does not establish an animation or renderer class. Names should explain
responsibility, not the reconstruction process, agent, confidence score or
attempt number.

Useful evidence includes diagnostic strings, caller/callee relationships, known
symbols and documented structures. Explain how each source relates to this Wii U
function. Switch reconstruction names are research leads: establish the Wii U
mapping and ABI independently. Naming evidence is not permission to copy code;
record licenses and attribution for imported source in accordance with
[provenance](provenance.md).

A name change that asserts a new identity or implies a signature/layout change
needs maintainer technical review. Include the supporting caller/callee evidence
and recheck affected contracts. Exact machine-code matching does not prove a
function's semantic name or original C++ type.

For an `original` claim, cite the actual source of the identity and explain its
Wii U mapping. A link alone does not establish identity; maintainers review the
evidence. Catalog validation does not promote names, infer trusted types or
change reference symbols.

As shared classes and interfaces are recovered, reviewed names can move into C++ declarations through a coordinated symbol-mapping change. The address ID stays as the tracking key; renamed definitions and all affected callers must still match. The catalog records the evidence needed for that transition.
