extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" void fn_0362a47c(void*, int);

namespace {
struct Object {
    char padding_0[0x4];
    char block_4[0x20];
    char block_24[1];
};
}

extern "C" void fn_020791f8(void *object, int flags) {
    if (object != 0) {
        fn_0362a47c(((Object *)object)->block_24, 2);
        fn_030eb73c(((Object *)object)->block_4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
