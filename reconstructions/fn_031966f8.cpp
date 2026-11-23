extern "C" void fn_031925fc(void*, int);

extern "C" void fn_031966f8(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1BC)));
    if (temp_r3 != 0) {
        fn_031925fc(temp_r3, 1);
        (*(void **)((char *)(arg0) + (0x1BC))) = 0;
    }
}
