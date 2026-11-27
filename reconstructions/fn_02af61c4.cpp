extern "C" void fn_02b0b098(void*);
extern "C" void fn_0308e6d0(void *);

namespace {
struct Object {
    char padding_0[0x550];
    void *resource;
};
}

extern "C" void fn_02af61c4(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_02b0b098(resource);
        fn_0308e6d0(self->resource);
        self->resource = 0;
    }
}
