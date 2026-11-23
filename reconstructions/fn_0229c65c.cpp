typedef int s32;

extern "C" void fn_02297c74(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);

extern "C" void fn_0229c65c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_030bb614((char *)arg0 + 0x3C, 2U);
        fn_02297c74(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
