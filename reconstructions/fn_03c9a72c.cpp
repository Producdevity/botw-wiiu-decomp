typedef int s32;

extern "C" void fn_0434bda8(void*, void*);

extern "C" s32 fn_03c9a72c(void *arg0, void *arg1) {
    void* const* vt1;
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0xC)));
    if (temp_r4 != 0) {
        fn_0434bda8(arg1, temp_r4);
    }
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x18)))[9])(arg0);
    return 0;
}
