typedef int s32;

extern "C" void fn_02b1a87c(void *);

extern "C" void fn_024adf38(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    if (((void *) (*(void **)((char *)(arg0) + (0xB14))) != 0) && (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[301])(arg0) == 0)) {
        temp_r3 = (*(void **)((char *)(arg0) + (0xB14)));
        if (temp_r3 != 0) {
            fn_02b1a87c(temp_r3);
        }
    }
}
