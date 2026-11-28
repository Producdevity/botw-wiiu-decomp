namespace {
struct Object {
    unsigned char padding_0[0x9C];
    int value;
};
}

extern "C" void fn_02b1cec4(void* object, int enabled) {
    int value = 0;
    if (enabled != 0) {
        value = -1;
    }
    ((Object*)object)->value = value;
}
