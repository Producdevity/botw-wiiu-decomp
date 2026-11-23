typedef int s32;

extern "C" void fn_023fea2c(void*);

extern "C" void fn_02402278(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_023fea2c(arg0);
    ((s32 (*)())(vt2 = *(void* const**)((char *)(((void * (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[65])(arg0)) + (8)))[23])();
}
