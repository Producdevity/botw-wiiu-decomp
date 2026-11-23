typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030913ec(void*, void*, int);

extern "C" s32 data_1025e814;

extern "C" void *fn_030916b0(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x7CU), ((var_r31 == 0) == 0))) {
        fn_030913ec(var_r31, (char *)var_r31 + 0x1C, 0x60);
        (*(s32 **)((char *)(var_r31) + (0x18))) = &data_1025e814;
    }
    return var_r31;
}
