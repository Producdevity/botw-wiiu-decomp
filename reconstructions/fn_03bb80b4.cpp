typedef signed char s8;

extern "C" void fn_03bb4e28(void*, void*);

extern "C" void fn_03bb80b4(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xF8)));
    if (temp_r3 != 0) {
        fn_03bb4e28(temp_r3, (char *)arg0 + 8);
    }
    (*(s8 *)((char *)(arg0) + (0x1D))) = 0;
}
