typedef int s32;

extern "C" void fn_0330844c(void*, void*);

extern "C" void fn_03306290(void *arg0, void **arg1) {
    void* const* vt1;
    ((s32 (*)(void **))(vt1 = *(void* const**)&(*arg1))[9])(arg1);
    fn_0330844c(arg0, arg1);
}
