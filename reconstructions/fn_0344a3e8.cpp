struct Opaque_0344a3e8 {
    unsigned char unknown_000[224];
    float value;
    unsigned short flags;
    unsigned char unknown_0e6[2];
    unsigned int options;
};

extern "C" void fn_0344a3e8(Opaque_0344a3e8* state, bool enable) {
    unsigned int options = state->options;
    if (enable)
        options |= 1;
    else
        options &= ~1;
    state->options = options;
    state->flags |= 0x20;
}
