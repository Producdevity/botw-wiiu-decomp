namespace {
struct State {
    unsigned char padding_0[72];
    unsigned char value;
};
struct Object {
    unsigned char padding_0[4];
    const State* state;
};
}

extern "C" bool fn_02e84094(const Object* object) {
    return object->state != 0 && object->state->value != 0;
}
