extern "C" unsigned char data_103de0f0[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03c49888(void*, const void*);

namespace {
struct Object {
    char padding_0[8];
    const void *table;
};
}

extern "C" void* fn_03c491d8(void* storage, const void* source) {
    Object *object = (Object *)storage;

    if (object != 0 || (object = (Object *)fn_0308e578(0xA4U), object != 0)) {
        fn_03c49888(object, source);
        object->table = data_103de0f0;
    }
    return object;
}
