typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030c18dc(void *, unsigned);
extern "C" void fn_0396aee0(void*, int);

extern "C" void fn_0386cf00(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0396aee0((char *)arg0 + 0xC0, 2);
        fn_030c18dc((char *)arg0 + 8, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
