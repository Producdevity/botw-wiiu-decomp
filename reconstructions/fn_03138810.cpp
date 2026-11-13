namespace {
struct State {
    unsigned char padding_0[48];
    int value;
};
struct Object {
    unsigned char padding_0[40];
    const State* state;
};
}

extern "C" bool fn_03138810(const Object* object) {
    return object->state != 0 && object->state->value != 0;
}
