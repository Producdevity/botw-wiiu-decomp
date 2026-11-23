extern "C" void fn_0256681c(void*);
extern "C" void fn_02566884(void*);
extern "C" int fn_0339a0d0(void *);
extern "C" void fn_0339bd58(void *);
extern "C" int fn_0379a9ac(void*);

extern "C" void fn_025668ec(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    fn_0339bd58(temp_r31);
    if ((fn_0379a9ac(temp_r31) != 0) || (fn_0339a0d0(temp_r31) != 0)) {
        fn_0256681c(arg0);
        return;
    }
    fn_02566884(arg0);
}
