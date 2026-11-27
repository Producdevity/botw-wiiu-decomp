namespace {
struct Object {
    unsigned char padding_0[0x9C];
    int value;
};
}

extern "C" void fn_02b1cec4(void *arg0, int arg1) {
    int value = 0;
    if (arg1 != 0) {
        value = -1;
    }
    static_cast<Object *>(arg0)->value = value;
}
