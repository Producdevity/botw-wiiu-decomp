typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_030cb1b4(void*, void*, void*);

extern "C" void *fn_030ca808(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x10U), ((var_r31 == 0) == 0))) {
        (*(s32 *)((char *)(var_r31) + (0))) = (s32) *arg1;
        (*(s32 *)((char *)(var_r31) + (4))) = (s32) *arg2;
        (*(s32 *)((char *)(var_r31) + (8))) = (s32) *arg3;
        (*(s32 *)((char *)(var_r31) + (0xC))) = fn_030cb1b4(arg1, arg2, arg3);
    }
    return var_r31;
}
