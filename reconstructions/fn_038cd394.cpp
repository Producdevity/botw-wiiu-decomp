typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb79c(void *, unsigned);

extern "C" void fn_038cd394(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_030bb79c((char *)arg0 + 0x64, 2U);
        fn_030bb79c((char *)arg0 + 0x28, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
