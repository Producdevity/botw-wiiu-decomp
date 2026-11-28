typedef int s32;
typedef float f32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x74];
    char position[0x24];
    f32 radius;
    f32 maxRadius;
    char padding_A4[4];
    s32 state;
};

struct Owner {
    char padding_0[0x268];
    char bounds[1];
};
}

extern "C" void fn_020e0d38(void*);
extern "C" void fn_02b7f998(float *, void *);
extern "C" float fn_03c6fcf0(const float *);

extern "C" void fn_02430df4(void *self) {
    Object *object = (Object *)self;
    fn_020e0d38(self);
    object->state = 0;
    fn_02b7f998((float *)object->position, object->owner);
    f32 radius = fn_03c6fcf0((const float *)((Owner *)object->owner)->bounds);
    object->radius = radius;
    object->maxRadius = radius;
}
