extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a288a4(void*, void*, void*, void*);

extern "C" int data_1035b580;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    int* vtable;
};
}

extern "C" void *fn_03a28cc4(void *memory, void *first, void *second, void *third) {
    Object* self = (Object*) memory;
    if (self == 0) {
        self = (Object*) fn_0308e578(0x44);
    }
    if (self != 0) {
        fn_03a288a4(self, first, second, third);
        self->vtable = &data_1035b580;
    }
    return self;
}
