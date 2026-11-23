typedef float f32;

extern "C" float fn_03c6fd44(void*, void*);

extern "C" void fn_026d6690(void *arg0) {
    struct { f32 f8; f32 fC; f32 f10; } sp;
    void *temp_r12;

    temp_r12 = (*(void **)((char *)(arg0) + (0)));
    sp.f8 = (*(f32 *)((char *)(temp_r12) + (0x204)));
    sp.fC = (*(f32 *)((char *)(temp_r12) + (0x214)));
    sp.f10 = (*(f32 *)((char *)(temp_r12) + (0x224)));
    fn_03c6fd44(&sp.f8, (*(void **)((char *)(arg0) + (0x30))));
}
