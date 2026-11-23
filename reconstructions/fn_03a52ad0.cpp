typedef int s32;

extern "C" void fn_0308ed3c(void*);
extern "C" void fn_03a52a48(void*);

extern "C" void fn_03a52ad0(void *arg0) {
    void* const* vt1;
    fn_0308ed3c(arg0);
    fn_03a52a48(arg0);
    if (arg0 != 0) {
        ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0x88)))[3])(arg0, 3);
    }
}
