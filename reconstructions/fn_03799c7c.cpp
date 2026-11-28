extern "C" bool fn_03797790(const void *, int);
extern "C" void fn_037977dc(void*, int);
extern "C" void fn_037978e4(void*, int);

extern "C" void fn_03799c7c(void *object) {
    if (fn_03797790(object, 0) == 0) {
        fn_037978e4(object, 0);
    }
    fn_037977dc(object, 1);
}
