extern "C" void fn_0371f8c8(void*, void*);

extern "C" void *data_1047c184;

extern "C" void fn_0342c74c(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x94C)));
    if (temp_r4 != 0) {
        fn_0371f8c8(data_1047c184, temp_r4);
        (*(void **)((char *)(arg0) + (0x94C))) = 0;
    }
}
