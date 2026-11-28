extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_03c49164(void *, int, int, int);
extern "C" unsigned char data_1035e5a8[];

namespace {
struct Object {
    unsigned char padding_0[8];
    unsigned char* vtable;
};
}

extern "C" void *fn_03a49a68(void *memory, int first, int second, int third) {
    Object* self = (Object*) memory;
    if (self == 0) {
        self = (Object*) fn_0308e578(0xA4);
    }
    if (self != 0) {
        fn_03c49164(self, first, second, third);
        self->vtable = data_1035e5a8;
    }
    return self;
}
