typedef int s32;

extern "C" int fn_02ea94dc(void*);

extern "C" void fn_02ea952c(void *arg0) {
    if (fn_02ea94dc(arg0) != 0) {
        (*(s32 *)((char *)(arg0) + (0x3128))) = 0;
        return;
    }
    (*(s32 *)((char *)(arg0) + (0x3128))) = (s32) ((*(s32 *)((char *)(arg0) + (0x3128))) + 1);
}
