typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" s32 data_10036318;

extern "C" void fn_02175efc(void *arg0, u32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x60)));
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_10036318;
        if (temp_r3 != 0) {
            fn_0308e6d0(temp_r3);
            (*(void **)((char *)(arg0) + (0x60))) = 0;
        }
        temp_r3_2 = (*(void **)((char *)(arg0) + (0x64)));
        if (temp_r3_2 != 0) {
            fn_0308e6d0(temp_r3_2);
            (*(void **)((char *)(arg0) + (0x64))) = 0;
        }
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
