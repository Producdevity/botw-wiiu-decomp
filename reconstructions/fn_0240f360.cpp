typedef int s32;

extern "C" void fn_02254478(void *, unsigned);
extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0240f360(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02b61568((char *)arg0 + 0x118, 2U);
        fn_02254478(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
