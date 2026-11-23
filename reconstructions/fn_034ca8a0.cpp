typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

extern "C" void fn_034ca8a0(void *arg0, u32 arg1) {
    if (arg0 != 0) {
        fn_0333bcec((char *)arg0 + 0x58, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
