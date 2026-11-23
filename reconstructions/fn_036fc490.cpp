typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

extern "C" char* data_1047bf14;

extern "C" s32 fn_036fc490(void *arg0) {
    void *temp_r12;

    if (((s32) (((*(s32 *)((char *)(arg0) + (4))) & 1) ^ 1) != 0) || (((s8 *) data_1047bf14 != 0) && (temp_r12 = (*(void **)((char *)(data_1047bf14) + (0x940))), ((temp_r12 == 0) == 0)) && (((u32) (*(u32 *)((char *)(temp_r12) + (0xC))) >> 3U) & 1))) {
        return 0;
    }
    return 1;
}
