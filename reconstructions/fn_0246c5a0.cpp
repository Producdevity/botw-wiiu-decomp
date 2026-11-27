typedef unsigned char u8;
typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0xB];
    u8 flags;
    void *const *vtable;
};
}

extern "C" u8 fn_0246c5a0(void *arg0) {
    Object *self = (Object *)arg0;
    s32 result = 1;
    if (!(self->flags & 1) && (((s32 (*)())self->vtable[73])() == 0)) {
        result = 0;
    }
    return result;
}
