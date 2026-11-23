typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dee84(void *, unsigned);

extern "C" void fn_030bc3b4(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_030dee84((char *)arg0 + 0x3C, 2U);
        fn_030dee84((char *)arg0 + 8, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
