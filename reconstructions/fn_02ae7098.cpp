typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern "C" void* fn_02c1974c(void *, int);

extern "C" void *fn_02ae7098(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    u32 temp_r11;
    void *temp_r3;
    void *temp_r3_2;

    temp_r11 = (*(u32 *)((char *)(arg0) + (0x40)));
    switch (temp_r11) {
    case 2:
        temp_r4 = (*(s32 *)((char *)(arg0) + (0x50)));
        if (temp_r4 >= 0) {
            temp_r3 = fn_02c1974c((*(void **)((char *)(arg0) + (8))), temp_r4);
            if (temp_r3 != 0) {
                return (char *)temp_r3 + 0x28;
            }
        }
block_10:
        return 0;
    case 6:
        if (((u16) (*(u16 *)((char *)(arg0) + (0x18E))) >> 8U) & 1) {
            temp_r4_2 = (*(s32 *)((char *)(arg0) + (0x6C)));
            if (temp_r4_2 >= 0) {
                temp_r3_2 = fn_02c1974c((*(void **)((char *)(arg0) + (8))), temp_r4_2);
                if (temp_r3_2 != 0) {
                    return (char *)temp_r3_2 + 0x28;
                }
            }
        }
        goto block_10;
    default:
        return 0;
    }
}
