typedef int s32;

extern "C" void fn_03392224(void*);
extern "C" void fn_0339227c(void*);

extern "C" s32 fn_032b0d40(void *arg0) {
    if ((s32) *(*(s32 **)((char *)(arg0) + (0x10))) != 0) {
        fn_0339227c(arg0);
        return 1;
    }
    fn_03392224(0);
    return 1;
}
