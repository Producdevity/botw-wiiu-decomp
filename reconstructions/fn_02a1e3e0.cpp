extern "C" void fn_02a1dce4(void*, void*, void*, void*, void*, int, void*);
extern "C" void fn_02a1e23c(void*, void*, void*);

extern "C" void fn_02a1e3e0(void **object, void *other, void *third) {
    fn_02a1dce4(object, *object, other, (void *)0x08000054, third, 1, 0);
    fn_02a1e23c(object, *object, (void *)0x08000054);
}
