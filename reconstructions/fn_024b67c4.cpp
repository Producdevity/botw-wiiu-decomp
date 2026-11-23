typedef int s32;

extern "C" void* fn_02c19904(void *, int);

extern "C" void *fn_024b67c4(void *arg0) {
    void *temp_r3;

    if ((s32) (*(s32 *)((char *)(arg0) + (0x40))) == 1) {
        temp_r3 = fn_02c19904((*(void **)((char *)(arg0) + (8))), 0);
        if (temp_r3 != 0) {
            return (char *)temp_r3 + 0x1C;
        }
    }
    return 0;
}
