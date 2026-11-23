typedef unsigned int u32;

extern "C" void fn_0313d928(void*, void*, void*);

extern "C" void fn_031374a8(void *arg0, u32 arg1) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x28)));
    if (temp_r3 != 0) {
        fn_0313d928(temp_r3, arg0, (void *) arg1);
        (*(void **)((char *)(arg0) + (0x28))) = 0;
    }
}
