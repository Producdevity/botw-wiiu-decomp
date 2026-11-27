typedef unsigned char u8;
typedef float f32;

extern "C" float fn_03c6fcf0(const float *);

namespace {
struct Source {
    char padding_0[0x268];
    f32 vector[3];
};

struct Target {
    Source *source;
    char padding_4[7];
    u8 flags;
    char padding_C[0x10];
    f32 first;
    f32 second;
};
}

extern "C" void fn_021e5a78(void *target) {
    Target *self = (Target *)target;
    f32 value = fn_03c6fcf0(self->source->vector);

    self->first = value;
    self->second = value;
    self->flags |= 4;
}
