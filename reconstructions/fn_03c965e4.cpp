struct State {
    unsigned words[21];
    unsigned char flags[3];
};
// Volatile preserves the observed initialization store order; original volatility is unconfirmed.
extern "C" void fn_03c965e4(volatile State* state) {
    state->flags[2] = 0;
    state->words[10] = 100;
    state->words[14] = 0;
    state->words[11] = 100;
    state->words[16] = 0;
    state->words[12] = 100;
    state->words[13] = 0;
    state->words[2] = 0;
    state->words[17] = 0;
    state->words[6] = 0;
    state->words[9] = 0;
    state->words[3] = 0;
    state->words[18] = 0;
    state->words[1] = 0;
    state->words[8] = 0;
    state->words[0] = 0;
    state->words[19] = 0;
    state->words[5] = 0;
    state->words[20] = 0;
    state->flags[1] = 0;
    state->words[15] = 0;
    state->flags[0] = 0;
}
