typedef int s32;

extern "C" void fn_034c44a4(void*, int);
extern "C" void* data_10463748;

extern "C" void fn_0290315c(void *arg0) {
    void *temp_r11;
    void *temp_r3;

    if ((void *) data_10463748 != 0) {
        temp_r11 = (*(void **)((char *)(arg0) + (0)));
        if (temp_r11 != 0) {
            temp_r3 = (*(void **)((char *)(temp_r11) + (0x3A0)));
            if (temp_r3 != 0) {
                fn_034c44a4(temp_r3, 0);
            }
        }
        (*(s32 *)((char *)(arg0) + (0x28))) = 0;
    }
}
