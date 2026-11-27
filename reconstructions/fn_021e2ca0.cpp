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

extern "C" void fn_021e2ca0(void *arg0) {
    Source *source;
    Object *object = (Object *)arg0;

    object->dirty = 0;
    source = (Source *)fn_037966a8(object->owner);
    if (source != 0) {
        object->scale = source->scale;
    }
    object->flags = (u8) (object->flags | 4);
}
