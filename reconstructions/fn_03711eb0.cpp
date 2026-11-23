extern "C" void fn_0398a8b0(void*, int);

extern "C" void fn_03711eb0(void *arg0) {
    void *temp_r12;
    void *temp_r31;

    temp_r12 = (*(void **)((char *)(arg0) + (4)));
    if (temp_r12 != 0) {
        temp_r31 = (*(void **)((char *)(temp_r12) + (0xA4)));
        if (temp_r31 != 0) {
            fn_0398a8b0(temp_r31, 1);
            (*(void **)((char *)(temp_r31) + (0x54))) = arg0;
        }
    }
}
