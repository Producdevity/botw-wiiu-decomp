struct Opaque_037dddcc {
    unsigned char padding_0[12];
    unsigned int value;
};

extern "C" bool fn_037dddcc(const Opaque_037dddcc* object) {
    return object->value != 0;
}
