extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x10];
    char block_10[0xC];
    char block_1c[1];
};
}

extern "C" void fn_03453d54(void *object, int flags) {
    if (object != 0) {
        fn_0333bcec(((Object *)object)->block_1c, 2U);
        fn_0333bcec(((Object *)object)->block_10, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
