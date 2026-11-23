typedef int s32;

extern "C" void fn_0319278c(void*);

extern "C" void fn_0329de20(void *arg0) {
    void* const* vt1;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = (*(void **)((char *)(arg0) + (4)));
    if (temp_r31 != 0) {
        temp_r3 = (*(void **)((char *)(temp_r31) + (4)));
        if (temp_r3 != 0) {
            fn_0319278c(temp_r3);
        }
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r31) + (8)))[61])(temp_r31);
    }
}
