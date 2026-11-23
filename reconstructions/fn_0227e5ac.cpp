extern "C" void fn_02195824(void*);
extern "C" void fn_03177734(void*, void*);

extern "C" void fn_0227e5ac(void **arg0) {
    void *temp_r3;

    fn_02195824(arg0);
    temp_r3 = (*(void **)((char *)(*arg0) + (0x388)));
    if (temp_r3 != 0) {
        fn_03177734(temp_r3, (char *)arg0 + 0x98);
    }
}
