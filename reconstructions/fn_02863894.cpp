typedef int s32;

extern "C" void fn_02b27110(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);

extern "C" void fn_02863894(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_02b27110((char *)arg0 + 0x74, 2U);
        fn_037b7d90(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
