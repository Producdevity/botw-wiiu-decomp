typedef int s32;

extern "C" void fn_02938210(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037d6a30(void*, int);

extern "C" void fn_0293ad0c(void *object, s32 flags) {
    if (object != 0) {
        fn_037d6a30((char *)object + 0xB0, 2);
        fn_02938210(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
