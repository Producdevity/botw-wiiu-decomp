typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_0223174c(void*);
extern "C" float fn_03c6fcf0(const float *);

namespace {
struct Object {
    s32 base;
    char padding_4[7];
    u8 flags;
    char padding_c[0x28];
    f32 scale_x;
    f32 scale_y;
};
}

extern "C" void fn_02204850(void *object) {
    Object *self = (Object *)object;
    f32 scale;

    fn_0223174c(self);
    scale = fn_03c6fcf0((const float *)(self->base + 0x25C));
    self->scale_x = scale;
    self->scale_y = scale;
    self->flags |= 4;
}
