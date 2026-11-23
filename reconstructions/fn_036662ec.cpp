typedef int s32;

extern "C" void fn_03666158(void*);
extern "C" void fn_036661d0(void*);

extern "C" void *data_1047be88;

extern "C" void fn_036662ec(void *arg0) {
    if ((s32) (*(s32 *)((char *)(data_1047be88) + (0x530))) != 3) {
        fn_03666158(arg0);
        fn_036661d0(arg0);
    }
}
