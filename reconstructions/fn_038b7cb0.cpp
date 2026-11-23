typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_038b5bb8(void *, unsigned);
extern "C" void fn_03a83798(void *, unsigned);

extern "C" void fn_038b7cb0(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_03a83798((char *)arg0 + 0x50, 2U);
        fn_038b5bb8(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
