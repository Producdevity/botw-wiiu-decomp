struct Opaque_0314eea0 {
    unsigned int value;
};

extern "C" unsigned int fn_0314eea0(const Opaque_0314eea0* object) {
    return ((static_cast<unsigned int>(object->value) >> 4) & 0x1u);
}
