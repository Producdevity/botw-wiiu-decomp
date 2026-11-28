extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a26258(void*);
extern "C" void fn_03a2706c(void*, void*, void*, void*);

extern "C" int data_1035b7c4;

namespace {
struct Object {
    char padding_0[0x10];
    int* vtable;
    char padding_14[0xA];
    unsigned short flags;
};
}

extern "C" void *fn_03a29a78(void *object, void *first, void *second, void *third) {
    if ((object != 0) || (object = fn_0308e578(0x3CU), object != 0)) {
        fn_03a26258(object);
        ((Object*)object)->vtable = &data_1035b7c4;
        fn_03a2706c(object, first, second, third);
        ((Object*)object)->flags |= 0x20;
    }
    return object;
}
