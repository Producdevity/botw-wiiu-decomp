extern "C" void fn_0389ffe8(void*, int);

extern "C" void fn_0379ccf0(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x44C)));
    if (temp_r3 != 0) {
        fn_0389ffe8(temp_r3, 3);
        (*(void **)((char *)(arg0) + (0x44C))) = 0;
    }
}
