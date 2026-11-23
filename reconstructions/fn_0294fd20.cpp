typedef int s32;
typedef float f32;

extern "C" int fn_0294fbc0(void);

extern "C" f32 data_1016d398;

extern "C" f32 fn_0294fd20(void) {
    void* const* vt1;
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3_2 = fn_0294fbc0();
    if (temp_r3_2 != 0) {
        temp_r3 = ((void * (*)())(vt1 = *(void* const**)((char *)(temp_r3_2) + (0xE8)))[195])();
        if (temp_r3 != 0) {
            return (*(f32 *)((char *)(temp_r3) + (0x180)));
        }
    }
    return data_1016d398;
}
