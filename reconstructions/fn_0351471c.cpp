typedef unsigned char u8;

extern "C" void fn_0351eeec(void*);

namespace {
struct Object {
    char padding_0[0x74];
    void *resource;
    char padding_78[8];
    u8 flags;
};
}

extern "C" void fn_0351471c(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_0351eeec(resource);
        self->flags = (u8) (self->flags | 2);
    }
}
