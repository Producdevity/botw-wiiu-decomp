typedef int s32;

extern "C" void fn_03bd0744(void*);

extern "C" void fn_03bd086c(void *arg0) {
    void* const* vt1;
    fn_03bd0744(arg0);
    if (arg0 != 0) {
        ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (8)))[3])(arg0, 3);
    }
}
