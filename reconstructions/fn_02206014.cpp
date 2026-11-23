typedef int s32;

extern "C" void fn_0221d998(void *, unsigned);
extern "C" void fn_02443aa4(void*, int);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02206014(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02443aa4((char *)arg0 + 0x1C, 2);
        fn_0221d998(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
