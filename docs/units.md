# Source units

`config/units.json` splits `.text` into 6,115 inferred source units. The
coverage map groups tiles by unit. Contributions still add one source file per
function; this data does not change that.

## Result

| Unit confidence | Units | `.text` bytes | Share | Manifest references |
| --- | ---: | ---: | ---: | ---: |
| high | 1,908 | 4,709,410 | 12.7% | 30,679 |
| medium | 3,097 | 21,832,148 | 59.0% | 64,262 |
| low | 1,110 | 10,452,502 | 28.3% | 16,866 |
| no unit | – | 0 | 0% | – |

A unit's confidence is the lower of its two boundaries. Of 6,114 inner
boundaries, 2,833 are high, 2,563 medium and 718 low. 3,098 boundaries have a
window of several possible cuts; the windows hold 5.3 MB (14.4%) of `.text`.

A unit is one source file with a static initializer, plus any neighbouring
files that have none. 6,115 is a lower bound on the file count. Havok units of
100–250 KiB clearly hold several files.

## Evidence

**Static-initializer table (existence of every boundary).** The end of
`.rodata` (0x1045cc2c, up to the section end) holds 6,115 ADDR32 code pointers
in strictly increasing order, spanning 0x0200060c–0x04346f80. No other run of
code pointers longer than 50 entries increases. The only code that reads the
table start sits just before the RPX entry point. GHS emits one initializer per
file that needs dynamic initialization and links files in table order. So each
entry marks one file, and two neighbouring entries are always in different
units. 260 entries are directly adjacent: those files contain only their
initializer.

**`.rodata` order (position of each boundary).** Files lay out as
`[functions][initializer][out-of-line inline and template copies]`. The copies'
`.rodata` sits just below the file's main `.rodata`, in descending order. The
initializer's own `.rodata` is the highest of its file. So the next file starts
where references rise above the initializer's highest `.rodata` address. For
each gap between initializer *k*'s end and initializer *k+1*, the tool picks
the split with the fewest references on the wrong side of that threshold
(references more than 128 KiB away are ignored as cross-file). After cutting,
97.3% of consecutive units have increasing median `.rodata` addresses. `.data`
(48%) and `.bss` (69%) order is too weak to use: the objects an initializer
constructs sit in a separate `.bss` area from the rest of the file's globals.

**Call graph (tie-break only).** When several function starts fit the
`.rodata` window, the tool takes the cut crossed by the fewest direct calls,
then the earliest. With `.rodata` cuts and no call graph, 10.1% of functions
called from one unit sit in a neighbouring unit; cutting at each initializer's
end gives 26.7%. Of high boundaries, which use no call graph, 94.1% are crossed
by no call.

**Embedded paths (file names).** `.rodata` holds 51 `.cpp` paths (sead and
KingSystem assert paths, Havok, NintendoWare). Every one is referenced from a
single unit; none splits across units. 37 units list them under `files`. Two
units hold two different paths, which confirms multi-file units. A path names a
file the unit contains, not the unit itself.

**Not used.** The Switch decompilation (zeldaret/botw) has 3,733 `.cpp` files.
`KingSystem/src/ActorSystem/actActorLinkConstDataAccess.cpp` exists there;
`KingSystem/src/Movie/mp4dmxMP4Player.cpp` does not. Its Clang link order
cannot be compared without a Wii U to Switch function mapping, so it is not
used for names or order. Library clusters (Havok, sead, nn) are visible from
the paths but are not recorded.

## Acceptance rule

A boundary is recorded only between two consecutive static-initializer
entries, so its existence is certain. Its position is graded:

- **high**: forced (no bytes between the initializers), or `.rodata` places
  the cut with zero wrong-side references, at least two references, and exactly
  one function start in the window.
- **medium**: `.rodata` places it with at most one in eight references (minimum
  one) on the wrong side. `end_window` lists the range of possible cuts when
  there is more than one.
- **low**: no usable `.rodata` (the initializer references none, or the gap
  has none), or more wrong-side references than allowed. The cut is the
  call-graph choice within `end_window`.

Initializer ends use the first `blr`; 24 initializer bodies contain another
call target, so a few ends may be early.

## Data and tooling

`python3 tools/units.py` rebuilds `config/units.json` from the local RPX and
the manifest's function starts; `--check` fails when the file is out of date.
Each unit records `id` (`unit_` + initializer address), `start`, `end`,
`initializer`, `confidence`, `end_confidence`, `end_evidence` (`rodata`,
`rodata+calls`, `forced`, `calls` or `text-end`), and optionally `end_window`
and `files`. `botw_decomp.units.read` validates order, `.text` bounds and that
every unit holds its initializer.

## What a file-per-unit layout would need

- Claims: one claim would cover a whole unit, or per-function claims would
  have to edit one shared file. Units average 18 manifest references; the
  largest holds 2,321.
- Auto-merge: it only accepts new reconstruction files. Adding a function to
  an existing unit file is an edit and would wait for a maintainer.
- `compile_with` caps a compilation at eight functions (the reference plus
  seven). Whole-unit compilation needs a separate verifier path that compiles
  one file and checks each emitted body.
- Unit boundaries must be stable first. Medium and low cuts can move as
  evidence improves, which would move functions between files.
