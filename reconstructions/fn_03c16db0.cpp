extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c124a4(void*, void*);

extern "C" void fn_03c16db0(void *object, int flags) {
    if (object != 0) {
        fn_03c124a4(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
