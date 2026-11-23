typedef int s32;

extern "C" void fn_02af3f8c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03126a1c(void *, s32);

extern "C" s32 data_100c0a58;
extern "C" s32 data_100c0a68;
extern "C" s32 data_100c0a80;

extern "C" void fn_0247ed68(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0))) = &data_100c0a58;
        (*(s32 **)((char *)(arg0) + (0xF0))) = &data_100c0a68;
        (*(s32 **)((char *)(arg0) + (0xEC))) = &data_100c0a80;
        fn_03126a1c((char *)arg0 + 0x7D0, 2);
        fn_02af3f8c(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
