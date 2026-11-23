typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_03fec044(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = (s32 *)(fn_0308e578(4U)), ((var_r3 == 0) == 0))) {
        *var_r3 = (*var_r3 & ~0xC0000000) | (((arg2 & ~0xFFFFFFFE) | (arg1 << 1)) << 0x1E);
    }
}
