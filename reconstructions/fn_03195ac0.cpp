extern "C" void fn_031925fc(void*, int);

extern "C" void fn_03195ac0(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1AC)));
    if (temp_r3 != 0) {
        fn_031925fc(temp_r3, 1);
        (*(void **)((char *)(arg0) + (0x1AC))) = 0;
    }
}
