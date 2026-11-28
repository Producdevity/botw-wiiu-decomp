typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_03596884(void *);

extern "C" void fn_03596890(void *object, s32 flags) {
    if (object != 0) {
        fn_03596884(object);
        fn_030bb614((char *)object + 0x14, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
