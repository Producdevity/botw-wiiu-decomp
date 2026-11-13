extern "C" void fn_03cafe80(unsigned* state, int channel, unsigned increment) {
    if (channel == 1) {
        unsigned limit = state[15];
        unsigned value = state[3] + increment;
        state[3] = value;
        if (value == limit) state[3] = 0;
    } else if (channel == 2) {
        unsigned limit = state[16];
        unsigned value = state[4] + increment;
        state[4] = value;
        if (value == limit) state[4] = 0;
    } else if (channel == 3) {
        unsigned limit = state[17];
        unsigned value = state[5] + increment;
        state[5] = value;
        if (value == limit) state[5] = 0;
    }
}
