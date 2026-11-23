typedef unsigned char u8;
typedef int s32;

extern "C" void fn_029bcac0(void *arg0) {
    s32 *temp_r11;

    if (((s32) *(*(u8 **)((char *)(arg0) + (0x24))) != 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x5C))) >= 2)) {
        (*(s32 *)((char *)(arg0) + (0x5C))) = 5;
    }
    if (((s32) (*(u8 *)((char *)(arg0) + (0x60))) != 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x5C))) <= 4)) {
        temp_r11 = (*(s32 **)((char *)(arg0) + (0x48)));
        *temp_r11 -= 1;
        (*(u8 *)((char *)(arg0) + (0x60))) = 0U;
    }
}
