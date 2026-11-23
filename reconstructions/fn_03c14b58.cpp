typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_103dba70;

extern "C" void fn_03c14b58(void *arg0) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0x20CU), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (0))) = 0;
        (*(s32 **)((char *)(var_r3) + (0x208))) = &data_103dba70;
    }
}
