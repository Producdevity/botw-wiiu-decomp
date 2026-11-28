typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dea80(void *, unsigned);

extern "C" void fn_03626f08(void *object, s32 flags) {
    if (object != 0) {
        fn_030dea80((char *) object + 8, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
