extern "C" void fn_0355ef3c(void*);
extern "C" void fn_0359a918(void*);

extern "C" void fn_037dce28(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1C)));
    if (temp_r3 != 0) {
        fn_0355ef3c(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x20)));
    if (temp_r3_2 != 0) {
        fn_0359a918(temp_r3_2);
    }
}
