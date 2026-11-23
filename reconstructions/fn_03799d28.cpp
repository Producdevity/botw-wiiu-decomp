extern "C" bool fn_03797790(const void *, int);
extern "C" void fn_03799ccc(void*);
extern "C" void fn_03799cd4(void*, int);

extern "C" void fn_03799d28(void *arg0) {
    if (fn_03797790(arg0, 1) != 0) {
        fn_03799ccc(arg0);
        fn_03799cd4(arg0, 1);
    }
}
