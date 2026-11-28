typedef int s32;

extern "C" void fn_0330844c(void*, void*);

extern "C" void fn_03306290(void *object, void **target) {
    void* const* vtable = *(void* const**)target;
    ((s32 (*)(void **))vtable[9])(target);
    fn_0330844c(object, target);
}
