struct Opaque_0330008c {
    unsigned char padding_0[54];
    unsigned short value;
};

extern "C" void fn_0330008c(Opaque_0330008c* object) {
    object->value |= 0x80u;
}
