typedef int s32;

extern "C" void fn_0318ff00(void*);
extern "C" void fn_03192288(void*);

extern "C" void fn_0318ff5c(void *arg0) {
    void* const* vt1;
    fn_03192288(arg0);
    ((s32 (*)(void *, void *))(vt1 = *(void* const**)((char *)(arg0) + (0x30)))[9])(arg0, arg0);
    fn_0318ff00(arg0);
}
