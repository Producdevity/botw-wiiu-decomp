typedef int s32;

extern "C" void fn_02b7d648(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" void fn_023cd3c0(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02b7d648((char *)arg0 + 0x34, 2);
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
