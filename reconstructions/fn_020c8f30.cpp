typedef int s32;

extern "C" void fn_032d44a4(void*);
extern "C" void fn_032e1448(void);

extern "C" void fn_020c8f30(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    fn_032d44a4(arg0);
    temp_r3 = *arg0;
    if (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[265])(temp_r3) != 0) {
        fn_032e1448();
    }
}
