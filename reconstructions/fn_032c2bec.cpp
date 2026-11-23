typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037e6024(void *, unsigned);

extern "C" void fn_032c2bec(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_037e6024((char *)arg0 + 0x18, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
