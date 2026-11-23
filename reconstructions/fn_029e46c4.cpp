typedef float f32;

extern "C" void fn_029e46c4(void **arg0, void *arg1) {
    void *temp_r11;
    void *temp_r12;

    temp_r11 = *arg0;
    temp_r12 = (*(void **)((char *)(temp_r11) + (0x330)));
    if (temp_r12 == 0) {
        (*(f32 *)((char *)(arg1) + (0))) = (f32) (*(f32 *)((char *)(temp_r11) + (0x204)));
        (*(f32 *)((char *)(arg1) + (4))) = (f32) (*(f32 *)((char *)(temp_r11) + (0x214)));
        (*(f32 *)((char *)(arg1) + (8))) = (f32) (*(f32 *)((char *)(temp_r11) + (0x224)));
        return;
    }
    (*(f32 *)((char *)(arg1) + (0))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x40)));
    (*(f32 *)((char *)(arg1) + (4))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x50)));
    (*(f32 *)((char *)(arg1) + (8))) = (f32) (*(f32 *)((char *)(temp_r12) + (0x60)));
}
