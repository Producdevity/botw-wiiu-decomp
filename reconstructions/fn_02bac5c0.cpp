namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[172];
    const State* state;
    unsigned char padding_b0[14];
    unsigned char mode;
};
}

extern "C" void fn_02bac5c0(Object* object) {
    unsigned value = object->state->value;
    object->mode = value < 3u ? static_cast<unsigned char>(value) : 2;
}
