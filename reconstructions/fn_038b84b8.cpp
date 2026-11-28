typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_038b5bb8(void *, unsigned);
extern "C" void fn_03a83798(void *, unsigned);

extern "C" void fn_038b84b8(void *object, s32 flags) {
    if (object != 0) {
        fn_03a83798((char *)object + 0x50, 2U);
        fn_038b5bb8(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
