typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037e6024(void* storage, unsigned flags);
extern "C" void fn_0384c02c(void *);

extern "C" void fn_0384c178(void *object, s32 flags) {
    if (object != 0) {
        fn_0384c02c(object);
        fn_037e6024((char *)object + 0x8, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
