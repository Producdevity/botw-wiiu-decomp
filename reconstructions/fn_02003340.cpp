typedef int s32;

extern "C" void fn_02af6308(void*);
extern "C" void fn_03be1738(void*);

extern "C" void fn_02003340(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    fn_02af6308(arg0);
    temp_r3 = (*(void **)((char *)(arg0) + (0x878)));
    if (temp_r3 != 0) {
        fn_03be1738(temp_r3);
        (*(void **)((char *)(arg0) + (0x878))) = 0;
    }
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[317])(arg0);
}
