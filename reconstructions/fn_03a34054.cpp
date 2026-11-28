extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03c48004(void*, void*, void*, void*);
extern "C" unsigned char data_1035c894[];

namespace {
struct Object {
    unsigned char padding_0[8];
    unsigned char* vtable;
};
}

extern "C" void *fn_03a34054(void *memory, void *first, void *second, void *third) {
    Object* self = (Object*) memory;
    if (self == 0) {
        self = (Object*) fn_0308e578(0xB0);
    }
    if (self != 0) {
        fn_03c48004(self, first, second, third);
        self->vtable = data_1035c894;
    }
    return self;
}
