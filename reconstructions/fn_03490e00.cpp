struct Opaque_03490e00 {
    unsigned char padding_0[140];
    unsigned int value;
};

extern "C" unsigned int fn_03490e00(const Opaque_03490e00* object) {
    return object->value + 4u;
}
