extern "C" void fn_0314dd84(void*, void*, void*, float);
extern "C" void fn_033a5f20(void*);

namespace {
struct Object {
    char padding_0[0xC];
    char transform[0xC];
    float value;
    void *target;
};
}

extern "C" void fn_033a609c(void *object, float value) {
    Object *self = (Object *) object;
    if (self->target != 0) {
        self->value = value;
        fn_033a5f20(self);
        fn_0314dd84(self->target, self, self->transform, self->value);
    }
}
