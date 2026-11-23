typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a75b14(void *, unsigned);
extern "C" void fn_03a774c4(void *, unsigned);

extern "C" void fn_03a0e5d8(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_03a75b14((char *)arg0 + 0x158, 2U);
        fn_03a774c4(arg0, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
