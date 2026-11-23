typedef int s32;

extern "C" void fn_020eba44(void *, unsigned);
extern "C" void fn_0244412c(void*, int);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_021dc818(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0244412c((char *)arg0 + 0x4C, 2);
        fn_020eba44(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
