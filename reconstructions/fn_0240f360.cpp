typedef int s32;

extern "C" void fn_02254478(void *, unsigned);
extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0240f360(void *object, s32 flags) {
    if (object != 0) {
        fn_02b61568((char *)object + 0x118, 2U);
        fn_02254478(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
