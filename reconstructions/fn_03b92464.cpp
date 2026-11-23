extern "C" void fn_03b92430(void*, void*);

extern "C" void fn_03b92464(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x6C)));
    if (temp_r4 != 0) {
        fn_03b92430(arg0, temp_r4);
        (*(void **)((char *)(arg0) + (0x6C))) = 0;
    }
}
