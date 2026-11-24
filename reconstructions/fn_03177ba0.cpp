struct Opaque_03177ba0 {
    unsigned char padding_0[92];
    unsigned int value;
};

extern "C" bool fn_03177ba0(const Opaque_03177ba0* object) {
    return object->value != 0;
}
