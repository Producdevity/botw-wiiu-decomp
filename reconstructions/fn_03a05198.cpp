extern "C" void fn_03ac4e2c(void*, void*);

extern "C" void *data_1047eb9c;

namespace {
struct Object {
    char padding_0[0x5B8];
    void *resource;
};
}

extern "C" void fn_03a05198(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_03ac4e2c(data_1047eb9c, resource);
        self->resource = 0;
    }
}
