namespace {
struct State {
    unsigned char value;
};
struct Object {
    unsigned char padding_0[80];
    State* state;
};
}

extern "C" void fn_02101b3c(Object* object, unsigned char value) {
    if (object->state)
        object->state->value = value;
}
