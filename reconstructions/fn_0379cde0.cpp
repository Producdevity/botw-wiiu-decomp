extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0382b6c8(void*);

namespace {
struct Object {
    char padding_0[0x398];
    void *resource;
};
}

extern "C" void fn_0379cde0(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_0382b6c8(resource);
        fn_0308e6d0(self->resource);
        self->resource = 0;
    }
}
