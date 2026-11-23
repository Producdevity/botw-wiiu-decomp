typedef int s32;

extern "C" void fn_02e7ace8(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_10251a8c;

extern "C" void *fn_03013d94(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x330U), ((var_r31 == 0) == 0))) {
        fn_02e7ace8(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x10))) = &data_10251a8c;
    }
    return var_r31;
}
