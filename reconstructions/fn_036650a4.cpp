typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03670f78(void*, void*);

extern "C" s32 data_1030227c;

extern "C" void fn_036650a4(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_1030227c;
        fn_03670f78(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
