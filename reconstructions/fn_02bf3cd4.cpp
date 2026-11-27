typedef int s32;
typedef float f32;

extern "C" void* fn_02c0378c(void* holder);

namespace {
struct Parent {
    char padding_0[0x574];
    f32 extent;
};
struct Object {
    char padding_0[0xD4];
    f32 offset;
    f32 result;
    char padding_DC[0x1D8 - 0xDC];
    f32 margin;
};
}

extern "C" void fn_02bf3cd4(void *object, void *unused) {
    Object *self;
    Parent *parent;

    self = (Object *)object;
    parent = (Parent *)fn_02c0378c((char *)object + 0x10);
    if (parent != 0) {
        self->result = (f32) ((parent->extent - self->offset) - self->margin);
    }
}
