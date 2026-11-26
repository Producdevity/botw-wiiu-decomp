struct Opaque_0399f780_Inner {
    unsigned char padding_0[12];
    unsigned int value;
};

struct Opaque_0399f780 {
    unsigned char padding_0[28];
    Opaque_0399f780_Inner* inner;
};

extern "C" unsigned int fn_0399f780(const Opaque_0399f780* object) {
    return object->inner->value;
}
