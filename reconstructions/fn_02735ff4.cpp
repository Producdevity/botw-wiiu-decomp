typedef int s32;

extern "C" int fn_0355f8d8(void*);
extern "C" char* data_1047c390;

extern "C" void fn_02735ff4(void *arg0) {
    void *temp_r11;
    void *temp_r3;

    temp_r11 = (*(void **)((char *)(data_1047c390) + (0x1C)));
    if (temp_r11 != 0) {
        temp_r3 = (*(void **)((char *)(temp_r11) + (4)));
        if (temp_r3 != 0) {
            (*(s32 *)((char *)(arg0) + (0x1F4))) = fn_0355f8d8(temp_r3);
        }
    }
}
