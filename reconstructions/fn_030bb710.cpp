typedef int s32;

extern "C" void* fn_0308e578(unsigned);
struct Disposer;
extern "C" Disposer* fn_030a59d4(Disposer *, void *, int);
extern "C" void fn_04211384(void *, unsigned int);
extern "C" void fn_0434c250(void *, const char *);

extern "C" s32 data_1027aba4;

extern "C" struct Disposer *fn_030bb710(struct Disposer *arg0, void *arg1, s32 arg2) {
    struct Disposer *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = (Disposer *)(fn_0308e578(0x3CU)), ((var_r31 == 0) == 0))) {
        fn_030a59d4(var_r31, arg1, arg2);
        (*(s32 **)((char *)(var_r31) + (0xC))) = &data_1027aba4;
        fn_04211384((char *)var_r31 + 0x10, 0x2CU);
        fn_0434c250((char *)var_r31 + 0x10, 0);
    }
    return var_r31;
}
