typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030c18dc(void *, unsigned);
extern "C" void fn_0396aee0(void*, int);

extern "C" void fn_0386cf00(void *object, s32 flags) {
    if (object != 0) {
        fn_0396aee0((char *)object + 0xC0, 2);
        fn_030c18dc((char *)object + 8, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
