extern "C" void fn_02b3b9e0(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x4];
    char block_4[0x40];
    char block_44[1];
};
}

extern "C" void fn_022edd64(void *object, int flags) {
    if (object != 0) {
        fn_02b3b9e0(((Object *)object)->block_44, 2U);
        fn_030eb73c(((Object *)object)->block_4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
