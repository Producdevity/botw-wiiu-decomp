typedef signed char s8;
typedef unsigned char u8;
typedef float f32;

extern "C" void* fn_037966a8(void *);

namespace {
struct Source {
    unsigned char padding_0[0xE0];
    f32 scale;
};

struct Object {
    void *owner;
    unsigned char padding_4[7];
    u8 flags;
    unsigned char padding_C[0x28];
    f32 scale;
    s8 dirty;
};
}

extern "C" void fn_021e2ca0(void *object) {
    Source *source;
    Object *self = (Object *)object;

    self->dirty = 0;
    source = (Source *)fn_037966a8(self->owner);
    if (source != 0) {
        self->scale = source->scale;
    }
    self->flags |= 4;
}
