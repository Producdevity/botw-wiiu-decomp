typedef int s32;

extern "C" int fn_0280034c(void*);

extern "C" s32 fn_0281ed24(void *arg0) {
    if (fn_0280034c(arg0) == 0) {
        return 0;
    }
    (*(s32 *)((char *)(arg0) + (0x188))) = (s32) ((*(s32 *)((char *)(arg0) + (0))) + 0x3D4);
    return 1;
}
