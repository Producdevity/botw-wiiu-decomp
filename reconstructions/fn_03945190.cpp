typedef int s32;
typedef float f32;

extern "C" f32 data_1033f4a8;
extern "C" f32 data_1033f4ac;

extern "C" f32 fn_03945190(void *arg0, s32 arg1, f32 farg0) {
    f32 temp_f8;
    f32 temp_f9;

    if (arg1 != 0) {
        temp_f9 = (*(f32 *)((char *)(arg0) + (0x1C)));
        if (!(temp_f9 < data_1033f4a8)) {
            return (farg0 * temp_f9) + ((data_1033f4ac - farg0) * (*(f32 *)((char *)(arg0) + (0x10))));
        }
    }
    temp_f8 = (*(f32 *)((char *)(arg0) + (0x10)));
    return (farg0 * ((*(f32 *)((char *)(arg0) + (0x14))) - temp_f8)) + temp_f8;
}
