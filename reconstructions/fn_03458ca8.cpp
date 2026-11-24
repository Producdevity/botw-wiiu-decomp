struct Opaque_03458ca8 {
    unsigned char padding_0[38];
    unsigned short value;
};

extern "C" unsigned int fn_03458ca8(const Opaque_03458ca8* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
