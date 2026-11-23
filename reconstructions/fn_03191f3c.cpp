typedef int s32;
typedef float f32;

extern "C" int fn_03191b70(void *);
extern "C" void * data_1046cf88;
extern "C" const unsigned char data_10549dd0[];

extern "C" s32 fn_03191f3c(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_03191b70(data_1046cf88);
    if (temp_r3 == 0) {
        (*(f32 *)((char *)(arg0) + (0))) = (f32) (*(f32 *)((char *)(data_10549dd0) + (0)));
        (*(f32 *)((char *)(arg0) + (4))) = (f32) (*(f32 *)((char *)(data_10549dd0) + (4)));
        (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(data_10549dd0) + (8)));
        return 0;
    }
    (*(f32 *)((char *)(arg0) + (0))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x40)));
    (*(f32 *)((char *)(arg0) + (4))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x44)));
    (*(f32 *)((char *)(arg0) + (8))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x48)));
    return 1;
}
