namespace {
struct State {
    unsigned char padding_0[480];
    int value;
};
struct Object {
    unsigned char padding_0[12];
    const State* state;
};
}

extern "C" bool fn_02c11f30(const Object* object) {
    return object->state != 0 && object->state->value > 0;
}
