struct Opaque_02c0f2d0 {
    unsigned int value;
};

extern "C" void fn_02c0f2d0(Opaque_02c0f2d0* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value & ~ bits);
}
