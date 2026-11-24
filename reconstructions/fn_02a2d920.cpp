struct Opaque_02a2d920 {
    unsigned char padding[ 468 ];
    unsigned int value;
};

extern "C" bool fn_02a2d920(const Opaque_02a2d920* object, unsigned int value) {
    return object->value == value;
}
