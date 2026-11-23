typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_037e5ec0(void*);

extern "C" s32 data_1033b104;

extern "C" s32 **fn_03932d08(s32 **arg0) {
    s32 **var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (s32 **)(fn_0308e578(0x44U)), ((var_r31 == 0) == 0))) {
        *var_r31 = &data_1033b104;
        fn_037e5ec0((char *)var_r31 + 0x14);
    }
    return var_r31;
}
