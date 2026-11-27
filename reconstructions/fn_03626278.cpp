namespace {
struct Object {
    unsigned char padding_0[0x14];
    signed char *buffer;
};
}

extern "C" void fn_03626278(void *arg0, signed char *arg1) {
    if (arg1 != 0) {
        static_cast<Object *>(arg0)->buffer = arg1;
        *arg1 = 0;
    }
}
