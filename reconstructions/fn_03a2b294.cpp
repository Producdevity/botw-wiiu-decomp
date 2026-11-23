typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a26258(void*);
extern "C" void fn_03a2706c(void*, void*, void*, void*);

extern "C" s32 data_1035baf0;

extern "C" void *fn_03a2b294(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x3CU), ((var_r31 == 0) == 0))) {
        fn_03a26258(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x10))) = &data_1035baf0;
        fn_03a2706c(var_r31, arg1, arg2, arg3);
    }
    return var_r31;
}
