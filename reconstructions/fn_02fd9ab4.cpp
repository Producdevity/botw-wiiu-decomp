typedef int s32;

extern "C" void fn_02e72c1c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02fd9ab4(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02e72c1c((char *)arg0 + 0x44, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
