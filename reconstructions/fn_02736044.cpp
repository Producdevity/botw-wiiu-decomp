extern "C" void fn_0355fa20(void*, void*);
extern "C" char* data_1047c390;

extern "C" void fn_02736044(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x1F4)));
    if (temp_r4 != 0) {
        temp_r11 = (*(void **)((char *)(data_1047c390) + (0x1C)));
        if (temp_r11 != 0) {
            temp_r3 = (*(void **)((char *)(temp_r11) + (4)));
            if (temp_r3 != 0) {
                fn_0355fa20(temp_r3, temp_r4);
            }
        }
    }
    (*(void **)((char *)(arg0) + (0x1F4))) = 0;
}
