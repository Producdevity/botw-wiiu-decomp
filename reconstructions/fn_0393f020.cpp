typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_036276c8(void*, void*);

extern "C" void fn_0393f020(void *object, s32 flags) {
    if (object != 0) {
        fn_030bb614((char *)object + 0x70, 2U);
        fn_036276c8(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
