extern "C" void fn_034c4a28(void*, void*);
extern "C" void fn_034ceb00(void*);

extern "C" void fn_0248f504(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x18)));
    if (temp_r4 != 0) {
        fn_034c4a28(arg1, temp_r4);
        (*(void **)((char *)(arg0) + (0x18))) = 0;
    }
    temp_r3 = (*(void **)((char *)(arg0) + (0x20)));
    if (temp_r3 != 0) {
        fn_034ceb00(temp_r3);
        (*(void **)((char *)(arg0) + (0x20))) = 0;
    }
}
