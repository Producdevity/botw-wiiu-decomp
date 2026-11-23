typedef int s32;

extern "C" void fn_02d6b514(void *);
extern "C" void fn_02d7a7d4(void*);

extern "C" void fn_02ce16fc(void *arg0) {
    void* const* vt1;
    fn_02d7a7d4((*(void **)((char *)(arg0) + (0))));
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[65])(arg0);
    fn_02d6b514((*(void **)((char *)(arg0) + (0))));
}
