namespace {
struct State {
    unsigned char padding_0[180];
    unsigned value;
};
struct Object {
    unsigned char padding_0[7052];
    State* state;
};
}

extern "C" void fn_02fbd394(Object* object, unsigned value) {
    if (object->state)
        object->state->value = value;
}
