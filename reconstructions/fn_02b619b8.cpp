typedef int s32;
typedef float f32;

extern "C" void fn_02b614e0(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" f32 data_101afcb0;

extern "C" void *fn_02b619b8(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x10U), ((var_r31 == 0) == 0))) {
        fn_02b614e0(var_r31);
        (*(s32 *)((char *)(var_r31) + (0xC))) = 0;
        (*(f32 *)((char *)(var_r31) + (8))) = (f32) data_101afcb0;
    }
    return var_r31;
}
