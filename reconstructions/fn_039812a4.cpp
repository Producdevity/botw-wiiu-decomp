extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a83798(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x18];
    char block_18[0x2C];
    char block_44[1];
};
}

extern "C" void fn_039812a4(void *object, int flags) {
    if (object != 0) {
        fn_03a83798(((Object *)object)->block_44, 2U);
        fn_03a83798(((Object *)object)->block_18, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
