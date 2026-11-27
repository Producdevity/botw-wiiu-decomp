extern "C" void fn_020ea4fc(void*);
extern "C" void fn_03be1738(void*);

namespace {
struct Object {
    char padding_0[0x48];
    void *resource;
};
}

extern "C" void fn_020ea578(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    fn_020ea4fc(object);
    resource = self->resource;
    if (resource != 0) {
        fn_03be1738(resource);
        self->resource = 0;
    }
}
