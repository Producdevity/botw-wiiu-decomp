typedef float f32;

extern "C" void fn_03191d34(void*, float);

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
    char padding_4[0x28];
    f32 *scale;
};

struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_026ab86c(void *owner) {
    Vec3 position;
    Source *source = ((Owner *)owner)->source;

    position.x = source->x;
    position.y = source->y;
    position.z = source->z;
    fn_03191d34(&position, *((Owner *)owner)->scale);
}
