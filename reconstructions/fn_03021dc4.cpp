extern "C" void fn_03021a40(void*, void*, void*);
extern "C" void fn_03a3fd18(void *);

extern "C" void fn_03021dc4(void *arg0) {
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x1B68)));
    if (temp_r4 != (void *)-1) {
        fn_03021a40(arg0, temp_r4, 0);
        fn_03a3fd18(arg0);
    }
}
