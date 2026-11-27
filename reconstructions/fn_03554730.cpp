namespace {
struct State {
    char padding_0[8];
    float value;
    char enabled;
};
}

extern "C" int data_10556238;

extern "C" void fn_03554730(float value) {
    State* state = (State*)&data_10556238;
    state->enabled = 1;
    state->value = value;
}
