extern "C" void fn_02b0f69c(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x4];
    char block_4[0xC];
    char block_10[1];
};
}

extern "C" void fn_023719e4(void *object, unsigned int flags) {
    if (object != 0) {
        fn_02b0f69c(((Object *)object)->block_10, 2);
        fn_030eb73c(((Object *)object)->block_4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
