extern "C" void fn_0237de6c(void*);
extern "C" void fn_02b63234(void*, void*, int);
extern "C" void fn_0348799c(void *);

extern "C" void fn_0237c2b0(void **arg0) {
    void *temp_r31;
    void *temp_r3;

    fn_0237de6c(arg0);
    temp_r31 = *arg0;
    fn_02b63234(temp_r31, 0, 0);
    temp_r3 = (*(void **)((char *)(temp_r31) + (0xF4)));
    if (temp_r3 != 0) {
        fn_0348799c(temp_r3);
    }
}
