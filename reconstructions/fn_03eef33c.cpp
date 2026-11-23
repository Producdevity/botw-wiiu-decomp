typedef signed char s8;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_03eef33c(s8 *arg0, s8 arg1) {
    s8 *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = (s8 *)(fn_0308e578(1U)), ((var_r3 == 0) == 0))) {
        *var_r3 = arg1;
    }
}
