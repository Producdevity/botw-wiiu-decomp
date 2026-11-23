typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03c0fa78(void*);

extern "C" s32 data_103d48bc;

extern "C" void *fn_03c0f520(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xC4U), ((var_r31 == 0) == 0))) {
        fn_03c0fa78(var_r31);
        (*(s32 **)((char *)(var_r31) + (4))) = &data_103d48bc;
    }
    return var_r31;
}
