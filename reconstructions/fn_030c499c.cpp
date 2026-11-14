extern "C" unsigned fn_030c499c(unsigned* state) {
    const unsigned temporary = state[0] ^ (state[0] << 11);
    state[0] = state[1];
    state[1] = state[2];
    state[2] = state[3];
    state[3] = (state[3] ^ (state[3] >> 19)) ^
               (temporary ^ (temporary >> 8));
    return state[3];
}
