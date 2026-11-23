typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

extern "C" s32 data_102cb708;

extern "C" void fn_034ab5dc(void *arg0, u32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x2c)));
        (*(s32 **)((char *)(arg0) + (0x0))) = &data_102cb708;
        if (temp_r3 != 0) {
            fn_0308e6d0(temp_r3);
            (*(void **)((char *)(arg0) + (0x2c))) = 0;
        }
        temp_r3_2 = (*(void **)((char *)(arg0) + (0x3c)));
        if (temp_r3_2 != 0) {
            fn_0308e6d0(temp_r3_2);
            (*(void **)((char *)(arg0) + (0x3c))) = 0;
        }
        fn_0333bcec((char *)arg0 + 48, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
