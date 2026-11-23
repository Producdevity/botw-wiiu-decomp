extern "C" void fn_0357f524(void*);
extern "C" void fn_03ba0058(void*);

extern "C" void fn_0357f588(void **arg0) {
    void *temp_r3;

    fn_0357f524(arg0);
    temp_r3 = *arg0;
    if (temp_r3 != 0) {
        fn_03ba0058(temp_r3);
        *arg0 = 0;
    }
}
