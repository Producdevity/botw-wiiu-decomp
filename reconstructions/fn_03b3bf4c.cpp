extern "C" void fn_03ac4e2c(void*, void*);

extern "C" void *data_1047eb9c;

extern "C" void fn_03b3bf4c(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x20)));
    if (temp_r4 != 0) {
        fn_03ac4e2c(data_1047eb9c, temp_r4);
        (*(void **)((char *)(arg0) + (0x20))) = 0;
    }
}
