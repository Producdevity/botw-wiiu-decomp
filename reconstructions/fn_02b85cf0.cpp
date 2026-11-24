struct Opaque_02b85cf0 {
    unsigned char padding_0[64];
    unsigned int value;
};

extern "C" bool fn_02b85cf0(const Opaque_02b85cf0* object) {
    return object->value != 0;
}
