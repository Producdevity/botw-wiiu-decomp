struct Opaque_037ed488 {
    unsigned char padding_0[208];
    unsigned int value;
};

extern "C" unsigned int fn_037ed488(const Opaque_037ed488* object) {
    return ((static_cast<unsigned int>(object->value) >> 2) & 0x1u);
}
