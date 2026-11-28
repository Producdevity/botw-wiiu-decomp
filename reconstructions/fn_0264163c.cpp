extern "C" void fn_02c199ec(void*, void*);
extern "C" void fn_02c19d74(void*, void*, void*);

extern "C" void fn_0264163c(void **object, void *value) {
    fn_02c199ec(value, 0);
    fn_02c19d74(value, *object, 0);
}
