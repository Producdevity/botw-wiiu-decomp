typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_040f4c2c(s32 *arg0, s32 arg1) {
    s32 *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = (s32 *)(fn_0308e578(4U)), ((var_r3 == 0) == 0))) {
        *var_r3 = arg1;
    }
}
