typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dea80(void *, unsigned);

extern "C" void fn_03626f08(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_030dea80((char *)arg0 + 8, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
