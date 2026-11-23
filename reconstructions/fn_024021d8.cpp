typedef int s32;

extern "C" void fn_023fe96c(void*);

extern "C" void fn_024021d8(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_023fe96c(arg0);
    ((s32 (*)())(vt2 = *(void* const**)((char *)(((void * (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[65])(arg0)) + (8)))[19])();
}
