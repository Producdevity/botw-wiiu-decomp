typedef int s32;

extern "C" void fn_025afc10(void*, int);
extern "C" void fn_0260332c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_025b3358(void *object, s32 flags) {
    if (object != 0) {
        fn_025afc10((char *)object + 0x50, 2);
        fn_0260332c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
