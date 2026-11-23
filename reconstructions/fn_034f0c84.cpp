extern "C" void fn_034f02b8(void*);
extern "C" void fn_034f07cc(void*);
extern "C" int fn_034f0c14(void*);

extern "C" void fn_034f0c84(void *arg0) {
    if (fn_034f0c14((char *)arg0 + 0x180) != 0) {
        fn_034f02b8(arg0);
        fn_034f07cc(arg0);
    }
}
