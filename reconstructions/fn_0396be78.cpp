typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_0396be78(void *arg0, void *arg1) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(8U), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (0))) = (s32) (*(s32 *)((char *)(arg1) + (0)));
        (*(s32 *)((char *)(var_r3) + (4))) = (s32) (*(s32 *)((char *)(arg1) + (4)));
    }
}
