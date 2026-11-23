extern "C" void fn_0344a064(void);
extern "C" void fn_03485e4c(void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0339d744(void *arg0) {
    void *temp_r3;

    if (fn_037966a8(arg0) != 0) {
        fn_0344a064();
        return;
    }
    temp_r3 = (*(void **)((char *)(arg0) + (0xF4)));
    if (temp_r3 != 0) {
        fn_03485e4c(temp_r3);
    }
}
