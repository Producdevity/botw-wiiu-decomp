extern "C" int fn_025e7548(void*);
extern "C" void fn_02b7f998(float *, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x174 - 4];
    float vector[1];
};
}

extern "C" int fn_024c695c(void **object) {
    Object *self = (Object *) object;
    if (fn_025e7548(self) == 0) {
        return 0;
    }
    fn_02b7f998(self->vector, self->owner);
    return 1;
}
