# ZArchive reader source

Unmodified files from [Exzap/ZArchive](https://github.com/Exzap/ZArchive) at
`965b66c8d67b6b7e30fd63b3b75aa91a99ff303b`. File SHA-256 hashes are in
`UPSTREAM.json`. The upstream MIT-0 license is retained in `LICENSE`; this
repository remains GPL-3.0-only. The SHA-256 implementation carries its original
license notice.

Only the common header and reader header/source are compiled by our helper.
The SHA-256 implementation is retained for provenance and synthetic-fixture
reproduction. No upstream writer or extraction executable is shipped. System
zstd is linked locally; setup never downloads reader dependencies.

`tools/wua_reader.cpp` bounds metadata before calling the upstream API and
allows only root/title `code/U-King.rpx` members. It does not verify the
archive integrity hash; the project validates the selected RPX separately.
