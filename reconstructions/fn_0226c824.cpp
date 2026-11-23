typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" s32 data_10009d0c;

extern "C" void fn_0226c824(void *arg0, void *arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_10009d0c;
        fn_030eb73c((char *)arg0 + 4, 2U);
        if ((s32) arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
