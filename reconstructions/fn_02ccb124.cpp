typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" void fn_037d6a30(void*, int);

extern "C" void fn_02ccb124(void *object, s32 flags) {
    if (object != 0) {
        fn_037d6a30((char *)object + 0x18, 2);
        fn_030eb73c((char *)object + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
