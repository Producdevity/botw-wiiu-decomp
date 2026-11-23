typedef int s32;
typedef float f32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0308f754(void*);

extern "C" f32 data_1031cce0;
extern "C" s32 data_1031cd18;

extern "C" void *fn_037d2464(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x10U), ((var_r31 == 0) == 0))) {
        fn_0308f754(var_r31);
        (*(s32 **)((char *)(var_r31) + (0))) = &data_1031cd18;
        (*(f32 *)((char *)(var_r31) + (0xC))) = (f32) data_1031cce0;
    }
    return var_r31;
}
