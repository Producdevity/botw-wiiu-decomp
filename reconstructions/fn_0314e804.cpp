typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0314e648(void*);

extern "C" s32 data_10286bd0;

extern "C" void *fn_0314e804(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x20U), ((var_r31 == 0) == 0))) {
        fn_0314e648(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x1C))) = &data_10286bd0;
    }
    return var_r31;
}
