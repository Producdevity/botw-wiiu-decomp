namespace {
struct Object {
    char padding_0[0x1F0];
    char member_1f0[0x6C];
    int value_25c;
};
}

extern "C" void fn_037e6fbc(int);

extern "C" void fn_0312da64(void *object) {
    if (((Object *)object)->value_25c != 0) {
        fn_037e6fbc((int)((Object *)object)->member_1f0);
        ((Object *)object)->value_25c = 0;
    }
}
