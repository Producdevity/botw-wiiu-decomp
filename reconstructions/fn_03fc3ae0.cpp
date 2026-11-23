typedef int s32;
typedef float f32;

extern "C" void* fn_0308e578(unsigned);

extern "C" f32 data_103ffd74;

extern "C" void fn_03fc3ae0(void *arg0, s32 arg1) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(8U), ((var_r3 == 0) == 0))) {
        (*(s32 *)((char *)(var_r3) + (0))) = arg1;
        (*(f32 *)((char *)(var_r3) + (4))) = (f32) data_103ffd74;
    }
}
