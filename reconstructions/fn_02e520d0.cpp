typedef signed char s8;

extern "C" void fn_0378a540(void*, void*);

extern "C" void fn_02e520d0(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x125C)));
    if (temp_r3 != 0) {
        fn_0378a540(temp_r3, 0);
    }
    (*(s8 *)((char *)(arg0) + (0x1448))) = 1;
}
