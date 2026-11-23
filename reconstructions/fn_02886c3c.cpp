extern "C" void fn_0249901c(void *, void *);
extern "C" void fn_02885a2c(void*);
extern "C" void* fn_0294f338(void *);
extern "C" void fn_0378da14(void*, void*);

extern "C" void fn_02886c3c(void **arg0, void *arg1) {
    void *temp_r3;

    fn_0378da14((char *)arg0 + 0x68, arg1);
    fn_02885a2c(arg0);
    temp_r3 = fn_0294f338(*arg0);
    if (temp_r3 != 0) {
        fn_0249901c(temp_r3, (void *)4);
    }
}
