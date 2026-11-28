extern "C" void fn_02297c74(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x3C];
    char block_3c[1];
};
}

extern "C" void fn_0229c65c(void *object, int flags) {
    if (object != 0) {
        fn_030bb614(((Object *)object)->block_3c, 2U);
        fn_02297c74(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
