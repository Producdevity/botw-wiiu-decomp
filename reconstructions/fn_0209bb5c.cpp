typedef int s32;
typedef float f32;

extern "C" const float data_10012ad8;

extern "C" f32 data_1001344c;

extern "C" void fn_0209bb5c(void *arg0, f32 farg0) {
    f32 temp_f12;

    temp_f12 = (*(f32 *)((char *)(arg0) + (0xA38)));
    if ((temp_f12 == data_10012ad8) && (farg0 > data_10012ad8)) {
        (*(s32 *)((char *)(arg0) + (0xC34))) = 1;
    } else if ((temp_f12 == data_1001344c) && (farg0 == data_10012ad8)) {
        (*(s32 *)((char *)(arg0) + (0xC34))) = 2;
    }
    (*(f32 *)((char *)(arg0) + (0xA38))) = farg0;
}
