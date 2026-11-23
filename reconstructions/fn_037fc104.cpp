typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_04214ad4(void *, unsigned);

extern "C" s32 data_103206c4;

extern "C" void fn_037fc104(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x38))) = &data_103206c4;
        fn_04214ad4(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
