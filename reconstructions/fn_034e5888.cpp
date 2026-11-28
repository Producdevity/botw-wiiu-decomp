namespace {
struct Object {
    unsigned char padding_0[0xFC];
    int value;
};
}

extern "C" void fn_034e5888(void *object, int value) {
    if (value < -1) {
        value = -1;
    }
    static_cast<Object *>(object)->value = value;
}
