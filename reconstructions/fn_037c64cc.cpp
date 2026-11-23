extern "C" void fn_033d01b4(void*, void*, int);
extern "C" void fn_037bf378(void*, void*, int);

extern "C" void *data_1046e110;

extern "C" void fn_037c64cc(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0x63C)));
    if (temp_r3 != 0) {
        fn_037bf378(temp_r3, arg0, 1);
    }
    temp_r3_2 = (*(void **)((char *)(data_1046e110) + (0x24)));
    if (temp_r3_2 != 0) {
        fn_033d01b4(temp_r3_2, arg0, 1);
    }
}
