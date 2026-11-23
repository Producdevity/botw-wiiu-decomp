typedef int s32;

extern "C" void fn_0221214c(void*);
extern "C" void fn_032ff5a8(void*, void*);

extern "C" void fn_02212858(void **arg0) {
    void* const* vt1;
    s32 temp_r3_2;
    void *temp_r3;

    fn_0221214c(arg0);
    temp_r3 = *arg0;
    temp_r3_2 = ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[265])(temp_r3);
    if (temp_r3_2 != 0) {
        fn_032ff5a8((void *)(temp_r3_2 + 8), (char *)arg0 + 0x24);
    }
}
