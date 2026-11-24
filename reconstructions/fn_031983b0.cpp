struct Opaque_031983b0 {
    unsigned char padding_0[134];
    unsigned char value;
};

extern "C" unsigned int fn_031983b0(const Opaque_031983b0* object) {
    return ((static_cast<unsigned int>(object->value) >> 5) & 0x1u);
}
