extern "C" void fn_0344a078(void);
extern "C" void fn_03485f68(void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0339d7a0(void *arg0) {
    void *temp_r3;

    if (fn_037966a8(arg0) != 0) {
        fn_0344a078();
        return;
    }
    temp_r3 = (*(void **)((char *)(arg0) + (0xF4)));
    if (temp_r3 != 0) {
        fn_03485f68(temp_r3);
    }
}
