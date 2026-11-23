typedef unsigned char u8;
typedef int s32;

extern "C" s32 fn_02035bf8(void **arg0) {
    void* const* vt1;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *arg0;
    temp_r3_2 = ((void * (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[195])(temp_r3);
    if ((temp_r3_2 != 0) && ((s32) (*(u8 *)((char *)(temp_r3_2) + (0x88))) == 2)) {
        return 1;
    }
    return 0;
}
