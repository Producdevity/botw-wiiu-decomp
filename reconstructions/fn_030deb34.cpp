typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_04211384(void *, unsigned int);

extern "C" s32 *fn_030deb34(s32 *arg0) {
    s32 *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (s32 *)(fn_0308e578(0x40U)), ((var_r31 == 0) == 0))) {
        *var_r31 = 0;
        fn_04211384((char *)var_r31 + 4, 0x3CU);
    }
    return var_r31;
}
