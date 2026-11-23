typedef int s32;

extern "C" void fn_02b3b9e0(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" void fn_022edd64(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02b3b9e0((char *)arg0 + 0x44, 2U);
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
