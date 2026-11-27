typedef float f32;

extern "C" float fn_03c6fd44(void*, void*);

namespace {
struct Source {
    char padding_0[0x204];
    f32 x;
    char padding_208[0xC];
    f32 y;
    char padding_218[0xC];
    f32 z;
};

struct Owner {
    Source *source;
    char padding_4[0x2C];
    void *other;
};

struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_026d6690(void *owner) {
    Owner *self = (Owner *)owner;
    Vec3 position;
    Source *source = self->source;

    position.x = source->x;
    position.y = source->y;
    position.z = source->z;
    fn_03c6fd44(&position, self->other);
}
