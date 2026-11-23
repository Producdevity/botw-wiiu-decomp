extern "C" void fn_03479bd8(void*, void*);

extern "C" void *data_1046fe50;

extern "C" void fn_034666c4(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x294)));
    if (temp_r4 != 0) {
        fn_03479bd8(data_1046fe50, temp_r4);
        (*(void **)((char *)(arg0) + (0x294))) = 0;
    }
}
