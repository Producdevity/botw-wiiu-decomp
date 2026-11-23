extern "C" void fn_020ea4fc(void*);
extern "C" void fn_03be1738(void*);

extern "C" void fn_020ea578(void *arg0) {
    void *temp_r3;

    fn_020ea4fc(arg0);
    temp_r3 = (*(void **)((char *)(arg0) + (0x48)));
    if (temp_r3 != 0) {
        fn_03be1738(temp_r3);
        (*(void **)((char *)(arg0) + (0x48))) = 0;
    }
}
