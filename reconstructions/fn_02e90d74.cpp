struct Opaque_02e90d74 {
    unsigned char padding_0[1600];
    unsigned int value;
};

extern "C" bool fn_02e90d74(const Opaque_02e90d74* object) {
    return object->value == 0;
}
