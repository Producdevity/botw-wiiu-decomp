namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[168];
    const State* state;
    unsigned char padding_ac[17];
    unsigned char mode;
};
}

extern "C" void fn_02bac5a0(Object* object) {
    unsigned value = object->state->value;
    object->mode = value < 2u ? static_cast<unsigned char>(value) : 0;
}
