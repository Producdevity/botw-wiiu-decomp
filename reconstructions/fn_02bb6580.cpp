namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[556];
    const State* state;
    unsigned char padding_230[105];
    unsigned char mode;
};
}

extern "C" void fn_02bb6580(Object* object) {
    unsigned value = object->state->value;
    unsigned char mode = static_cast<unsigned char>(value);
    if (value >= 2u)
        mode = 0;
    object->mode = mode;
}
