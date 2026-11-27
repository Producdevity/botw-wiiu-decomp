namespace {
struct Object {
    unsigned char padding_0[0x513];
    signed char mode;
};
}

extern "C" void fn_03610fec(void *arg0, int arg1) {
    signed char mode = 2;
    if (arg1 != 0) {
        mode = 1;
    }
    static_cast<Object *>(arg0)->mode = mode;
}
