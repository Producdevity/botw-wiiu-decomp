typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dfefc(void *, unsigned);

extern "C" s32 data_10302a38;

extern "C" void fn_03670f78(void *arg0, void *arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_10302a38;
        fn_030dfefc(arg0, 0U);
        if ((s32) arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
