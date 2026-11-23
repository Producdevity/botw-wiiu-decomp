extern "C" void fn_03479bc8(void*, void*);

extern "C" void *data_1046fe50;

extern "C" void fn_029a0a30(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x70)));
    if (temp_r4 != 0) {
        fn_03479bc8(data_1046fe50, temp_r4);
        (*(void **)((char *)(arg0) + (0x70))) = 0;
    }
}
