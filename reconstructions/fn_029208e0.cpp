namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
}

struct Base;
extern "C" const unsigned char* fn_0294e940(void*);

extern "C" void fn_029208e0(struct Base **holder, void *out) {
    const Vec3 *source = (const Vec3 *)fn_0294e940(*holder);
    Vec3 *dest = (Vec3 *)out;
    dest->x = source->x;
    dest->y = source->y;
    dest->z = source->z;
}
