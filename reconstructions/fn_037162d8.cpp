typedef int s32;
typedef float f32;

extern "C" int fn_03715d24(void);

extern "C" f32 data_1030afec;

extern "C" f32 fn_037162d8(void) {
    s32 temp_r3;

    temp_r3 = fn_03715d24();
    if (temp_r3 == 0) {
        return data_1030afec;
    }
    return (*(f32 *)((char *)(temp_r3) + (4)));
}
