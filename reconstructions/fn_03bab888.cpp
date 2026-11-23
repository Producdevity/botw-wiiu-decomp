typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03bab818(void);

extern "C" s32 data_103c895c;

extern "C" void fn_03bab888(void *arg0) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(0x3CU), ((var_r3 == 0) == 0))) {
        (*(s32 **)((char *)(var_r3) + (0x38))) = &data_103c895c;
        fn_03bab818();
    }
}
