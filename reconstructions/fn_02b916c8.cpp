namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[496];
    const State* state;
    unsigned char padding_1f4[12];
    unsigned char mode;
};
}

extern "C" void fn_02b916c8(Object* object) {
    unsigned value = object->state->value;
    object->mode = value < 2u ? static_cast<unsigned char>(value) : 0;
}
