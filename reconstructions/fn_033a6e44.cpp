typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_033a5e34(void*);

extern "C" s32 data_102ba1a8;

extern "C" void *fn_033a6e44(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x48U), ((var_r31 == 0) == 0))) {
        fn_033a5e34(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x44))) = &data_102ba1a8;
    }
    return var_r31;
}
