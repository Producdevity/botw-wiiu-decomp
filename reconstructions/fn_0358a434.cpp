typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03bb472c(void*);
extern "C" void fn_03bb47a0(void*);

extern "C" s32 data_102e5ef0;

extern "C" void *fn_0358a434(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x40U), ((var_r31 == 0) == 0))) {
        fn_03bb472c(var_r31);
        (*(s32 **)((char *)(var_r31) + (4))) = &data_102e5ef0;
        fn_03bb47a0(var_r31);
    }
    return var_r31;
}
