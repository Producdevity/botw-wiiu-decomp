typedef signed char s8;

extern "C" void fn_0378a24c(void*, void*);

extern "C" void fn_02e5208c(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x125C)));
    if (temp_r3 != 0) {
        fn_0378a24c(temp_r3, 0);
    }
    (*(s8 *)((char *)(arg0) + (0x1448))) = 0;
}
