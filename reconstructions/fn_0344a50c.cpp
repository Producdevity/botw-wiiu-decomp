struct Opaque_0344a50c {
    unsigned char padding_0[230];
    unsigned short value;
};

extern "C" unsigned int fn_0344a50c(const Opaque_0344a50c* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
