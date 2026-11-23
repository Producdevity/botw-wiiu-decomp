typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a7579c(unsigned *);

extern "C" s32 data_103624d4;

extern "C" void fn_03a757e4(u32 *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x1C))) = &data_103624d4;
        fn_03a7579c(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
