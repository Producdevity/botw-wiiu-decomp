extern "C" void fn_0339a080(void *);
extern "C" void fn_0339a0c4(void *);
extern "C" int fn_0339a0d0(void *);

extern "C" void fn_03271dec(void **arg0) {
    void *temp_r31;

    temp_r31 = *arg0;
    if (fn_0339a0d0(temp_r31) != 0) {
        fn_0339a080(temp_r31);
        return;
    }
    fn_0339a0c4(temp_r31);
}
