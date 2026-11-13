static inline unsigned advance_seed(unsigned value, unsigned index) {
    return 1812433253u * (value ^ (value >> 30)) + index;
}

extern "C" void fn_030c48dc(unsigned* state, unsigned seed) {
    state[0] = advance_seed(seed, 1);
    state[1] = advance_seed(state[0], 2);
    state[2] = advance_seed(state[1], 3);
    state[3] = advance_seed(state[2], 4);
}
