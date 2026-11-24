typedef int s32;
typedef float f32;

extern "C" void* fn_02c0378c(void* holder);

extern "C" void fn_02bb94fc(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = fn_02c0378c((char *)arg0 + 0x10);
    if (temp_r3 != 0) {
        (*(f32 *)((char *)(arg0) + (0x108))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x550)));
        (*(f32 *)((char *)(arg0) + (0x10C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x554)));
        (*(f32 *)((char *)(arg0) + (0x110))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x558)));
        (*(f32 *)((char *)(arg0) + (0x114))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x55C)));
        (*(f32 *)((char *)(arg0) + (0x118))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x560)));
        (*(f32 *)((char *)(arg0) + (0x11C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x564)));
        (*(f32 *)((char *)(arg0) + (0x120))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x568)));
        (*(f32 *)((char *)(arg0) + (0x124))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x56C)));
        (*(f32 *)((char *)(arg0) + (0x128))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x570)));
        (*(f32 *)((char *)(arg0) + (0x12C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x574)));
        (*(f32 *)((char *)(arg0) + (0x130))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x578)));
        (*(f32 *)((char *)(arg0) + (0x134))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x57C)));
        (*(f32 *)((char *)(arg0) + (0x138))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x580)));
        (*(f32 *)((char *)(arg0) + (0x13C))) = (f32) (*(f32 *)((char *)(temp_r3) + (0x584)));
    }
}
