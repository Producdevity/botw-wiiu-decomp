typedef unsigned int u32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030ca990(unsigned *, unsigned);

extern "C" void fn_030ca998(u32 *arg0, u32 arg1) {
    u32 *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = (u32 *)(fn_0308e578(4U)), ((var_r3 == 0) == 0))) {
        fn_030ca990(var_r3, arg1);
    }
}
