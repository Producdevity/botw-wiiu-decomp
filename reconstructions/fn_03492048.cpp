typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03485a50(void*, void*);

extern "C" s32 data_102ca24c;

extern "C" void fn_03492048(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_102ca24c;
        fn_03485a50(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
