extern "C" void fn_0340a304(unsigned* state, bool enabled, bool secondary) {
    unsigned flags = state[88];
    if (secondary) {
        if (enabled) flags |= 0x1000;
        else flags &= ~0x1000u;
        state[88] = flags;
        state[87] |= 1;
    } else {
        if (enabled) flags |= 0x800;
        else flags &= ~0x800u;
        state[88] = flags;
        state[87] |= 1;
    }
}
