extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb79c(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x28];
    char block_28[0x3C];
    char block_64[1];
};
}

extern "C" void fn_038cd394(void *object, int flags) {
    if (object != 0) {
        fn_030bb79c(((Object *)object)->block_64, 2U);
        fn_030bb79c(((Object *)object)->block_28, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
