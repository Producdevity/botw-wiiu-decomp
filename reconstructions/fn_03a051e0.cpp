extern "C" void fn_03a4d6c8(unsigned *);
extern "C" void fn_03ac4e2c(void*, void*);

extern "C" void *data_1047eb9c;

namespace {
struct Object {
    unsigned char padding_0[0x5B4];
    void *resource;
    unsigned char padding_5B8[0x5F4];
    unsigned int state[1];
};
}

extern "C" void fn_03a051e0(void *owner) {
    void *resource;
    Object *object = (Object *)owner;

    resource = object->resource;
    if (resource != 0) {
        fn_03ac4e2c(data_1047eb9c, resource);
        object->resource = 0;
        fn_03a4d6c8(object->state);
    }
}
