typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void* fn_02c0378c(void* holder);
extern "C" int fn_02c10888(void*);
extern "C" bool fn_02c10cd8(void *, unsigned);

extern "C" f32 data_101bbd7c;

extern "C" void fn_02be672c(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r31;

    (*(f32 *)((char *)(arg0) + (0x58))) = (f32) data_101bbd7c;
    temp_r3 = fn_02c0378c((char *)arg0 + 0x10);
    if (temp_r3 != 0) {
        temp_r31 = (void *)((char *)temp_r3 + 0x550);
        if (((s32) (*(u8 *)((char *)(arg0) + (0x1C2))) == 2) && (fn_02c10cd8((char *)temp_r31 + 0x773, 1U) != 0) && (fn_02c10888(temp_r31) != 0)) {
            (*(f32 *)((char *)(arg0) + (0x58))) = (f32) (*(f32 *)((char *)(temp_r31) + (0x748)));
        }
    }
}
