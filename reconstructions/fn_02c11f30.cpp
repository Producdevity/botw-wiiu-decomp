struct Opaque_02c11f30_State {
    unsigned char padding_0[480];
    int value;
};

struct Opaque_02c11f30 {
    unsigned char padding_0[12];
    const Opaque_02c11f30_State* state;
};

extern "C" bool fn_02c11f30(const Opaque_02c11f30* object) {
    return object->state != 0 && object->state->value > 0;
}
