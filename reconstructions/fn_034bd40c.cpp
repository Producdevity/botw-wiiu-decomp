typedef int s32;

extern "C" void fn_03449d44(void*);

extern "C" void fn_034bd40c(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x50)));
    if (temp_r3 != 0) {
        fn_03449d44(temp_r3);
        (*(void **)((char *)(arg0) + (0x50))) = 0;
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (0x54))) != 0) {
        (*(s32 *)((char *)(arg0) + (0x54))) = 0;
    }
}
