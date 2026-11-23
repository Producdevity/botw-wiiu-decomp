typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c0eab0(void *, unsigned);

extern "C" void fn_03c105dc(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_03c0eab0(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
