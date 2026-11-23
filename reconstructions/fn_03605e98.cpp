typedef int s32;

extern "C" int fn_03605df8(void);

extern "C" s32 fn_03605e98(void) {
    s32 temp_r3;

    temp_r3 = fn_03605df8();
    if ((temp_r3 != 0) && ((*(s32 *)((char *)(temp_r3) + (0xC))) & 1)) {
        return 1;
    }
    return 0;
}
