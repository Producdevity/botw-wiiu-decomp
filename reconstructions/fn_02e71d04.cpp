typedef signed char s8;
typedef int s32;

extern "C" void fn_02e7195c(void*);

extern "C" void fn_02e71d04(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    fn_02e7195c(arg0);
    temp_r3 = (*(void **)((char *)(arg0) + (4)));
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0x10)))[19])(temp_r3);
    (*(s8 *)((char *)(arg0) + (0x1C8))) = 0;
}
