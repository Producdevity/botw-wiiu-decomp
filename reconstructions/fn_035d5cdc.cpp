typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_102ed448;

extern "C" void fn_035d5cdc(void *arg0) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0x18U), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (0x10))) = 0;
        (*(s32 **)((char *)(var_r3) + (0x14))) = &data_102ed448;
    }
}
