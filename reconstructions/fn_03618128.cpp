typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);

extern "C" void fn_03618128(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_030bb614((char *)arg0 + 0x14, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
