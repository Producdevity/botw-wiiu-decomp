typedef int s32;

extern "C" void fn_02c1413c(void*);
extern "C" void fn_02c18648(void*);

extern "C" s32 fn_02c13294(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0xC)));
    if (temp_r3 != 0) {
        fn_02c1413c(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x24)));
    if (temp_r3_2 != 0) {
        fn_02c18648(temp_r3_2);
    }
    return 1;
}
