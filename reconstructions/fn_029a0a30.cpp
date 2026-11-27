extern "C" void fn_03479bc8(void*, void*);

extern "C" void *data_1046fe50;

namespace {
struct Object {
    char padding_0[0x70];
    void *resource;
};
}

extern "C" void fn_029a0a30(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_03479bc8(data_1046fe50, resource);
        self->resource = 0;
    }
}
