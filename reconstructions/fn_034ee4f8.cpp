typedef int s32;

extern "C" int fn_037fbff0(void);

extern "C" void fn_034ee4f8(void *arg0) {
    void* const* vt1;
    void *temp_r3;

    if ((void *) (*(void **)((char *)(arg0) + (0x3C))) != 0) {
        fn_037fbff0();
        temp_r3 = (*(void **)((char *)(arg0) + (0x3C)));
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xC)))[9])(temp_r3);
        (*(void **)((char *)(arg0) + (0x3C))) = 0;
        fn_037fbff0();
    }
}
