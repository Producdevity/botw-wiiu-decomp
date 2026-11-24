struct Opaque_02ee2dec {
    unsigned char padding_0[680];
    unsigned int value;
};

extern "C" bool fn_02ee2dec(const Opaque_02ee2dec* object) {
    return object->value != 0;
}
