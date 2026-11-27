extern "C" void fn_037fd130(void*, void*);
extern "C" char* data_1047c3d8;

namespace {
struct Object {
    char padding_0[0x14C];
    void *resource;
};
}

extern "C" void fn_034d3fa8(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_037fd130(data_1047c3d8, resource);
        self->resource = 0;
    }
}
