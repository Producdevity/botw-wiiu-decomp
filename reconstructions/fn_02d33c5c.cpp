typedef int s32;
typedef unsigned int u32;

namespace {
struct Inner {
    char padding_0[0x5C];
    s32 flags;
};
struct Handle {
    char padding_0[0x6C];
    Inner *inner;
};
struct Object {
    char padding_0[0xE8];
    void* const* vtable;
    char padding_ec[0x7F4];
    u32 state;
};
}

extern "C" s32 fn_02d33c5c(void *arg0) {
    Object *object = (Object *)arg0;
    Inner *inner;

    if ((object->state >> 0x17U) & 1) {
        inner = ((Handle *)((void * (*)())object->vtable[529])())->inner;
        if (inner != 0) {
            return inner->flags & 1;
        }
    }
    return 0;
}
