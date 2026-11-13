namespace {
struct State {
    unsigned char value;
};
struct Object {
    unsigned char padding_0[320];
    const State* state;
};
}

extern "C" bool fn_03c1ae10(const Object* object) {
    return object->state != 0 && object->state->value != 0;
}
