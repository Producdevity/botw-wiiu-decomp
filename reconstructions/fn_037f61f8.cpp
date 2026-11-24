struct Opaque_037f61f8 {
    unsigned char padding_0[8];
    unsigned int value;
};

extern "C" unsigned int fn_037f61f8(const Opaque_037f61f8* object) {
    return ((static_cast<unsigned int>(object->value) >> 16) & 0x1u);
}
