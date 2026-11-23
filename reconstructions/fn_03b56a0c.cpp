extern "C" void fn_03b5b6b8(void*, void*);
extern "C" void fn_03b65500(void*);

extern "C" void fn_03b56a0c(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x174)));
    if (temp_r3 != 0) {
        fn_03b5b6b8(temp_r3, 0);
        (*(void **)((char *)(arg0) + (0x174))) = 0;
    }
    fn_03b65500((char *)arg0 + 0x2C0);
    fn_03b65500((char *)arg0 + 0x31C);
}
