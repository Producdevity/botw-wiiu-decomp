struct Opaque_02ea48dc {
    unsigned char padding[ 1600 ];
    unsigned int value;
};

extern "C" bool fn_02ea48dc(const Opaque_02ea48dc* object) {
    return object->value == 1u;
}
