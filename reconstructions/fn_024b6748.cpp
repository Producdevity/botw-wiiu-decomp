extern "C" void* fn_02c19904(void* context, int index);

namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
struct Source {
    char padding_0[12];
    Vec3 position;
};
struct Object {
    char padding_0[8];
    void *context;
    char padding_c[0x34];
    int mode;
};
}

extern "C" int fn_024b6748(void* object, void* result) {
    Object *self = static_cast<Object *>(object);
    Vec3 *out = static_cast<Vec3 *>(result);
    Source *source;

    if (self->mode == 1) {
        source = static_cast<Source *>(fn_02c19904(self->context, 0));
        if (source != 0) {
            out->x = source->position.x;
            out->y = source->position.y;
            out->z = source->position.z;
            return 1;
        }
    }
    return 0;
}
