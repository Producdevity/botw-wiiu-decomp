namespace {
struct State {
    unsigned char padding_0[84];
    unsigned char value;
};
struct Object {
    unsigned char padding_0[904];
    State* state;
};
}

extern "C" void fn_02d387a0(Object* object, unsigned char value) {
    if (object->state)
        object->state->value = value;
}
