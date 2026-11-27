namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};

struct Source {
    unsigned char padding_0[48];
    Vec3 position;
};
}

extern "C" void* fn_02674b30();

extern "C" int fn_02674f50(int unused, void* out) {
    Source *source = (Source *)fn_02674b30();
    if (source != 0) {
        Vec3 *dest = (Vec3 *)out;
        dest->x = source->position.x;
        dest->y = source->position.y;
        dest->z = source->position.z;
        return 1;
    }
    return 0;
}
