namespace {
struct State {
    unsigned char padding_0[85];
    unsigned char value;
};
struct Object {
    const State* state;
};
}

extern "C" bool fn_02ece3e4(const Object* object) {
    return object->state != 0 && object->state->value != 0;
}
