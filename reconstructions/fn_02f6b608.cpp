typedef int s32;

extern "C" void fn_02e8ef2c(void*);

extern "C" void *data_104698d0;

extern "C" void fn_02f6b608(void *arg0) {
    void* const* vt1;
    fn_02e8ef2c(data_104698d0);
    ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[13])(arg0, -1);
}
