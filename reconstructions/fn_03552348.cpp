typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_035486b0(void *, unsigned);
extern "C" void fn_03be1738(void *);

extern "C" s32 data_102e1404;
extern "C" s32 data_102e1424;

extern "C" void fn_03552348(void *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x1C0)));
        (*(s32 **)((char *)(arg0) + (0))) = &data_102e1404;
        (*(s32 **)((char *)(arg0) + (4))) = &data_102e1424;
        (*(s32 *)((char *)(arg0) + (0x12C))) = 0xDEADCA11;
        if (temp_r3 != 0) {
            fn_03be1738(temp_r3);
            (*(void **)((char *)(arg0) + (0x1C0))) = 0;
        }
        fn_035486b0((char *)arg0 + 4, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
