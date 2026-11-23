typedef signed char s8;
typedef int s32;

extern "C" void fn_03467dd8(void);

extern "C" void fn_0230c72c(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0)));
    (*(s8 *)((char *)(arg0) + (0x24))) = 0;
    if (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[91])(temp_r3) != 0) {
        fn_03467dd8();
    }
}
