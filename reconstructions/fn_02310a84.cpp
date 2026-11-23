typedef int s32;

extern "C" void fn_02a0f7d0(void*, void*, void*);
extern "C" void fn_02ebf540(void*);
extern "C" void* data_10469978;

extern "C" void *data_104636b0;

extern "C" s32 fn_02310a84(void) {
    if ((void *) data_10469978 != 0) {
        fn_02ebf540(data_10469978);
    }
    if ((void *) data_104636b0 != 0) {
        fn_02a0f7d0(data_104636b0, 0, 0);
    }
    return 1;
}
