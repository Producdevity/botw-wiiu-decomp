extern "C" void fn_0229ade4(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x64];
    char block_64[1];
};
}

extern "C" void fn_02299a44(void *object, int flags) {
    if (object != 0) {
        fn_030bb614(((Object *)object)->block_64, 2U);
        fn_0229ade4(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
