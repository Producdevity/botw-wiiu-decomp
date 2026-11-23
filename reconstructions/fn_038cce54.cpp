typedef int s32;

extern "C" void fn_038ccdec(void*);

extern "C" void fn_038cce54(void *arg0) {
    void* const* vt1;
    fn_038ccdec(arg0);
    if (arg0 != 0) {
        ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0xA4)))[7])(arg0, 3);
    }
}
