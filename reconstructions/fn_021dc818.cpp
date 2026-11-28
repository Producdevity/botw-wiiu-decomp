extern "C" void fn_020eba44(void *, unsigned);
extern "C" void fn_0244412c(void*, int);
extern "C" void fn_0308e6d0(void *);

namespace {
struct Object {
    char padding_0[0x4C];
    char block_4c[1];
};
}

extern "C" void fn_021dc818(void *object, int flags) {
    if (object != 0) {
        fn_0244412c(((Object *)object)->block_4c, 2);
        fn_020eba44(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
