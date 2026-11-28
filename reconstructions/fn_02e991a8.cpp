extern "C" void fn_02e91174(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" int data_1021adf0;

namespace {
struct Object {
    unsigned char padding_0[0x3C];
    int* vtable;
    int first;
    int second;
};
}

extern "C" void *fn_02e991a8(void *memory)
{
    Object* self = (Object*) memory;
    if (self == 0) {
        self = (Object*) fn_0308e578(0x48);
    }
    if (self != 0) {
        fn_02e91174(self);
        self->vtable = &data_1021adf0;
        self->first = 0;
        self->second = 0;
    }
    return self;
}
