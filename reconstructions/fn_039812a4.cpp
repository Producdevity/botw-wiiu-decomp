typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a83798(void *, unsigned);

extern "C" void fn_039812a4(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_03a83798((char *)arg0 + 0x44, 2U);
        fn_03a83798((char *)arg0 + 0x18, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
