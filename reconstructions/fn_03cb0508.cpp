typedef int s32;

extern "C" void fn_03cafd7c(void*, unsigned, int);
extern "C" void fn_03cafdb0(void*, unsigned, int);
extern "C" void fn_03cafde4(void*, unsigned, int);
extern "C" void fn_03cafe18(void*, unsigned, int);
extern "C" void fn_03caff04(void*, unsigned, int);

extern "C" s32 fn_03cb0508(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    fn_03cafe18((*(void **)((char *)(arg0) + (0x34))), arg1, (int) arg2);
    fn_03cafd7c((*(void **)((char *)(arg0) + (0x34))), arg1, (int) arg3);
    fn_03cafdb0((*(void **)((char *)(arg0) + (0x34))), arg1, (int) arg4);
    fn_03cafde4((*(void **)((char *)(arg0) + (0x34))), arg1, (int) arg5);
    fn_03caff04((*(void **)((char *)(arg0) + (0x34))), arg1, (int) arg6);
    return 0;
}
