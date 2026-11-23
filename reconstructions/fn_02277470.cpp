typedef int s32;

extern "C" void fn_0226c824(void*, void*);
extern "C" void fn_0308e6d0(void *);

extern "C" s32 data_10069d30;

extern "C" void fn_02277470(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_10069d30;
        fn_0226c824(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
