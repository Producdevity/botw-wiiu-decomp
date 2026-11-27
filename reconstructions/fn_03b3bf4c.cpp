extern "C" void fn_03ac4e2c(void*, void*);

extern "C" void *data_1047eb9c;

namespace {
struct Owner {
    char padding_0[0x20];
    void *resource;
};
}

extern "C" void fn_03b3bf4c(void *owner) {
    Owner *self = (Owner *)owner;
    void *resource = self->resource;

    if (resource != 0) {
        fn_03ac4e2c(data_1047eb9c, resource);
        self->resource = 0;
    }
}
