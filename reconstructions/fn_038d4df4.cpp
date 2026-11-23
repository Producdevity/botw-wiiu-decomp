typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030b70fc(void*);

extern "C" s32 data_10332eec;

extern "C" s32 **fn_038d4df4(s32 **arg0) {
    s32 **var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (s32 **)(fn_0308e578(0x14U)), ((var_r31 == 0) == 0))) {
        fn_030b70fc(var_r31);
        *var_r31 = &data_10332eec;
    }
    return var_r31;
}
