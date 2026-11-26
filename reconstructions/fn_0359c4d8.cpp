typedef int s32;
typedef float f32;

extern "C" void* fn_03bb14c0();

extern "C" f32 data_102e8934;

extern "C" f32 fn_0359c4d8(void *arg0) {
    void *temp_r3;

    temp_r3 = fn_03bb14c0();
    if (temp_r3 == 0) {
        return data_102e8934;
    }
    return (*(f32 *)((char *)(temp_r3) + (0x20)));
}
