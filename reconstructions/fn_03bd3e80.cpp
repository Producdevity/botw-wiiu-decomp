extern "C" void fn_03bd2084(void*, void*);

extern "C" void *data_1047f0bc;

extern "C" void fn_03bd3e80(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x2C)));
    if (temp_r4 != 0) {
        fn_03bd2084(data_1047f0bc, temp_r4);
        (*(void **)((char *)(arg0) + (0x2C))) = 0;
    }
}
