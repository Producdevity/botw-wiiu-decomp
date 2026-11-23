typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0394b54c(void*, void*);

extern "C" s32 data_1033ff38;

extern "C" void fn_0394b798(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_1033ff38;
        fn_0394b54c((char *)arg0 + 4, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
