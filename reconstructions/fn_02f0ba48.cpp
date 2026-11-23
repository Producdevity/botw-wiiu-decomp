typedef int s32;

extern "C" void fn_02ecfbdc(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02f0ba48(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02ecfbdc((char *)arg0 + 0xC, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
