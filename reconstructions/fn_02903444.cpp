extern "C" void fn_0290315c(void*);
extern "C" void fn_03458474(void*);
extern "C" void fn_03485f68(void*);

extern "C" void fn_02903444(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x30)));
    if (temp_r3 != 0) {
        fn_03458474(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x34)));
    if (temp_r3_2 != 0) {
        fn_03485f68(temp_r3_2);
    }
    temp_r3_3 = (*(void **)((char *)(arg0) + (0x38)));
    if (temp_r3_3 != 0) {
        fn_03485f68(temp_r3_3);
    }
    fn_0290315c(arg0);
}
