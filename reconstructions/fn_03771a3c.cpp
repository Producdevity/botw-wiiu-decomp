typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03acfe58(void*);

extern "C" s32 data_1030ef08;

extern "C" void *fn_03771a3c(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x10U), ((var_r31 == 0) == 0))) {
        fn_03acfe58(var_r31);
        (*(s32 **)((char *)(var_r31) + (8))) = &data_1030ef08;
    }
    return var_r31;
}
