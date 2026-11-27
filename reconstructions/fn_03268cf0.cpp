typedef float f32;

extern "C" void fn_0326182c(void*);

namespace {
struct Target {
    char padding_0[0x274];
    f32 x;
    f32 y;
    f32 z;
};
struct Object {
    Target *target;
    char padding_4[0x8C];
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_03268cf0(void *object) {
    Object *self;
    Target *target;

    self = (Object *)object;
    fn_0326182c(object);
    target = self->target;
    target->x = (f32) self->x;
    target->y = (f32) self->y;
    target->z = (f32) self->z;
}
