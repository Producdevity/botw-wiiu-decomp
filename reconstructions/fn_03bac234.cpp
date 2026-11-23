extern "C" void fn_03bc2170(void*, void*);

extern "C" void fn_03bac234(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xCC)));
    if (temp_r3 != 0) {
        fn_03bc2170(temp_r3, arg0);
        (*(void **)((char *)(arg0) + (0xCC))) = 0;
    }
}
