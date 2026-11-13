"""Report inferred cross-translation-unit C-linkage contract differences."""

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "src"))
from botw_decomp.contracts import main

if __name__ == "__main__":
    raise SystemExit(main())
