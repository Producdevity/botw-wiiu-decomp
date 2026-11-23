typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a28fc4(void*, void*, void*, void*);

extern "C" s32 data_102351f8;

extern "C" s32 **fn_02f878cc(s32 **arg0, void *arg1, void *arg2, void *arg3) {
    s32 **var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (s32 **)(fn_0308e578(0x10U)), ((var_r31 == 0) == 0))) {
        fn_03a28fc4(var_r31, arg1, arg2, arg3);
        *var_r31 = &data_102351f8;
    }
    return var_r31;
}
