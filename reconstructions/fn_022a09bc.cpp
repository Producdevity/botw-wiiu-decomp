extern "C" void fn_02361c10(void*, void*);
extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

namespace {
struct Object {
    char padding_0[0xB0];
    char block_b0[1];
};
}

extern "C" void fn_022a09bc(void *object, unsigned int flags) {
    if (object != 0) {
        fn_02b61568(((Object *)object)->block_b0, 2U);
        fn_02361c10(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
