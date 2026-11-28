extern "C" void fn_0221d998(void *, unsigned);
extern "C" void fn_02443aa4(void*, int);
extern "C" void fn_0308e6d0(void *);

namespace {
struct Object {
    char padding_0[0x1C];
    char block_1c[1];
};
}

extern "C" void fn_02206014(void *object, int flags) {
    if (object != 0) {
        fn_02443aa4(((Object *)object)->block_1c, 2);
        fn_0221d998(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
