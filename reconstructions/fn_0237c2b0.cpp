extern "C" void fn_0237de6c(void*);
extern "C" void fn_02b63234(void*, void*, int);
extern "C" void fn_0348799c(void *);

namespace {
struct Object {
    unsigned char padding_0[0xF4];
    void *resource;
};
}

extern "C" void fn_0237c2b0(void **arg0) {
    void *resource;
    Object *object;

    fn_0237de6c(arg0);
    object = (Object *)*arg0;
    fn_02b63234(object, 0, 0);
    resource = object->resource;
    if (resource != 0) {
        fn_0348799c(resource);
    }
}
