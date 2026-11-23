typedef int s32;

extern "C" void fn_020ef3b4(void*);
extern "C" void fn_020f0054(void*);

extern "C" void fn_020ef50c(void *arg0) {
    void* const* vt1;
    fn_020f0054(arg0);
    fn_020ef3b4(arg0);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x50)))[19])((char *)arg0 + 0x48);
}
