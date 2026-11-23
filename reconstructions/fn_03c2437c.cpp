typedef int s32;

extern "C" void fn_03c1e728(void*);
extern "C" void fn_03c1e9b0(void*);

extern "C" void fn_03c2437c(void *arg0) {
    s32 (*temp_r11)(void *, s32, s32);
    void *temp_r29;
    void *temp_r30;

    if ((s32) (*(s32 *)((char *)(arg0) + (4))) != 0) {
        do {
            temp_r30 = (*(void **)((char *)(arg0) + (8)));
            temp_r29 = (char *)temp_r30 - 0x4D4;
            fn_03c1e728(temp_r29);
            temp_r11 = (*(s32 (**)(void *, s32, s32))((char *)(temp_r30) + (-0x168)));
            if (temp_r11 != 0) {
                temp_r11(temp_r29, 1, (*(s32 *)((char *)(temp_r29) + (0x370))));
            }
            fn_03c1e9b0(temp_r29);
        } while ((s32) (*(s32 *)((char *)(arg0) + (4))) != 0);
    }
}
