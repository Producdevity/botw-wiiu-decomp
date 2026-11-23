typedef int s32;

extern "C" void fn_024021d8(void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_020f2a8c(void *arg0) {
    void* const* vt1;
    fn_024021d8(arg0);
    if (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[69])(arg0) != 0) {
        fn_030ea2cc(arg0);
    }
}
