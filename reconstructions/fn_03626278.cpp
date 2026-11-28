namespace {
struct Object {
    unsigned char padding_0[0x14];
    signed char *buffer;
};
}

extern "C" void fn_03626278(void *object, signed char *buffer) {
    if (buffer != 0) {
        static_cast<Object *>(object)->buffer = buffer;
        *buffer = 0;
    }
}
