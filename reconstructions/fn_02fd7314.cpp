extern "C" float fn_02e1d580(void*, void*);
extern "C" void fn_02fd6d4c(void*);
extern "C" void fn_030b0cb8(unsigned int *, const unsigned int *);

namespace {
struct Object {
    char padding_0[0x1BBC];
    float value;
    unsigned int vector[1];
};
}

extern "C" void fn_02fd7314(void *object, unsigned int *source) {
    Object *self = (Object *) object;
    fn_030b0cb8(self->vector, source);
    self->value = fn_02e1d580(self->vector, 0);
    fn_02fd6d4c(self);
}
