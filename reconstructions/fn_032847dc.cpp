extern "C" void fn_03486fe8(void*, void*);
extern "C" void fn_03487098(void *, void *);
extern "C" void fn_0348c528(void*, int);

extern "C" void fn_032847dc(void *arg0, void *arg1) {
    fn_03486fe8(arg1, (*(void **)((char *)(arg0) + (0x540))));
    fn_03487098(arg1, (*(void **)((char *)(arg0) + (0x544))));
    fn_0348c528(arg1, 1);
}
