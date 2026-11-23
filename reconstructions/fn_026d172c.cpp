typedef int s32;
typedef float f32;

extern "C" int fn_029fc3b4(void*, void*, int);
extern "C" int fn_02b62a40(void);
extern "C" void * data_10463578;

extern "C" s32 fn_026d172c(void **arg0) {
    struct { f32 f8; f32 fC; f32 f10; } sp;
    void *temp_r12;
    void *temp_r31;

    temp_r12 = *arg0;
    sp.f8 = (*(f32 *)((char *)(temp_r12) + (0x204)));
    temp_r31 = data_10463578;
    sp.fC = (*(f32 *)((char *)(temp_r12) + (0x214)));
    sp.f10 = (*(f32 *)((char *)(temp_r12) + (0x224)));
    if ((temp_r31 != 0) && ((fn_029fc3b4(temp_r31, &sp.f8, 1) != 0) || (fn_029fc3b4(temp_r31, (void *)(fn_02b62a40()), 1) != 0))) {
        return 1;
    }
    return 0;
}
