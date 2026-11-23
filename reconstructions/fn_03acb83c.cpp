typedef int s32;

extern "C" void fn_03acb7a8(void*);

extern "C" void fn_03acb83c(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_03acb7a8(arg0);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x94)))[7])(arg0);
    ((s32 (*)(void *, s32))(vt2 = *(void* const**)((char *)(arg0) + (0x94)))[3])(arg0, 3);
}
