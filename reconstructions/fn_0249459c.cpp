typedef int s32;

namespace {
struct Object {
    char padding_0[0xA4];
    s32 *vtable;
};
}

extern "C" void fn_024948a8(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_100c35cc;

extern "C" void *fn_0249459c(void *self) {
    Object *object = (Object *)self;
    if (object != 0 || (object = (Object *)fn_0308e578(0xA8U), object != 0)) {
        fn_024948a8(object);
        object->vtable = &data_100c35cc;
    }
    return object;
}
