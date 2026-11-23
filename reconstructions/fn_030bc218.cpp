typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bbd6c(void*, void*);

extern "C" s32 data_1027ad2c;

extern "C" void fn_030bc218(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x18))) = &data_1027ad2c;
        fn_030bbd6c(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
