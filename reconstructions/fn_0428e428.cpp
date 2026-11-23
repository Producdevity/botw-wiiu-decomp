typedef signed char s8;
typedef int s32;

extern "C" void fn_0428e428(void *arg0) {
    s32 (*temp_r0)();
    s32 *temp_r11;

    temp_r0 = (*(s32 (**)())((char *)(arg0) + (8)));
    (*(s8 *)((char *)(arg0) + (0x15))) = 1;
    if (temp_r0 != 0) {
        temp_r0();
    }
    temp_r11 = (*(s32 **)((char *)(arg0) + (0xC)));
    if (temp_r11 != 0) {
        *temp_r11 = (*(s32 *)((char *)(arg0) + (0x10)));
    }
}
