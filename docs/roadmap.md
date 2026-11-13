# Priorities

1. **Expand compiler coverage.** GHS 5.3.22 now reproduces loops, branches and an external call. Extend trials to C++ layouts and larger functions; establish the historical version/options. Record failures so community budgets do not repeatedly hit the same limitation.
2. **Expand the reference safely.** Validate additional boundaries, original RPX relocations, shared constants and tables. Add adversarial fixtures before enabling each relocation or dependency class.
3. **Share type evidence.** Put common declarations in `include/botw/`. Attach size, alignment and field-offset evidence; assert layouts during compilation. Group blocked functions by the shared declaration they need. Recheck every implementation after a shared-header change.
4. **Prioritize the H700 port.** Select resource heaps, asset streaming and lifetime management first, then renderer submission and expensive update scheduling. Use measured memory and CPU costs from the existing port to choose clusters. Keep readable text and controller glyphs at 640×480.
5. **Separate reconstruction from port changes.** Keep matching C++ as the reference. Apply ARM/GLES adaptation and deliberate memory/performance changes in the consuming port, where gameplay and hardware checks can assess them.

Use GitHub Issues for compiler, type and verifier blockers. Include affected function IDs and the precise missing evidence. One shared fix should unblock a group of tasks before more agents repeat the same investigation.
