namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[552];
    const State* state;
    unsigned char padding_22c[107];
    unsigned char mode;
};
}

extern "C" void fn_02bb6540(Object* object) {
    unsigned value = object->state->value;
    unsigned char mode = static_cast<unsigned char>(value);
    if (value >= 2u)
        mode = 1;
    object->mode = mode;
}
