typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a4d6dc(void *);

extern "C" void fn_03aee760(void *object, s32 flags) {
    if (object != 0) {
        fn_03a4d6dc(object);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
