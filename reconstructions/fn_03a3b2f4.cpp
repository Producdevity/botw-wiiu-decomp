typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_1035d3dc;

extern "C" void fn_03a3b2f4(void *arg0, s32 arg1, s32 arg2) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0xCU), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (8))) = arg2;
        (*(s32 *)((char *)(var_r3) + (4))) = arg1;
        (*(s32 **)((char *)(var_r3) + (0))) = &data_1035d3dc;
    }
}
