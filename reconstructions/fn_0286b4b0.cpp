typedef int s32;

extern "C" void fn_0286322c(void*);

extern "C" void fn_0286b4b0(void *arg0) {
    void* const* vt1;
    fn_0286322c(arg0);
    ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[71])(arg0, 0);
}
