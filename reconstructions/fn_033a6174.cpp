namespace {
struct Object {
    unsigned char padding_0[0x40];
    signed char direction;
};
}

extern "C" void fn_033a6174(void *arg0, signed char arg1) {
    if (arg1 != -1 && arg1 != 1) {
        arg1 = 1;
    }
    static_cast<Object *>(arg0)->direction = arg1;
}
