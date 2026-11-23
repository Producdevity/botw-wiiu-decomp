typedef int s32;
typedef float f32;

extern "C" f32 data_102412b8;

extern "C" void fn_02fb2e00(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    void* const* vt3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x2280)));
    ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(temp_r3) + (0x10)))[13])(temp_r3, 1);
    if ((s32) (*(s32 *)((char *)(arg0) + (0x228C))) != 0) {
        temp_r3_2 = (*(void **)((char *)(arg0) + (0x2284)));
        ((s32 (*)(void *))(vt2 = *(void* const**)((char *)(temp_r3_2) + (0x14)))[49])(temp_r3_2);
        temp_r3_3 = (*(void **)((char *)(arg0) + (0x2288)));
        ((s32 (*)(void *, f32))(vt3 = *(void* const**)((char *)(temp_r3_3) + (0x14)))[43])(temp_r3_3, data_102412b8);
        (*(s32 *)((char *)(arg0) + (0x228C))) = 0;
    }
    (*(s32 *)((char *)(arg0) + (0x22BC))) = -1;
    (*(s32 *)((char *)(arg0) + (0x229C))) = -1;
}
