typedef float f32;

extern "C" void fn_03191d34(void*, float);

extern "C" void fn_026ab86c(void *arg0) {
    struct { f32 f8; f32 fC; f32 f10; } sp;
    void *temp_r12;

    temp_r12 = (*(void **)((char *)(arg0) + (0)));
    sp.f8 = (*(f32 *)((char *)(temp_r12) + (0x204)));
    sp.fC = (*(f32 *)((char *)(temp_r12) + (0x214)));
    sp.f10 = (*(f32 *)((char *)(temp_r12) + (0x224)));
    fn_03191d34(&sp.f8, *(*(f32 **)((char *)(arg0) + (0x2C))));
}
