typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a4d6dc(void *);

extern "C" void fn_035a3430(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x14)));
    if (temp_r3 != 0) {
        fn_0308e6d0(temp_r3);
        (*(void **)((char *)(arg0) + (0x14))) = 0;
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (8))) != 0) {
        fn_03a4d6dc((char *)arg0 + 8);
    }
    (*(s32 *)((char *)(arg0) + (4))) = 0;
}
