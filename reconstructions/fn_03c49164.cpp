extern "C" unsigned char data_103de0f0[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c4952c(void*, int, int);

namespace {
struct Object {
    char padding_0[8];
    const void *table;
};
}

extern "C" void* fn_03c49164(void* storage, int first, int unused, int second) {
    Object *object = (Object *)storage;

    if (object != 0 || (object = (Object *)fn_0308e578(0xA4U), object != 0)) {
        fn_03c4952c(object, first, second);
        object->table = data_103de0f0;
    }
    return object;
}
