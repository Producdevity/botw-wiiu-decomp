typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0369fff8(void*);

extern "C" s32 data_103047a8;

extern "C" void *fn_0369fe9c(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x14U), ((var_r31 == 0) == 0))) {
        fn_0369fff8(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x10))) = &data_103047a8;
    }
    return var_r31;
}
