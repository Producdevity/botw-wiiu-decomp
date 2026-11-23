typedef int s32;

extern "C" void fn_020be9e4(void*);
extern "C" int fn_0339a0d0(void *);

extern "C" void fn_020beb08(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    if (fn_0339a0d0(*arg0) != 0) {
        fn_020be9e4(arg0);
        temp_r3 = *arg0;
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[215])(temp_r3);
    }
}
