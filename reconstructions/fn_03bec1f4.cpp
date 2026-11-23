typedef int s32;
typedef float f32;

extern "C" void* fn_0308e578(unsigned);
extern "C" float data_103d0438;

extern "C" s32 data_103d0428;

extern "C" void fn_03bec1f4(void *arg0) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(8U), ((var_r3 == 0) == 0))) {
        (*(s32 **)((char *)(var_r3) + (4))) = &data_103d0428;
        (*(f32 *)((char *)(var_r3) + (0))) = (f32) data_103d0438;
    }
}
