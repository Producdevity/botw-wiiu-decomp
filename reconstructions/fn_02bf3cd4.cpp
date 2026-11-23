typedef int s32;
typedef float f32;

extern "C" int fn_02c0378c(void*, void*);

extern "C" void fn_02bf3cd4(void *arg0, void *arg1) {
    s32 temp_r3;

    temp_r3 = fn_02c0378c((char *)arg0 + 0x10, arg1);
    if (temp_r3 != 0) {
        (*(f32 *)((char *)(arg0) + (0xD8))) = (f32) (((*(f32 *)((char *)(temp_r3) + (0x574))) - (*(f32 *)((char *)(arg0) + (0xD4)))) - (*(f32 *)((char *)(arg0) + (0x1D8))));
    }
}
