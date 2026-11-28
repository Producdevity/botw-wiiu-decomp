typedef float f32;

namespace {
struct Source {
    char padding_0[4];
    f32 first_x, first_y, first_z;
    char padding_10[4];
    f32 second_x, second_y, second_z;
};

struct Vec3 {
    f32 x, y, z;
};
}

extern "C" void fn_034acae0(void *object, void *first, void *second) {
    const Source *source = reinterpret_cast<const Source *>(object);
    if (first != 0) {
        Vec3 *out = reinterpret_cast<Vec3 *>(first);
        out->x = source->first_x;
        out->y = source->first_y;
        out->z = source->first_z;
    }
    if (second != 0) {
        Vec3 *out = reinterpret_cast<Vec3 *>(second);
        out->x = source->second_x;
        out->y = source->second_y;
        out->z = source->second_z;
    }
}
