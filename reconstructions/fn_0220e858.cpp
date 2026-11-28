extern "C" void fn_0221d998(void *, unsigned);
extern "C" void fn_02443aa4(void*, int);
extern "C" void fn_0308e6d0(void *);

namespace {
struct Object {
    char padding_0[0x18];
    char block_18[1];
};
}

extern "C" void fn_0220e858(void *object, int flags) {
    if (object != 0) {
        fn_02443aa4(((Object *)object)->block_18, 2);
        fn_0221d998(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
