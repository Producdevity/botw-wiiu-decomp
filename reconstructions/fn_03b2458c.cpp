typedef int s32;

extern "C" void fn_0308e6d0(void *);

extern "C" s32 data_10372740;

extern "C" void fn_03b2458c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (8))) = &data_10372740;
        fn_0308e6d0((*(void **)((char *)(arg0) + (4))));
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
