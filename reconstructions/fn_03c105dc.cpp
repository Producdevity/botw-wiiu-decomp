extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c0eab0(void *, unsigned);

extern "C" void fn_03c105dc(void *object, int flags) {
    if (object != 0) {
        fn_03c0eab0(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
