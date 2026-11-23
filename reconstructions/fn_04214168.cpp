typedef int s32;

extern "C" void fn_030deb2c(int);

extern "C" void fn_04214168(void *arg0, s32 arg1) {
    void* const* vt1;
    fn_030deb2c((int)((char *)arg0 + 0xE4));
    ((s32 (*)(void *, s32, s32))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[7])(arg0, arg1 + 1, 0);
}
