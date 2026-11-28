extern "C" void fn_03c1b16c(void*, void*);
extern "C" void fn_03c28918(void*, void*);

extern "C" void fn_03c289b0(void *object, void *other) {
    fn_03c28918(object, other);
    fn_03c1b16c(object, other);
}
