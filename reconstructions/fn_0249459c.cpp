typedef int s32;

extern "C" void fn_024948a8(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_100c35cc;

extern "C" void *fn_0249459c(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xA8U), ((var_r31 == 0) == 0))) {
        fn_024948a8(var_r31);
        (*(s32 **)((char *)(var_r31) + (0xA4))) = &data_100c35cc;
    }
    return var_r31;
}
