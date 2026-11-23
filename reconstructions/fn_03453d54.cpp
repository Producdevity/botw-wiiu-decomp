typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

extern "C" void fn_03453d54(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0333bcec((char *)arg0 + 0x1C, 2U);
        fn_0333bcec((char *)arg0 + 0x10, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
