namespace {
struct Object {
    unsigned char padding_0[0xFC];
    int value;
};
}

extern "C" void fn_034e5888(void *arg0, int arg1) {
    if (arg1 < -1) {
        arg1 = -1;
    }
    static_cast<Object *>(arg0)->value = arg1;
}
