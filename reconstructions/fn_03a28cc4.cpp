extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a288a4(void*, void*, void*, void*);

extern "C" int data_1035b580;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    int* vtable;
};
}

extern "C" void *fn_03a28cc4(void *arg0, void *arg1, void *arg2, void *arg3) {
    Object* self = (Object*) arg0;
    if (self == 0) {
        self = (Object*) fn_0308e578(0x44);
    }
    if (self != 0) {
        fn_03a288a4(self, arg1, arg2, arg3);
        self->vtable = &data_1035b580;
    }
    return self;
}
