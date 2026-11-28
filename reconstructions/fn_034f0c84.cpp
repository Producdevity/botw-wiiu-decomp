namespace {
struct Object {
    char padding_0[0x180];
    char member_180[1];
};
}

extern "C" void fn_034f02b8(void*);
extern "C" void fn_034f07cc(void*);
extern "C" int fn_034f0c14(void*);

extern "C" void fn_034f0c84(void *object) {
    if (fn_034f0c14(((Object *)object)->member_180) != 0) {
        fn_034f02b8(object);
        fn_034f07cc(object);
    }
}
