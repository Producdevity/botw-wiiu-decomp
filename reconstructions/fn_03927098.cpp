typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03928090(void*);

extern "C" s32 data_10339848;

extern "C" void *fn_03927098(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x2CU), ((var_r31 == 0) == 0))) {
        fn_03928090(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x20))) = &data_10339848;
    }
    return var_r31;
}
