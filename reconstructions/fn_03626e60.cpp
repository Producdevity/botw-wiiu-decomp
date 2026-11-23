typedef signed char s8;
typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030de9e8(void*, void*, void*, void*);

extern "C" s32 data_102fd2b4;

extern "C" void *fn_03626e60(void *arg0, void *arg1, void *arg2, s8 arg3) {
    s32 *var_r3;
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x40U), ((var_r31 == 0) == 0))) {
        (*(s8 *)((char *)(var_r31) + (0))) = arg3;
        var_r3 = (s32 *)((char *)var_r31 + 4);
        (*(s32 **)((char *)(var_r31) + (0x3C))) = &data_102fd2b4;
        if ((var_r3 != 0) || (var_r3 = (s32 *)(fn_0308e578(4U)), ((var_r3 == 0) == 0))) {
            *var_r3 = 0;
        }
        fn_030de9e8((char *)var_r31 + 8, arg1, arg2, (void *) arg3);
    }
    return var_r31;
}
