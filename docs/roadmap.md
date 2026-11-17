# Priorities

1. **Build one linked component.** Reproduce the random-state and direct-call
   linker checks, then choose one component with verified code and data. Check
   linked symbols and bytes and track original-code fallbacks.
2. **Resolve shared prerequisites.** Group work by common layouts, data,
   imports and compiler limitations. Put shared declarations in
   `include/botw/` with asserted sizes, alignment and offsets. Recheck all
   consumers after a shared-header change.
3. **Expand references as needed for closure.** Validate boundaries and
   original RPX relocations in independent checks. Add fixtures for new
   dependency classes. Test compiler hypotheses on representative functions
   from the same group and record failed attempts.
4. **Keep prepared tasks available.** Use reviewed interfaces and supported
   dependencies for inexpensive contributor work. Publish matched bytes,
   linked units and evidence gaps alongside function counts.
5. **Prioritize H700 work using measurements.** Choose resource heaps, asset
   streaming, lifetimes, renderer submission or update scheduling according
   to measured costs. Test ARM/GLES adaptation and memory/performance changes
   in the consuming port. Preserve legibility at 640×480 and verify on device.

Use GitHub Issues for compiler, type and verifier blockers. Include affected function IDs and the precise missing evidence. One shared fix should unblock a group of tasks before more agents repeat the same investigation.

[Workflow assessment and pilot results](workflow-assessment.md)
