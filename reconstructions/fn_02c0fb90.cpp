struct Opaque_02c0fb90 {
    unsigned int value;
};

extern "C" void fn_02c0fb90(Opaque_02c0fb90* object, unsigned int bits) {
    object->value = static_cast<unsigned int>(object->value | bits);
}
