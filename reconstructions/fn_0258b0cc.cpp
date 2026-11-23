typedef int s32;
typedef float f32;

extern "C" int fn_0258afd4(void);

extern "C" f32 data_100e6adc;

extern "C" f32 fn_0258b0cc(void) {
    s32 temp_r3;

    temp_r3 = fn_0258afd4();
    if (temp_r3 != 0) {
        return (*(f32 *)((char *)(temp_r3) + (0x4C)));
    }
    return data_100e6adc;
}
