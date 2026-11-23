typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030cb670(void*);

extern "C" s32 data_1031e048;

extern "C" s32 **fn_037d9990(s32 **arg0) {
    s32 **var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (s32 **)(fn_0308e578(0x78U)), ((var_r31 == 0) == 0))) {
        fn_030cb670(var_r31);
        *var_r31 = &data_1031e048;
    }
    return var_r31;
}
