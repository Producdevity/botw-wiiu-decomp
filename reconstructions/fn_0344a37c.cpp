namespace {
struct TimedState {
    unsigned char unknown_000[224];
    float value;
    unsigned short flags;
};
}

extern "C" void fn_0344a37c(TimedState* state, float value) {
    state->value = value;
    state->flags |= 0x20;
}
