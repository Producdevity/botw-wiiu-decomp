typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03814cb0(void*, void*);

extern "C" s32 data_10322108;

extern "C" void fn_03814da8(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_10322108;
        fn_03814cb0(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
