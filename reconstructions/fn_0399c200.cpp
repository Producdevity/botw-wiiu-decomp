extern "C" void fn_030c078c(void*, void*, void*);
extern "C" void fn_030c44cc(void*, void*, void*);

extern "C" void fn_0399c200(void *arg0, void *arg1, void *arg2) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1B0)));
    if (temp_r3 != 0) {
        fn_030c078c(temp_r3, arg1, arg2);
        fn_030c44cc((*(void **)((char *)(arg0) + (0x1B4))), arg1, (*(void **)((char *)(arg0) + (0x1B0))));
    }
}
