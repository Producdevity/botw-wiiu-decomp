typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" void fn_0362a47c(void*, int);

extern "C" void fn_021cbc8c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0362a47c((char *)arg0 + 0x20, 2);
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
