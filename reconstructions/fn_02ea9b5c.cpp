struct Opaque_02ea9b5c {
    unsigned char padding_0[12636];
    unsigned int value;
};

extern "C" unsigned int fn_02ea9b5c(const Opaque_02ea9b5c* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
