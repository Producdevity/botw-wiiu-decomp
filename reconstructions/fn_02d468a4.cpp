typedef int s32;

extern "C" void fn_02d4618c(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101e4370;

extern "C" s32 **fn_02d468a4(s32 **arg0) {
    s32 **var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (s32 **)(fn_0308e578(4U)), ((var_r31 == 0) == 0))) {
        fn_02d4618c(var_r31);
        *var_r31 = &data_101e4370;
    }
    return var_r31;
}
