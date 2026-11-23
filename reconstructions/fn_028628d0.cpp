extern "C" void fn_028628a0(void*);
extern "C" void fn_028628b0(void*);
extern "C" void fn_028628c0(void*);
extern "C" int fn_0339a0d0(void *);
extern "C" int fn_0339a0e0(void *);
extern "C" int fn_0379a9ac(void*);

extern "C" void fn_028628d0(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    if (fn_0379a9ac(temp_r31) != 0) {
        fn_028628a0(arg0);
        return;
    }
    if ((fn_0339a0e0(temp_r31) != 0) && (fn_0339a0d0(temp_r31) == 0)) {
        fn_028628c0(arg0);
        return;
    }
    fn_028628b0(arg0);
}
