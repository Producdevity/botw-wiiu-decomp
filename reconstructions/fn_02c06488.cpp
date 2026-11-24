struct Opaque_02c06488 {
    unsigned char value;
};

extern "C" void fn_02c06488(Opaque_02c06488* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
