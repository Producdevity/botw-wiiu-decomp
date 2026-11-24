struct Opaque_02b96850 {
    unsigned char value;
};

extern "C" void fn_02b96850(Opaque_02b96850* object, unsigned int bits) {
    object->value = static_cast<unsigned char>(object->value | bits);
}
