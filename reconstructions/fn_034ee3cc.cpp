typedef int s32;

extern "C" int fn_037fbff0(void);

extern "C" void fn_034ee3cc(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    if ((void *) (*(void **)((char *)(arg0) + (0x50))) != 0) {
        fn_037fbff0();
        temp_r3 = (*(void **)((char *)(arg0) + (0x50)));
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xC)))[9])(temp_r3);
        (*(void **)((char *)(arg0) + (0x50))) = 0;
        fn_037fbff0();
    }
}
