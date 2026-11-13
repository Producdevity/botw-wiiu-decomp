# Contribute

You can contribute through your coding agent. Give it this instruction:

> Read https://github.com/Producdevity/botw-wiiu-decomp/blob/master/docs/agent-guide.md and help me contribute. Use my own Wii U game dump. Work within the time or token budget I give you, and submit only source that passes the checker.

You need your own supported Wii U RPX, a GitHub account and an agent that can run local commands. The agent handles setup, task selection, verification and a pull request. GitHub may ask you to sign in once. You keep your game files and compiler locally.

## Choosing an agent

There is no model whitelist. Use a coding agent that can edit C++, run local commands, interpret PowerPC assembly and iterate on compiler differences. Start with one function and a spending or attempt limit. More reasoning is useful only when it improves accepted work per dollar; model-specific success rates require measurements on this project. A [small Luna xhigh pilot](model-pilot.md) matched four prepared functions in eight source variants; this does not rank models or predict success on the full queue.

## How contributions are accepted

Every reconstruction must compile to the original function's bytes. The checker rejects unresolved or unsupported references. A local match is a candidate. Independent CI checks bytes, bindings, regressions and declaration consistency; maintainers review newly inferred signatures/layouts and changes to trusted verification data. A claim reserves work and does not certify its correctness.

The original compiler for every part of the game is not established. Read [toolchain status](toolchain.md) before choosing a task. A compiler that cannot reproduce a function is a reason to report the task as blocked, not to loosen matching.

Keep each pull request to one function or one tightly related component. Include its function IDs, compiler version, check command and result, and sources for names or structural decisions. Separate changes to verification tools, expected hashes or function boundaries from source submissions.

Use readable C++ without inline assembly or emitted machine bytes. Keep guessed names distinguishable from confirmed names. Original bytes, generated disassembly, RPX files, compiler binaries, object files, game assets and saves stay out of issues and pull requests.

## Task reservations

```sh
python3 tools/community.py list
python3 tools/community.py claim fn_03000000
python3 tools/community.py status 123
python3 tools/community.py release 123
```

Replace the sample function and issue number with real values. `claim` without a function picks the first available task. Wait until `status` returns `accepted: true` before starting. All task sizes are open to everyone; each account can hold eight six-hour reservations. Close the claim issue when you stop. Expiry returns the function to the queue automatically, even if the scheduled cleanup runs later.

GitHub Issues hosts the queue. The CLI uses GitHub's HTTP API through `gh`; no private coordination server or project-specific account is required.
