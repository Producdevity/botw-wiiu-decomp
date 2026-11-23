typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03605650(void *, unsigned);
extern "C" void fn_03a3c398(void *, unsigned);

extern "C" s32 data_102f5620;
extern "C" s32 data_102f5630;
extern "C" s32 data_102f5648;

extern "C" void fn_035f2f3c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_102f5620;
        (*(s32 **)((char *)(arg0) + (0xA8))) = &data_102f5630;
        (*(s32 **)((char *)(arg0) + (0xA4))) = &data_102f5648;
        fn_03a3c398((char *)arg0 + 0x1D4, 2U);
        fn_03a3c398((char *)arg0 + 0x1C4, 2U);
        fn_03605650(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
