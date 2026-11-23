typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

extern "C" s32 data_102cbd08;

extern "C" void fn_034b391c(void *arg0, u32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x8)));
        (*(s32 **)((char *)(arg0) + (0x0))) = &data_102cbd08;
        if (temp_r3 != 0) {
            fn_0308e6d0(temp_r3);
            (*(void **)((char *)(arg0) + (0x8))) = 0;
        }
        temp_r3_2 = (*(void **)((char *)(arg0) + (0x28)));
        if (temp_r3_2 != 0) {
            fn_0308e6d0(temp_r3_2);
            (*(void **)((char *)(arg0) + (0x28))) = 0;
        }
        fn_0333bcec((char *)arg0 + 28, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
