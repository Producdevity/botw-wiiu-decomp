struct Opaque_03b9b7b4 {
    unsigned char padding_0[4];
    unsigned int value;
};

extern "C" unsigned int fn_03b9b7b4(const Opaque_03b9b7b4* object) {
    return object->value + 100u;
}
