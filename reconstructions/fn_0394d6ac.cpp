typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0394d0e0(void*);

extern "C" s32 data_10340350;

extern "C" void *fn_0394d6ac(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xBCU), ((var_r31 == 0) == 0))) {
        fn_0394d0e0(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x18))) = &data_10340350;
    }
    return var_r31;
}
