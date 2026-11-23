typedef int s32;

extern "C" void fn_025afc10(void*, int);
extern "C" void fn_0260332c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_025b3358(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_025afc10((char *)arg0 + 0x50, 2);
        fn_0260332c(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
