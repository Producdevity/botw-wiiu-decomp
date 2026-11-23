struct SignedStateBytes {
    char pad0[0x95];
    signed char level;
    signed char mode;
};

extern "C" bool fn_03a3e880(const SignedStateBytes* state) {
    return state->mode == 2 && state->level >= 0;
}
