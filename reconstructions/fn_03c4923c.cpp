extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c49a34(void *, unsigned);

extern "C" void fn_03c4923c(void *object, unsigned int flags) {
    if (object != 0) {
        fn_03c49a34(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
