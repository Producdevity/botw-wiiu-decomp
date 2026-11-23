typedef int s32;
typedef float f32;

extern "C" int fn_02c0378c(void *, void *);

extern "C" s32 fn_02bd8a30(void *arg0, void *arg1) {
    s32 temp_r3;

    temp_r3 = fn_02c0378c((char *)arg0 + 0x10, arg1);
    if (temp_r3 == 0) {
        return 0;
    }
    (*(f32 *)((char *)(arg0) + (0x40))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9E8)));
    (*(f32 *)((char *)(arg0) + (0x44))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9EC)));
    (*(f32 *)((char *)(arg0) + (0x48))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9F0)));
    (*(f32 *)((char *)(arg0) + (0x4C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9E8)));
    (*(f32 *)((char *)(arg0) + (0x50))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9EC)));
    (*(f32 *)((char *)(arg0) + (0x54))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9F0)));
    (*(f32 *)((char *)(arg0) + (0x58))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9E8)));
    (*(f32 *)((char *)(arg0) + (0x5C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9EC)));
    (*(f32 *)((char *)(arg0) + (0x60))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x9F0)));
    return 1;
}
