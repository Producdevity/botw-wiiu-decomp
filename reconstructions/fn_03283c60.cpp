extern "C" void fn_034ceb00(void*);
extern "C" void fn_034ced48(void*);

extern "C" void fn_03283c60(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0x540)));
    if (temp_r3 != 0) {
        fn_034ceb00(temp_r3);
        (*(void **)((char *)(arg0) + (0x540))) = 0;
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x544)));
    if (temp_r3_2 != 0) {
        fn_034ced48(temp_r3_2);
        (*(void **)((char *)(arg0) + (0x544))) = 0;
    }
}
