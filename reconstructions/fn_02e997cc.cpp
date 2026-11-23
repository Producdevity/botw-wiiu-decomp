typedef int s32;

extern "C" void fn_02e91174(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_1021aee0;

extern "C" void *fn_02e997cc(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x40U), ((var_r31 == 0) == 0))) {
        fn_02e91174(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x3C))) = &data_1021aee0;
    }
    return var_r31;
}
