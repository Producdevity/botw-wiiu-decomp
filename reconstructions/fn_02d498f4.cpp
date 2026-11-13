namespace {
struct State {
    unsigned char padding_0[4896];
    unsigned value;
};
struct Object {
    unsigned char padding_0[48];
    State* state;
};
}

extern "C" void fn_02d498f4(Object* object, unsigned value) {
    if (object->state)
        object->state->value = value;
}
