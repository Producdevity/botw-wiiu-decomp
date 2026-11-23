extern "C" void fn_03138640(void*, void*);
extern "C" void fn_0378a70c(void*, void*);

extern "C" void fn_03121400(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x140)));
    if (temp_r3 != 0) {
        fn_03138640(temp_r3, arg0);
    }
    fn_0378a70c(arg0, arg1);
}
