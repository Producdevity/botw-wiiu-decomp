typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039794d0(void *, int);
extern "C" void fn_039abaf8(void*, void*);
extern "C" void fn_03ae44f4(void *, int);

extern "C" s32 data_10348614;
extern "C" s32 data_103486d4;

extern "C" void fn_0397a7cc(void *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0xB84)));
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_10348614;
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_103486d4;
        if (temp_r3 != 0) {
            fn_039abaf8(temp_r3, arg0);
            (*(void **)((char *)(arg0) + (0xB84))) = 0;
        }
        fn_03ae44f4((char *)arg0 + 0xB88, 2);
        fn_039794d0(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
