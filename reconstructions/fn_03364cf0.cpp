typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

extern "C" void fn_03364cf0(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0333bcec((char *)arg0 + 0x3C, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
