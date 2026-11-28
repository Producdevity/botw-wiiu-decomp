extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c48290(void*, void*, void*, void*);
extern "C" unsigned char data_1035c944[];

namespace {
struct Object {
    unsigned char padding_0[8];
    unsigned char* vtable;
};
}

extern "C" void *fn_03a3420c(void *memory, void *first, void *second, void *third) {
    Object* self = (Object*) memory;
    if (self == 0) {
        self = (Object*) fn_0308e578(0xC0);
    }
    if (self != 0) {
        fn_03c48290(self, first, second, third);
        self->vtable = data_1035c944;
    }
    return self;
}

// TYPE-UNRESOLVED size