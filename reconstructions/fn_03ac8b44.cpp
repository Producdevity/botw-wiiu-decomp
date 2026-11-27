extern "C" void fn_03ac5958(void*, void*);
extern "C" void fn_03ac5978(void*);

namespace {
struct Owner {
    char padding_0[0x360];
    void *resource;
    char padding_364[0x684 - 0x364];
    char pool[1];
};
}

extern "C" void fn_03ac8b44(void *owner) {
    Owner *self = (Owner *)owner;
    void *resource = self->resource;

    if (resource != 0) {
        fn_03ac5958(self->pool, resource);
        self->resource = 0;
    }
    fn_03ac5978(self->pool);
}
