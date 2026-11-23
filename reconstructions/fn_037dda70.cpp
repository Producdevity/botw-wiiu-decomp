typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_037e5ec0(void*);

extern "C" s32 data_1031e554;

extern "C" void *fn_037dda70(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x30U), ((var_r31 == 0) == 0))) {
        fn_037e5ec0(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x2C))) = &data_1031e554;
    }
    return var_r31;
}
