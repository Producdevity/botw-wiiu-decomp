typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0308e6d4(void *);
extern "C" void fn_03c29148(void *);
extern "C" void fn_03c29204(void *, int);

extern "C" s32 data_1027be04;
extern "C" s32 data_1027be1c;

extern "C" void fn_030c8c6c(void *arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0))) = &data_1027be04;
        (*(s32 **)((char *)(arg0) + (0x44))) = &data_1027be1c;
        fn_03c29148(arg0);
        temp_r3 = (*(void **)((char *)(arg0) + (0x48)));
        if (temp_r3 != 0) {
            fn_0308e6d4(temp_r3);
        }
        fn_03c29204(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
