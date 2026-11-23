extern "C" void fn_0378f91c(void*, void*);
extern "C" void* data_1047c244;

extern "C" void fn_03149288(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x6A8)));
    if (temp_r4 != 0) {
        fn_0378f91c(data_1047c244, temp_r4);
        (*(void **)((char *)(arg0) + (0x6A8))) = 0;
    }
}
