namespace {
struct State {
    unsigned value;
};
struct Object {
    unsigned char padding_0[124];
    const State* state;
    unsigned char padding_80[20];
    unsigned char mode;
};
}

extern "C" void fn_02bcd39c(Object* object) {
    unsigned value = object->state->value;
    unsigned char mode = static_cast<unsigned char>(value);
    if (value >= 3u)
        mode = 1;
    object->mode = mode;
}
