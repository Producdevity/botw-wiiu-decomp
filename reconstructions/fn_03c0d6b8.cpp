typedef float f32;

namespace {
struct Matrix {
    f32 value_0, value_4, value_8, padding_c;
    f32 value_10, value_14, value_18, padding_1c;
    f32 value_20, value_24, value_28;
};

struct Vec3 {
    f32 x, y, z;
};
}

extern "C" void fn_03c0d6b8(void *result, void *first, void *second, void *third) {
    Matrix *out = reinterpret_cast<Matrix *>(result);
    const Vec3 *a = reinterpret_cast<const Vec3 *>(first);
    const Vec3 *b = reinterpret_cast<const Vec3 *>(second);
    const Vec3 *c = reinterpret_cast<const Vec3 *>(third);
    out->value_0 = a->x;
    out->value_4 = b->x;
    out->value_8 = c->x;
    out->value_10 = a->y;
    out->value_14 = b->y;
    out->value_18 = c->y;
    out->value_20 = a->z;
    out->value_24 = b->z;
    out->value_28 = c->z;
}
