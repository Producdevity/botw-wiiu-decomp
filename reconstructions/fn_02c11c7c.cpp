extern "C" void fn_02c156c4(void*);
extern "C" void fn_02c15cbc(void *);
extern "C" void fn_02c1c560(void *);

extern "C" void fn_02c11c7c(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r3 = (*(void **)((char *)(arg0) + (8)));
    if (temp_r3 != 0) {
        fn_02c1c560(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0xC)));
    if (temp_r3_2 != 0) {
        fn_02c15cbc(temp_r3_2);
    }
    temp_r3_3 = (*(void **)((char *)(arg0) + (0x10)));
    if (temp_r3_3 != 0) {
        fn_02c156c4(temp_r3_3);
    }
}
