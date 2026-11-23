typedef signed char s8;
typedef unsigned char u8;
typedef float f32;

extern "C" void* fn_037966a8(void *);

extern "C" void fn_021e2ca0(void *arg0) {
    void *temp_r3;

    (*(s8 *)((char *)(arg0) + (0x38))) = 0;
    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        (*(f32 *)((char *)(arg0) + (0x34))) = (f32) (*(f32 *)((char *)(temp_r3) + (0xE0)));
    }
    (*(u8 *)((char *)(arg0) + (0xB))) = (u8) ((*(u8 *)((char *)(arg0) + (0xB))) | 4);
}
