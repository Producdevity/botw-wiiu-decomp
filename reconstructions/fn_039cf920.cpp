namespace {
struct State {
    unsigned char padding_0[1188];
    unsigned char value;
};
struct Object {
    unsigned char padding_0[560];
    const State* state;
};
}

extern "C" bool fn_039cf920(const Object* object) {
    return object->state != 0 && object->state->value != 0;
}
