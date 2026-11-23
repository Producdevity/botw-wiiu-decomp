extern "C" void fn_02f26f20(void*);

extern "C" void fn_0301ce60(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1B80)));
    if (temp_r3 != 0) {
        fn_02f26f20(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x1B84)));
    if (temp_r3_2 != 0) {
        fn_02f26f20(temp_r3_2);
    }
}
