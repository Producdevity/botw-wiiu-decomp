typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a75b14(void *, unsigned);
extern "C" void fn_03a774c4(void *, unsigned);

extern "C" void fn_03a0e5d8(void *object, s32 flags) {
    if (object != 0) {
        fn_03a75b14((char *)object + 0x158, 2U);
        fn_03a774c4(object, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
