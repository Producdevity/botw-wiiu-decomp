typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03ba3634(void *, unsigned);

extern "C" s32 data_103c6658;

extern "C" void fn_03b96480(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x14))) = &data_103c6658;
        fn_03ba3634(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
