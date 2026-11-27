extern "C" void fn_031925fc(void*, int);

namespace {
struct Object {
    char padding_0[0x1B8];
    void *resource;
};
}

extern "C" void fn_031966b4(void *object) {
    Object *self;
    void *resource;

    self = (Object *)object;
    resource = self->resource;
    if (resource != 0) {
        fn_031925fc(resource, 1);
        self->resource = 0;
    }
}
