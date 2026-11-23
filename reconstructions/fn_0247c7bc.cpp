typedef int s32;

extern "C" void* fn_02c1974c(void *, int);

extern "C" void *fn_0247c7bc(void *arg0) {
    void *temp_r3;

    if ((s32) (*(s32 *)((char *)(arg0) + (0x40))) == 0) {
        temp_r3 = fn_02c1974c((*(void **)((char *)(arg0) + (8))), 0);
        if (temp_r3 != 0) {
            return (char *)temp_r3 + 0x1C;
        }
    }
    return 0;
}
