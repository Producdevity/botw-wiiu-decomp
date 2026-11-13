namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[20];
    const State* state;
    unsigned char mode;
};
}

extern "C" void fn_02c02908(Object* object) {
    unsigned value = object->state->value;
    unsigned char mode = static_cast<unsigned char>(value);
    if (value >= 4u)
        mode = 0;
    object->mode = mode;
}
