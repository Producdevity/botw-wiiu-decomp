extern "C" void* fn_02674b30();

namespace {
struct Source {
    char padding_0[60];
    float x;
    float y;
    float z;
};

struct Vec3 {
    float x;
    float y;
    float z;
};
}

extern "C" int fn_02674ee8(int, void* out) {
    Source *source = (Source *)fn_02674b30();

    if (source != 0) {
        Vec3 *result = (Vec3 *)out;
        result->x = source->x;
        result->y = source->y;
        result->z = source->z;
        return 1;
    }
    return 0;
}
