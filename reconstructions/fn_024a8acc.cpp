extern "C" void fn_03485f68(void*);

extern "C" void fn_024a8acc(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x9A0)));
    if (temp_r3 != 0) {
        fn_03485f68(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x9A4)));
    if (temp_r3_2 != 0) {
        fn_03485f68(temp_r3_2);
    }
    temp_r3_3 = (*(void **)((char *)(arg0) + (0x9A8)));
    if (temp_r3_3 != 0) {
        fn_03485f68(temp_r3_3);
    }
}
