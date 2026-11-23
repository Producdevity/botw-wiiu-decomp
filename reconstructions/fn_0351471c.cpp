typedef unsigned char u8;

extern "C" void fn_0351eeec(void*);

extern "C" void fn_0351471c(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x74)));
    if (temp_r3 != 0) {
        fn_0351eeec(temp_r3);
        (*(u8 *)((char *)(arg0) + (0x80))) = (u8) ((*(u8 *)((char *)(arg0) + (0x80))) | 2);
    }
}
