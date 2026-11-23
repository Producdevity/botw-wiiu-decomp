extern "C" void fn_02915ea8(void*);
extern "C" void fn_02915ec4(void*);
extern "C" int fn_0339a0d0(void *);
extern "C" int fn_0339a0d8(void*);
extern "C" int fn_0339a0e0(void *);

extern "C" void fn_02915ee0(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    if ((fn_0339a0d8(temp_r31) != 0) || ((fn_0339a0e0(temp_r31) != 0) && (fn_0339a0d0(temp_r31) != 0))) {
        fn_02915ea8(arg0);
        return;
    }
    fn_02915ec4(arg0);
}
