typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03670f78(void*, void*);

extern "C" s32 data_10300918;

extern "C" void fn_0364e6d0(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_10300918;
        fn_03670f78(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
