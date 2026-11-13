namespace {
struct State {
    unsigned char padding_0[72];
    unsigned char value;
};
struct Object {
    unsigned char padding_0[4];
    State* state;
};
}

extern "C" void fn_02e84080(Object* object, unsigned char value) {
    if (object->state)
        object->state->value = value;
}
