namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[448];
    const State* state;
    unsigned char padding_1c4[83];
    unsigned char mode;
};
}

extern "C" void fn_02bafa64(Object* object) {
    unsigned value = object->state->value;
    object->mode = value < 2u ? static_cast<unsigned char>(value) : 1;
}
