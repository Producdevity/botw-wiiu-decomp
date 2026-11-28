typedef float f32;

namespace {
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

struct Source {
    char padding_0[0x40];
    f32 x;
    char padding_44[0xC];
    f32 y;
    char padding_54[0xC];
    f32 z;
};

struct Owner {
    char padding_0[0x204];
    f32 x;
    char padding_208[0xC];
    f32 y;
    char padding_218[0xC];
    f32 z;
    char padding_228[0x108];
    Source *source;
};
}

extern "C" void fn_029e46c4(void **object, void *out) {
    Owner *owner;
    Source *source;

    owner = (Owner *)*object;
    source = owner->source;
    if (source == 0) {
        ((f32 *)out)[0] = owner->x;
        ((f32 *)out)[1] = owner->y;
        ((f32 *)out)[2] = owner->z;
        return;
    }
    ((f32 *)out)[0] = source->x;
    ((f32 *)out)[1] = source->y;
    ((f32 *)out)[2] = source->z;
}
