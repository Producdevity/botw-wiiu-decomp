typedef int s32;
typedef float f32;

extern "C" void* fn_02c0378c(void* holder);

extern "C" void fn_02bd55c8(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = fn_02c0378c((char *)arg0 + 0x10);
    if (temp_r3 != 0) {
        (*(f32 *)((char *)(arg0) + (0x28))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x798)));
        (*(f32 *)((char *)(arg0) + (0x2C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x7A8)));
        (*(f32 *)((char *)(arg0) + (0x30))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x7B8)));
    }
}
