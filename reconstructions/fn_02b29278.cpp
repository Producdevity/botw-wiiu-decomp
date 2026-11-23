typedef unsigned short u16;
typedef int s32;

extern "C" s32 fn_02b29278(void **arg0) {
    void* const* vt1;
    s32 var_r0;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *arg0;
    temp_r3_2 = ((void * (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[261])(temp_r3);
    var_r0 = 0;
    if (temp_r3_2 != 0) {
        var_r0 = (*(u16 *)((char *)(temp_r3_2) + (0x18))) & 1;
    }
    return var_r0;
}
