typedef int s32;

extern "C" void fn_02b27110(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" void fn_02374478(void *object, s32 flags) {
    if (object != 0) {
        fn_02b27110((char *)object + 0x74, 2U);
        fn_030eb73c((char *)object + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
