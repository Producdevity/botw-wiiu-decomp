extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0386cf00(void*, int);

namespace {
struct Object {
    char padding_0[0x14];
    char block_14[0xD4];
    char block_e8[1];
};
}

extern "C" void fn_03191a8c(void *object, int flags) {
    if (object != 0) {
        fn_0386cf00(((Object *)object)->block_e8, 2);
        fn_0386cf00(((Object *)object)->block_14, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
