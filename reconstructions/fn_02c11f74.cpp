namespace {
struct State {
    unsigned char padding_0[1120];
    short value;
};
struct Object {
    unsigned char padding_0[16];
    const State* state;
};
}

extern "C" bool fn_02c11f74(const Object* object) {
    return object->state != 0 && object->state->value > 0;
}
