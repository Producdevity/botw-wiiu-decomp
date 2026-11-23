extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031850dc(void*);

extern "C" void fn_0379ce94(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x3B4)));
    if (temp_r3 != 0) {
        fn_031850dc(temp_r3);
        fn_0308e6d0((*(void **)((char *)(arg0) + (0x3B4))));
        (*(void **)((char *)(arg0) + (0x3B4))) = 0;
    }
}
