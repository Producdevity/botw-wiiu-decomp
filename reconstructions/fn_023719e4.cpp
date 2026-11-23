typedef unsigned int u32;

extern "C" void fn_02b0f69c(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" void fn_023719e4(void *arg0, u32 arg1) {
    if (arg0 != 0) {
        fn_02b0f69c((char *)arg0 + 0x10, 2);
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
