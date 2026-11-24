struct Opaque_02c581dc {
    unsigned char padding_0[16];
    unsigned int value;
};

extern "C" bool fn_02c581dc(const Opaque_02c581dc* object) {
    return object->value == 0;
}
