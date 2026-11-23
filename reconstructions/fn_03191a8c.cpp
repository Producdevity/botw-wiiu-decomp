typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0386cf00(void*, int);

extern "C" void fn_03191a8c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0386cf00((char *)arg0 + 0xE8, 2);
        fn_0386cf00((char *)arg0 + 0x14, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
