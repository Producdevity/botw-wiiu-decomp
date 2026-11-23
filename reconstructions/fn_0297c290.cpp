extern "C" void fn_0297be28(void*);
extern "C" void fn_0339a080(void *);
extern "C" int fn_0339a0d0(void *);
extern "C" int fn_0339a0e0(void *);

extern "C" void fn_0297c290(void **arg0) {
    void *temp_r31;

    fn_0297be28(arg0);
    temp_r31 = *arg0;
    if ((fn_0339a0e0(temp_r31) == 0) || (fn_0339a0d0(temp_r31) != 0)) {
        fn_0339a080(temp_r31);
    }
}
