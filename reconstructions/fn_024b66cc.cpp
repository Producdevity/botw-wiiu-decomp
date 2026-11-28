namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};

struct Object {
    unsigned char padding_0[8];
    void *context;
    unsigned char padding_C[0x34];
    int state;
};
}

extern "C" void* fn_02c19904(void* context, int index);

extern "C" int fn_024b66cc(void* object, void* result) {
    Vec3 *position;
    Vec3 *output = static_cast<Vec3 *>(result);
    Object *self = static_cast<Object *>(object);

    if (self->state == 1) {
        position = static_cast<Vec3 *>(fn_02c19904(self->context, 0));
        if (position != 0) {
            output->x = position->x;
            output->y = position->y;
            output->z = position->z;
            return 1;
        }
    }
    return 0;
}
