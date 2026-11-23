typedef signed char s8;
typedef int s32;
typedef float f32;

extern "C" void fn_02950880(int);
extern "C" void* fn_02b757a8(int);

extern "C" void fn_0288dfec(void *arg0) {
    void *temp_r3;

    (*(s8 *)((char *)(arg0) + (0x34))) = 0;
    fn_02950880((*(s32 *)((char *)(arg0) + (0))));
    temp_r3 = fn_02b757a8((*(s32 *)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        (*(f32 *)((char *)(temp_r3) + (0x70))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x6C)));
    }
}
