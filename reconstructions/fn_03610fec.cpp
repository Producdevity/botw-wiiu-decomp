namespace {
struct Object {
    unsigned char padding_0[0x513];
    signed char mode;
};
}

extern "C" void fn_03610fec(void *object, int enabled) {
    signed char mode = 2;
    if (enabled != 0) {
        mode = 1;
    }
    static_cast<Object *>(object)->mode = mode;
}
