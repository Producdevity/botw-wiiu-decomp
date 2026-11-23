typedef int s32;
typedef float f32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0314e564(void*);

extern "C" f32 data_10286944;
extern "C" s32 data_10286bb8;

extern "C" void *fn_0314e720(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x58U), ((var_r31 == 0) == 0))) {
        fn_0314e564(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x4C))) = &data_10286bb8;
        (*(f32 *)((char *)(var_r31) + (0x54))) = (f32) data_10286944;
    }
    return var_r31;
}
