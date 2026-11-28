extern "C" void fn_0308e6d0(void *);
struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

namespace {
struct Object {
    char padding_0[0x34];
    char block_34[1];
};
}

extern "C" void fn_0313f2dc(void *object, int flags) {
    if (object != 0) {
        fn_0308ead0((OwnedBuffer *)((Object *)object)->block_34);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
