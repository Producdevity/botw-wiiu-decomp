extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dee84(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x8];
    char block_8[0x34];
    char block_3c[1];
};
}

extern "C" void fn_030bc3b4(void *object, int flags) {
    if (object != 0) {
        fn_030dee84(((Object *)object)->block_3c, 2U);
        fn_030dee84(((Object *)object)->block_8, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
