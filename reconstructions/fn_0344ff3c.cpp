typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03485a50(void*, void*);

extern "C" s32 data_102c7efc;

extern "C" void fn_0344ff3c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_102c7efc;
        fn_03485a50(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
