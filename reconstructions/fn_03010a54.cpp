extern "C" unsigned char data_10250fc0[];
extern "C" void fn_02e73d2c(void*);
extern "C" void fn_02ecfd50(void*);
extern "C" void fn_0305d6b0(void*);
extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Object {
    char padding_0[44];
    const void *vtable;
    char first[72];
    char second[1];
};
}

extern "C" void* fn_03010a54(void* memory) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0x1BCU), object != 0)) {
        fn_02e73d2c(object);
        object->vtable = data_10250fc0;
        fn_02ecfd50(object->first);
        fn_0305d6b0(object->second);
    }
    return object;
}
