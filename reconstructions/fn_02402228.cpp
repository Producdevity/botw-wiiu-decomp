typedef int s32;

extern "C" void fn_023fec98(void *);

extern "C" void fn_02402228(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_023fec98(arg0);
    ((s32 (*)())(vt2 = *(void* const**)((char *)(((void * (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[65])(arg0)) + (8)))[21])();
}
