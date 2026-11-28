extern "C" bool fn_03797790(const void *, int);
extern "C" void fn_03799ccc(void*);
extern "C" void fn_03799cd4(void*, int);

extern "C" void fn_03799d28(void *object) {
    if (fn_03797790(object, 1) != 0) {
        fn_03799ccc(object);
        fn_03799cd4(object, 1);
    }
}
