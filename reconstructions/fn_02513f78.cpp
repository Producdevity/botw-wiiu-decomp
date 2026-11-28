typedef int s32;

extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);

extern "C" void fn_02513f78(void *object, s32 flags) {
    if (object != 0) {
        fn_02b61568((char *)object + 0x34, 2U);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
