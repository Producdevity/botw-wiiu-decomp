extern "C" void fn_02a1dce4(void*, void*, void*, void*, void*, int, void*);
extern "C" void fn_02a1e23c(void*, void*, void*);

extern "C" void fn_02a1e3e0(void **arg0, void *arg1, void *arg2) {
    fn_02a1dce4(arg0, *arg0, arg1, (void *)0x08000054, arg2, 1, 0);
    fn_02a1e23c(arg0, *arg0, (void *)0x08000054);
}
