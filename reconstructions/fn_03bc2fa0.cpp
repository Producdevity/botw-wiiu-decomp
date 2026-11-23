typedef int s32;

extern "C" void fn_03bc2b84(void*);
extern "C" void fn_03bc2d28(void*);
extern "C" void fn_03bc2f14(void*);

extern "C" void fn_03bc2fa0(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x24))) != 0) {
        fn_03bc2b84(arg0);
        fn_03bc2d28(arg0);
        fn_03bc2f14(arg0);
    }
}
