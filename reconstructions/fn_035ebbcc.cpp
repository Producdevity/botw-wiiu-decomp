typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a3c554(void*);

extern "C" s32 data_102f2a1c;

extern "C" void *fn_035ebbcc(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x14U), ((var_r31 == 0) == 0))) {
        fn_03a3c554(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x10))) = &data_102f2a1c;
    }
    return var_r31;
}
