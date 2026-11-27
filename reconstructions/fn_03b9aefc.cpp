typedef signed char s8;

extern "C" void fn_03b9a020(void*, void*);
extern "C" void fn_03ba745c(void*);

namespace {
struct Object {
    unsigned char padding_0[4];
    void *owner;
    unsigned char padding_8[0x38];
    s8 initialized;
    unsigned char padding_41[0x47];
    void *resource;
};
}

extern "C" void fn_03b9aefc(void *arg0) {
    void *resource;
    Object *object = (Object *)arg0;

    fn_03b9a020(object->owner, object);
    resource = object->resource;
    if (resource != 0) {
        fn_03ba745c(resource);
    }
    object->initialized = 1;
}
