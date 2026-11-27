extern "C" void fn_03479bd8(void*, void*);

extern "C" void *data_1046fe50;

namespace {
struct Object {
    char padding_0[0x294];
    void *resource;
};
}

extern "C" void fn_034666c4(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_03479bd8(data_1046fe50, resource);
        self->resource = 0;
    }
}
