extern "C" void fn_02b0b098(void*);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02af61c4(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x550)));
    if (temp_r3 != 0) {
        fn_02b0b098(temp_r3);
        fn_0308e6d0((*(void **)((char *)(arg0) + (0x550))));
        (*(void **)((char *)(arg0) + (0x550))) = 0;
    }
}
