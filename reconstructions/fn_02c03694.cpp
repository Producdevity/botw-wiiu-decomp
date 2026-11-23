typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101bf4f8;

extern "C" void fn_02c03694(void *arg0, s32 arg1) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(8U), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (0))) = arg1;
        (*(s32 **)((char *)(var_r3) + (4))) = &data_101bf4f8;
    }
}
