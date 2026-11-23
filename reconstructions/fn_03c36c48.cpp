typedef signed char s8;
typedef int s32;

extern "C" void fn_03c289b0(void*, void*);

extern "C" void fn_03c36c48(void *arg0, s8 arg1) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0xC)));
    (*(s8 *)((char *)(arg0) + (0xEE))) = arg1;
    if (temp_r3 != 0) {
        fn_03c289b0(temp_r3, arg0);
    }
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x298)))[19])(arg0);
}
