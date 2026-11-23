typedef int s32;
typedef unsigned int u32;

extern "C" s32 fn_022e6334(void **arg0) {
    void* const* vt1;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *arg0;
    temp_r3_2 = ((void * (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[195])(temp_r3);
    if ((temp_r3_2 != 0) && (((u32) (*(u32 *)((char *)(temp_r3_2) + (8))) >> 6U) & 1)) {
        return 1;
    }
    return 0;
}
