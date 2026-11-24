struct Opaque_034f3144 {
    unsigned char value;
};

extern "C" unsigned int fn_034f3144(const Opaque_034f3144* object) {
    return ((static_cast<unsigned int>(object->value) >> 1) & 0x1u);
}
