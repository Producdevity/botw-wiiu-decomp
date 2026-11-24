struct Opaque_0324d230 {
    unsigned char value;
};

extern "C" unsigned int fn_0324d230(const Opaque_0324d230* object) {
    return ((static_cast<unsigned int>(object->value) >> 3) & 0x1u);
}
