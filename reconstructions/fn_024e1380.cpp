typedef float f32;

struct Base;
extern "C" const unsigned char* fn_0294e940(void*);

namespace {
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_024e1380(struct Base **holder, void *out) {
    const Vec3 *source = (const Vec3 *)fn_0294e940(*holder);
    Vec3 *result = (Vec3 *)out;

    result->x = source->x;
    result->y = source->y;
    result->z = source->z;
}
