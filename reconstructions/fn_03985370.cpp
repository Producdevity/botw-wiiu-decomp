extern "C" void fn_03989930(void*);
extern "C" void fn_0398b244(void*);

extern "C" void fn_03985370(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xA4)));
    if (temp_r3 != 0) {
        fn_0398b244(temp_r3);
        fn_03989930((*(void **)((char *)(arg0) + (0xA4))));
        (*(void **)((char *)(arg0) + (0xA4))) = 0;
    }
}
