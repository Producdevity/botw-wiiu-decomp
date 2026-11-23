typedef int s32;

extern "C" void fn_020c5b04(void*);
extern "C" void fn_02b3ba3c(void*, void*);
extern "C" void fn_034679dc(void);

extern "C" void fn_022ed6fc(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = *arg0;
    if (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[91])(temp_r3) != 0) {
        fn_034679dc();
    }
    fn_02b3ba3c((char *)arg0 + 0x44, *arg0);
    fn_020c5b04(arg0);
}
