extern "C" void fn_0237de6c(void*);
extern "C" void fn_02b63234(void*, void*, int);
extern "C" void fn_0348799c(void *);

namespace {
struct Owner {
    unsigned char padding_0[0xF4];
    void *resource;
};
}

extern "C" void fn_0237c2b0(void **object) {
    void *resource;
    Owner *owner;

    fn_0237de6c(object);
    owner = static_cast<Owner *>(*object);
    fn_02b63234(owner, 0, 0);
    resource = owner->resource;
    if (resource != 0) {
        fn_0348799c(resource);
    }
}
