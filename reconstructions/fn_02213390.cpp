typedef signed char s8;
typedef float f32;

extern "C" void fn_0221d9f4(char *);

namespace {
struct Source {
    char padding_0[0x204];
    f32 x;
    char padding_208[0xC];
    f32 y;
    char padding_218[0xC];
    f32 z;
};

struct Target {
    Source *source;
    char padding_4[0x18];
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_02213390(s8 *object) {
    Target *self = (Target *)object;

    fn_0221d9f4((char *)self);
    Source *source = self->source;
    self->x = source->x;
    self->y = source->y;
    self->z = source->z;
}
