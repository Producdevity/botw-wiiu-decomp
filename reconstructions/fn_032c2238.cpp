typedef int s32;
typedef float f32;

extern "C" void fn_032c2130(void*);

extern "C" void fn_032c2238(void *arg0) {
    void *temp_r12;

    temp_r12 = (*(void **)((char *)(arg0) + (0)));
    (*(f32 *)((char *)(arg0) + (0x34))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x204)));
    (*(f32 *)((char *)(arg0) + (0x38))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x214)));
    (*(f32 *)((char *)(arg0) + (0x3C))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x224)));
    fn_032c2130(arg0);
    (*(s32 *)((char *)(arg0) + (0x4C))) = 0;
}
