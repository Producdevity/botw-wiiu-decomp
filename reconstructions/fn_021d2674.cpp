extern "C" void fn_0339a0c4(void *);
extern "C" void fn_03458474(void*);
extern "C" void fn_03489294(void*, int);

extern "C" void fn_021d2674(void *arg0) {
    void *temp_r12;
    void *temp_r3;
    void *temp_r3_2;

    fn_0339a0c4((*(void **)((char *)(arg0) + (0))));
    temp_r3 = (*(void **)((char *)(arg0) + (0x1C)));
    if (temp_r3 != 0) {
        fn_03458474(temp_r3);
    }
    temp_r12 = (*(void **)((char *)(arg0) + (0)));
    if (temp_r12 != 0) {
        temp_r3_2 = (*(void **)((char *)(temp_r12) + (0xF4)));
        if (temp_r3_2 != 0) {
            fn_03489294(temp_r3_2, 0);
        }
    }
}
